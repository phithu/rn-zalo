
# react-native-zalo

## Getting started

`$ npm install react-native-zalo --save`

### Mostly automatic installation

`$ react-native link react-native-zalo`

### Manual installation


#### iOS

1. In XCode, in the project navigator, right click `Libraries` ➜ `Add Files to [your project's name]`
2. Go to `node_modules` ➜ `react-native-zalo` and add `RNZalo.xcodeproj`
3. In XCode, in the project navigator, select your project. Add `libRNZalo.a` to your project's `Build Phases` ➜ `Link Binary With Libraries`
4. Run your project (`Cmd+R`)<

#### Android

1. Open up `android/app/src/main/java/[...]/MainActivity.java`
  - Add `import rnzalo.RNZaloPackage;` to the imports at the top of the file
  - Add `new RNZaloPackage()` to the list returned by the `getPackages()` method
2. Append the following lines to `android/settings.gradle`:
  	```
  	include ':react-native-zalo'
  	project(':react-native-zalo').projectDir = new File(rootProject.projectDir, 	'../node_modules/react-native-zalo/android')
  	```
3. Insert the following lines inside the dependencies block in `android/app/build.gradle`:
  	```
      compile project(':react-native-zalo')
  	```

#### Windows
[Read it! :D](https://github.com/ReactWindows/react-native)

1. In Visual Studio add the `RNZalo.sln` in `node_modules/react-native-zalo/windows/RNZalo.sln` folder to their solution, reference from their app.
2. Open up your `MainPage.cs` app
  - Add `using Zalo.RNZalo;` to the usings at the top of the file
  - Add `new RNZaloPackage()` to the `List<IReactPackage>` returned by the `Packages` method


## Usage
```javascript
import RNZalo from 'react-native-zalo';

// TODO: What to do with the module?
RNZalo;
```
  