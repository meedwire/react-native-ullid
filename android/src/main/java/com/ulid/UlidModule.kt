package com.ulid

import com.facebook.react.bridge.ReactApplicationContext
import com.facebook.react.module.annotations.ReactModule

@ReactModule(name = UlidModule.NAME)
class UlidModule(reactContext: ReactApplicationContext) :
  NativeUlidSpec(reactContext) {

    init {
        System.loadLibrary("react-native-ulid")
    }

  override fun getName(): String {
    return NAME
  }

  external fun generateULID(): String;

  override fun ULID(): String {
    return generateULID()
  }

  companion object {
    const val NAME = "Ulid"
  }
}
