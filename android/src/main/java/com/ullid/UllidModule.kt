package com.ullid

import com.facebook.react.bridge.ReactApplicationContext
import com.facebook.react.module.annotations.ReactModule

@ReactModule(name = UllidModule.NAME)
class UllidModule(reactContext: ReactApplicationContext) :
  NativeUllidSpec(reactContext) {

    init {
        System.loadLibrary("react-native-ullid")
    }

  override fun getName(): String {
    return NAME
  }

  external fun generateULLID(): String;

  override fun ULLID(): String {
    return generateULLID()
  }

  companion object {
    const val NAME = "Ullid"
  }
}
