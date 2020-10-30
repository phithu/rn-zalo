import {
  StyleSheet,
  View,
  TouchableOpacity,
  Image,
  Text,
  SafeAreaView,
} from "react-native";
import React from "react";
import RNZalo from "rn-zalo";

export default class App extends React.Component {

  constructor(props) {
    super(props);
    this.state = {
      data: null,
    };
  }

  login = async () => {
    try {
      const data = await RNZalo.login();
      this.setState({ data });
    } catch (e) {
      console.log("e", e);
    }
  };

  logout = () => {
    RNZalo.logout();
  };

  renderUser() {
    if (!this.state.data) {
      return null;
    }
    const { birthday, gender, id, picture, name } = this.state.data.user;
    return (
      <View style={styles.userInfoContainer}>
        <Text style={{ fontSize: 18, fontWeight: "bold" }}>Name: {name}</Text>
        <Text>Id: {id}</Text>
        <Text>Birthday: {birthday}</Text>
        <Text>Gender: {gender}</Text>
        <Image
          style={{ width: 100, height: 100, borderRadius: 50, marginTop: 20 }}
          source={{ uri: picture.data.url }}
        />
      </View>
    );
  }

  render() {
    return (
      <SafeAreaView style={{ flex: 1 }}>
        <View style={styles.container}>
          <View style={{ marginTop: 30 }}>
            <TouchableOpacity style={styles.buttonStyle} onPress={this.login}>
              <Text style={{ color: "#fff", fontSize: 18 }}>Login</Text>
            </TouchableOpacity>

            <TouchableOpacity style={styles.buttonStyle} onPress={this.logout}>
              <Text style={{ color: "#fff", fontSize: 18 }}>Logout</Text>
            </TouchableOpacity>
          </View>
          {this.renderUser()}
        </View>
      </SafeAreaView>
    );
  }
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: "#F5FCFF",
  },
  userInfoContainer: {
    flexGrow: 1,
    flexShrink: 1,
    alignItems: "center",
  },
  buttonStyle: {
    alignSelf: "center",
    paddingVertical: 10,
    paddingHorizontal: 20,
    backgroundColor: "blue",
    flexDirection: "row",
    alignItems: "center",
    borderRadius: 5,
    marginVertical: 10,
  },
});
