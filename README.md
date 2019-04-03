
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
import RNZalo from 'rn-zalo';

// TODO: What to do with the module?
RNZalo;
```
  
