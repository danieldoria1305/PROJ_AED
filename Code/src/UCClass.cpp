#include "../Include/UCClass.h"
#include <string>

UCClass::UCClass(string uc, string classes): uc_(uc), classe_(classes) {}
string UCClass::getUc() const {return uc_; }
string UCClass::getClass() const {return classe_; }