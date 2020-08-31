const nativeModule = require("../../build/Release/registry.node");


export function enumKeys(){
  nativeModule.enumKeys();
}

export function readValues(){
  nativeModule.readValues();
}