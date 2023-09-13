#include "../Include/Student.h"
#include <string>
#include <vector>

Student::Student(string id, string name,vector<UCClass> classes): id_(id), name_(name),classes_(classes) {}
Student::Student(){}
string Student::getName() const {return name_; }
string Student::getId() const {return id_; }
vector<UCClass> Student::getClasses() const {return classes_; }

bool Student::RemoveClass(Request r) {
    vector<UCClass>::iterator i;
    i=classes_.begin();
    for(UCClass u:classes_){
        if(u.getUc()==r.getUc() && u.getClass()==r.getClassIn()){
            classes_.erase(i);
            return true;
        }
        i++;
    }
    return false;
}

void Student::addClass(string uc,string classe){
    UCClass u(uc,classe);
    classes_.push_back(u);
}