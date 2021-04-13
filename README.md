
# React Native Zalo

[![npm version](https://badge.fury.io/js/rn-zalo.svg)](https://badge.fury.io/js/rn-zalo)
[![npm](https://img.shields.io/npm/dt/rn-zalo.svg)](https://npmcharts.com/compare/rn-zalo?minimal=true)
![MIT](https://img.shields.io/dub/l/vibe-d.svg)
![Platform - Android and iOS](https://img.shields.io/badge/platform-Android%20%7C%20iOS-yellow.svg)

Android | iOS
------------ | -------------
<img src="https://github.com/phithu/rn-zalo/blob/master/screenshots/android.gif" width="360"> | <img src="https://github.com/phithu/rn-zalo/blob/master/screenshots/ios.gif" width="360">


### Installation

```sh
yarn add rn-zalo or npm i rn-zalo --save
```

### Zalo SDK Documents
- iOS: https://developers.zalo.me/docs/sdk/ios-sdk-9
- Android: https://developers.zalo.me/docs/sdk/android-sdk-8

### Setup (Mandatory)

#### iOS

##### 1. Install pod: ```cd ios && pod install```
##### 2. Add url type `Main target setting -> info -> URL types -> click +`
`identifier = “zalo”, URL Schemes = “zalo-<YOUR_APP_ID>”`

##### 3. Open `AppDelegate.m`
```text
#import <ZaloSDK/ZaloSDK.h>
- (BOOL)application:(UIApplication *)application
 didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    ...
    [[ZaloSDK sharedInstance] initializeWithAppId:@"<YOUR_APP_ID>"];
    return YES;
}
 
- (BOOL)application:(UIApplication *)application openURL:(nonnull NSURL *)url options:(nonnull NSDictionary<NSString *,id> *)options {
  return [[ZDKApplicationDelegate sharedInstance] application:application openURL:url options:options];
}
```

##### 4. Clear and Run your project

#### Android

##### 1. Open up `android/app/src/main/java/[...]/MainApplication.java`
  - Add `import com.zing.zalo.zalosdk.oauth.ZaloSDKApplication;` to the imports
  - Add `ZaloSDKApplication.wrap(this)` on "onCreate" function
  
##### 2. Open up `android/app/src/main/java/[...]/MainActivity.java`
  ```
 import android.content.Intent;
 import com.zing.zalo.zalosdk.oauth.ZaloSDK;
 import com.facebook.react.ReactActivity;
 
 public class MainActivity extends ReactActivity {
     ...
      
     @Override
     public void onActivityResult(int requestCode, int resultCode, Intent data) {
         super.onActivityResult(requestCode, resultCode, data);
         ZaloSDK.Instance.onActivityResult(this, requestCode, resultCode, data);
     }
 }
  ```

##### 3. Insert the following lines inside the dependencies block in `android/app/build.gradle`
```text
implementation "com.zing.zalo.zalosdk:core:+"
implementation "com.zing.zalo.zalosdk:auth:+"
implementation "com.zing.zalo.zalosdk:openapi:+"
```
##### 4. Add appId to `android/app/src/main/res/values/strings.xml`
```
<resources>
    <string name="app_name">App Name</string>
    <string name="appID"><YOUR_APP_ID></string>
</res>
```

##### 5. Add code bellow to `android/app/src/main/res/AndroidManifest.xml`
```
 <application
        ...
        <meta-data
            android:name="com.zing.zalo.zalosdk.appID"
            android:value="@string/appID" />

        <activity
            android:name="com.zing.zalo.zalosdk.oauth.BrowserLoginActivity">
        <intent-filter>
        <action android:name="android.intent.action.VIEW" />
        <category android:name="android.intent.category.DEFAULT" />
        <category android:name="android.intent.category.BROWSABLE" />
        <data android:scheme="zalo-[appid]" />
    <!-- Lưu ý: thay [appid] bằng id của ứng dụng lấy trên trang developers --!>
    </intent-filter>
        </activity>
    </application>
```

##### 6. Open `proguard-rules.pro` file add code below
```text
-keep class com.zing.zalo.**{ *; }
-keep enum com.zing.zalo.**{ *; }
-keep interface com.zing.zalo.**{ *; }
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
  
  
 ### Issues:
 1. If you see the warning ```RCTBridge required dispatch_sync to load RCTDevLoadingView. This may lead to deadlocks``` => Follow this link https://github.com/facebook/react-native/issues/16376#issuecomment-350523177 to resolve it
  
