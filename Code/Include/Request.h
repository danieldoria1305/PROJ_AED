

#ifndef TRABALHOAED_REQUEST_H
#define TRABALHOAED_REQUEST_H
#include <string>
#include <vector>

using namespace std;


class Request {
public:
    Request(string uc,string classin,string classout,string studentCode,string requesttype); // Constructor for the Request
    string getUc() const; // Returns uc_.
    string getClassIn() const; // Returns classin_.
    string getClassOut() const; // Returns classout_.
    string getStudentCode() const; // Returns studentcode_.
    string getRequestType() const; // Returns requesttype_.
private:
    string uc_; // UC Code.
    string classin_; // Class the Student is in.
    string classout_; // Class the Student wants to go.
    string studentCode_; // Student Code.
    string requesttype_; // Request Type.
};


#endif //TRABALHOAED_REQUEST_H
