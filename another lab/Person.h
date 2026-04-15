#pragma once
#include <string>
#include <iostream>
using namespace std;
class Person{
    public:
    Person();
    Person(string name,float newweight);
    ~Person();
    float operator+(const Person& otherperson);
    private:
    float mweight;
    string mFirstName;
    int mAge;

};
