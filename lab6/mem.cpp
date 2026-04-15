#include <iostream>
using namespace std;
int main(){
    int element = 0;
    int* dynamic =nullptr;
    cout<<"how many numbers would you like";
    cin>>element;
    dynamic= new int[element];
    if(dynamic == nullptr){
        cout<<"error:memory could not be allocated";
    }
    else{
        for(int i = 0;i<element;i++){
            cout<<"enter number:";
            cout<<dynamic[i]<<" ,";

        }
    delete [] dynamic;
}
return 0;
}