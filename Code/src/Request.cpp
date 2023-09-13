

#include "../Include/Request.h"

string Request::getUc() const {return uc_;}
string Request::getClassIn() const {return classin_;}
string Request::getClassOut() const {return classout_;}
string Request::getStudentCode() const {return studentCode_;}
string Request::getRequestType() const {return requesttype_;}


Request::Request(string uc, string classin,string classout, string studentCode,string requesttype): uc_(uc), classin_(classin),classout_(classout), studentCode_(studentCode), requesttype_(requesttype){}