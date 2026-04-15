#include <iostream>
using namespace std;
int main(){
    int value1;
    int value2;
    int *p = nullptr;
    p=&value1;
    *p = 200;
    p = &value2;
    *p=400;
    cout<<value1<<"  "<<value2<<endl;
    return 0;
}