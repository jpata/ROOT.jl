//c++ `root-config --cflags --libs` -shared -fPIC gen/tdirectory.cc -o gen/tdirectory
#include <TDirectory.h>
extern "C" {
TDirectory* TDirectory_TDirectory1() {
  return new TDirectory();
}
TDirectory* TDirectory_TDirectory2(char* name, char* title, Option_t* option, TDirectory* motherDir) {
  return new TDirectory(name, title, option, motherDir);
}
void TDirectory_Close1(TDirectory* __obj, Option_t* option) {
  return __obj->Close(option);
}
TObject* TDirectory_Get1(TDirectory* __obj, char* namecycle) {
  return __obj->Get(namecycle);
}
TList* TDirectory_GetListOfKeys1(TDirectory* __obj ) {
  return __obj->GetListOfKeys();
}
} //extern C
