package com.zalo_app;

import com.facebook.react.ReactActivity;

import android.content.Intent;

import com.zing.zalo.zalosdk.oauth.ZaloSDK;

public class MainActivity extends ReactActivity {

    /**
     * Returns the name of the main component registered from JavaScript. This is used to schedule
     * rendering of the component.
     */
    @Override
    protected String getMainComponentName() {
        return "zalo_app";
    }

    @Override
    public void onActivityResult(int reqCode, int resCode, Intent d) {
        super.onActivityResult(reqCode, resCode, d);
        ZaloSDK.Instance.onActivityResult(this, reqCode, resCode, d);
    }
}
