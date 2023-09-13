#ifndef TRABALHOAED_STUDENT_H
#define TRABALHOAED_STUDENT_H
#include "../Include/UCClass.h"
#include "Request.h"
#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;

class Student {
public:
    Student(string id, string name,vector<UCClass> classes); // Constructor for Student.
    Student(); // Empty Constructor.
    string getId() const; // Returns id_.
    string getName() const; // Returns name_.
    vector<UCClass> getClasses() const; // Returns classes_.
    bool RemoveClass(Request); // Takes a request and removes the class of that request.
    void addClass(string,string); // Takes two strings with the Uc Code and Class Code of a Class and adds that class to classes_.
private:
    string id_; // Student Id.
    string name_; // Student Name.
    vector<UCClass> classes_; // Student Classes.
};

#endif //TRABALHOAED_STUDENT_H
