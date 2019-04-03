
# React Native Zalo

## Getting started

`$ npm install rn-zalo --save`

### Mostly automatic installation

`$ react-native link rn-zalo`

### Manual installation


#### iOS

1. In XCode, in the project navigator, right click `Libraries` ➜ `Add Files to [your project's name]`
2. Go to `node_modules` ➜ `rn-zalo` and add `RNZalo.xcodeproj`
3. In XCode, in the project navigator, select your project. Add `libRNZalo.a` to your project's `Build Phases` ➜ `Link Binary With Libraries`
4. Run your project (`Cmd+R`)<

#### Android

1. Open up `android/app/src/main/java/[...]/MainActivity.java`
  - Add `import rnzalo.RNZaloPackage;` to the imports at the top of the file
  - Add `new RNZaloPackage()` to the list returned by the `getPackages()` method
2. Append the following lines to `android/settings.gradle`:
  	```
  	include ':rn-zalo'
  	project(':rn-zalo').projectDir = new File(rootProject.projectDir, 	'../node_modules/rn-zalo/android')
  	```
3. Insert the following lines inside the dependencies block in `android/app/build.gradle`:
  	```
      compile project(':rn-zalo')
  	```

## Usage
```javascript
import {
  StyleSheet,
  View,
  TouchableOpacity,
  Image,
  Text,
} from 'react-native';
import React from 'react';
import RNZalo from 'rn-zalo';

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
      console.log('e', e);
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
        <Text style={{ fontSize: 18, fontWeight: 'bold' }}>Name: {name}</Text>
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
      <View style={styles.container}>
        <View style={{ marginTop: 30 }}>
          <TouchableOpacity style={styles.buttonStyle} onPress={this.login}>
            <Text style={{ color: '#fff', fontSize: 18 }}>Login</Text>
          </TouchableOpacity>

          <TouchableOpacity style={styles.buttonStyle} onPress={this.logout}>
            <Text style={{ color: '#fff', fontSize: 18 }}>Logout</Text>
          </TouchableOpacity>
        </View>
        {this.renderUser()}
      </View>
    );
  }
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#F5FCFF',
  },
  userInfoContainer: {
    flexGrow: 1,
    flexShrink: 1,
    alignItems: 'center',
  },
  buttonStyle: {
    alignSelf: 'center',
    paddingVertical: 10,
    paddingHorizontal: 20,
    backgroundColor: 'blue',
    flexDirection: 'row',
    alignItems: 'center',
    borderRadius: 5,
    marginVertical: 10,
  },
});
```
  
