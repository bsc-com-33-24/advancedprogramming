#include <iostream>
#include "Person.h"
#include <string>
using namespace std;
int main(){
    Person jane =Person("Jane",60.0f);
    Person john = Person("John",75.0f);
    float totalweight =jane + john;
    cout<<"Total weight of Jane and John is:"<<totalweight<<"kg"<<endl;
    return 0;
}