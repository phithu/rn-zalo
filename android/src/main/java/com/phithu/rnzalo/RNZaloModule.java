package com.phithu.rnzalo;

import com.zing.zalo.zalosdk.oauth.OAuthCompleteListener;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.zing.zalo.zalosdk.oauth.ZaloOpenAPICallback;
import com.zing.zalo.zalosdk.oauth.ZaloSDK;
import com.zing.zalo.zalosdk.oauth.OauthResponse;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.bridge.Promise;
import com.zing.zalo.zalosdk.oauth.LoginVia;

import org.json.JSONObject;


public class RNZaloModule extends ReactContextBaseJavaModule {

    private final ReactApplicationContext mReactContext;


    public RNZaloModule(ReactApplicationContext reactContext) {
        super(reactContext);
        this.mReactContext = reactContext;
    }

    @ReactMethod
    public void login(final Promise promise) {
        ZaloSDK.Instance.unauthenticate();
        final ReactApplicationContext activity = this.mReactContext;
        final String[] Fields = {"id", "birthday", "gender", "picture", "name"};
        ZaloSDK.Instance.authenticate(this.mReactContext.getCurrentActivity(), LoginVia.APP_OR_WEB, new OAuthCompleteListener() {
            @Override
            public void onAuthenError(int errorCode, String message) {
                final String code = errorCode + "";
                promise.reject(code, message);
            }


            @Override
            public void onGetOAuthComplete(OauthResponse response) {
                final WritableMap params = Arguments.createMap();
                ZaloSDK.Instance.getProfile(activity, new ZaloOpenAPICallback() {
                    @Override
                    public void onResult(JSONObject data) {
                        try {
                            WritableMap user = UtilService.convertJsonToMap(data);
                            params.putMap("user", user);
                            promise.resolve(params);
                        } catch (Exception ex) {
                            String message = ex.getMessage();
                            promise.reject("Get profile error", message);
                        }
                    }
                }, Fields);
            }
        });
    }

    @ReactMethod
    public void logout() {
        ZaloSDK.Instance.unauthenticate();
    }


    @Override
    public String getName() {
        return "RNZalo";
    }
}
