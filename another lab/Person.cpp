#include  "Person.h"
Person::Person(){
    mweight = 0;
    mFirstName = "";
    mAge = 0;
}
Person::Person(string name,float newweight){
    mFirstName = name;
    mweight = newweight;
    mAge = 0;
}
Person::~Person(){

}
float Person::operator+(const Person& otherperson){
    return mweight + otherperson.mweight;
}
