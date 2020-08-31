const nativeModule = require("../build/Release/webview.node");

function enumKeys(){
  nativeModule.enumKeys();
}

function readValues(){
  nativeModule.readValues();
}

module.exports = {
    enumKeys,
    readValues
}