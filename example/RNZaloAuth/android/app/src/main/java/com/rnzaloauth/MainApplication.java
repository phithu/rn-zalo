package com.rnzaloauth;


import rnzalo.RNZaloPackage;

import android.app.Application;


import com.facebook.react.ReactApplication;
import com.facebook.react.ReactNativeHost;
import com.facebook.react.ReactPackage;
import com.facebook.react.shell.MainReactPackage;
import com.facebook.soloader.SoLoader;
import com.zing.zalo.zalosdk.oauth.ZaloSDKApplication;

import java.util.Arrays;
import java.util.List;

//import java.security.MessageDigest;
//import java.security.NoSuchAlgorithmException;
//
//import android.content.pm.PackageInfo;
//import android.content.pm.PackageManager;
//import android.content.pm.Signature;
//import android.util.Base64;
//import android.util.Log;


public class MainApplication extends Application implements ReactApplication {

    private final ReactNativeHost mReactNativeHost = new ReactNativeHost(this) {
        @Override
        public boolean getUseDeveloperSupport() {
            return BuildConfig.DEBUG;
        }

        @Override
        protected List<ReactPackage> getPackages() {
            return Arrays.<ReactPackage>asList(
                    new MainReactPackage(),
                    new RNZaloPackage()
            );
        }

        @Override
        protected String getJSMainModuleName() {
            return "index";
        }
    };

    @Override
    public ReactNativeHost getReactNativeHost() {
        return mReactNativeHost;
    }

    @Override
    public void onCreate() {
        super.onCreate();
        ZaloSDKApplication.wrap(this);
        SoLoader.init(this, /* native exopackage */ false);
    }
}
