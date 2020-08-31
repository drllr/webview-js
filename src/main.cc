#include "nan.h"
#include "webview.h"
#include <stdio.h>

using namespace Nan;
using namespace v8;

namespace {
NAN_METHOD(ReadValues)
{
  printf("%d",10);
}

NAN_METHOD(EnumKeys) {
  printf("%d",20);
}

NAN_METHOD(Test) {
  webview_t w = webview_create(0, NULL);
	webview_set_title(w, "Webview Example");
	webview_set_size(w, 480, 320, WEBVIEW_HINT_NONE);
	webview_navigate(w, "https://en.m.wikipedia.org/wiki/Main_Page");
	webview_run(w);
}

NAN_MODULE_INIT(Init) {
  Nan::SetMethod(target, "readValues", ReadValues);
  Nan::SetMethod(target, "enumKeys", EnumKeys);
  Nan::SetMethod(target, "test", Test);
}

}

#if NODE_MAJOR_VERSION >= 10
NAN_MODULE_WORKER_ENABLED(registryNativeModule, Init)
#else
NODE_MODULE(registryNativeModule, Init);
#endif
