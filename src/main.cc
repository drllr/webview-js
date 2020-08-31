#include "nan.h"
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

NAN_MODULE_INIT(Init) {
  Nan::SetMethod(target, "readValues", ReadValues);
  Nan::SetMethod(target, "enumKeys", EnumKeys);
}

}

#if NODE_MAJOR_VERSION >= 10
NAN_MODULE_WORKER_ENABLED(registryNativeModule, Init)
#else
NODE_MODULE(registryNativeModule, Init);
#endif
