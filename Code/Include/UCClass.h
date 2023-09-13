//
// Created by pedropassos on 29-10-2022.
//

#ifndef TRABALHOAED_UCCLASS_H
#define TRABALHOAED_UCCLASS_H

#include <string>
using namespace std;

class UCClass {
public:
    UCClass(string uc, string classes); // Constructor for UCClass.
    string getUc() const; // Returns uc_.
    string getClass() const; // Returns classe_.
private:
    string uc_; // Uc Code.
    string classe_; // Class Code.
};


#endif //TRABALHOAED_UCCLASS_H