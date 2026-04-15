#include <iostream>
using namespace std;
int main(){
    int* ppointer = nullptr;
    int integervar =5;
    ppointer =&integervar;
    cout<<"interger value is:"<< " "<<integervar<<endl;
    cout<<"Address of integervar:"<<&integervar;
    cout<<"ppointer"<<ppointer<<endl;
    cout<<"address of ppointer"<<&ppointer<<endl;
    return 0;
}