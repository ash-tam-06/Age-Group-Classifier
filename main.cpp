//
// Created by Asmita Tamang on 2/1/25.
//

#include "main.h"
#include <iostream>

using namespace std;

int main(){
    short age;
    string ageGroup;
    cout << "What is your age"<< endl;
    cin>> age;
    if(age<12)
        ageGroup = "Child";
    else if (age <=19)
        ageGroup = "Teen";
    else if (age <= 64)
        ageGroup = "Adult";
    else ageGroup = "Senior";
    cout << ageGroup << endl;
    return 0;
}
