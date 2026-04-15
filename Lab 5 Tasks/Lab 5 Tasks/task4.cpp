# include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"input any value within the range of 5-10 ";
    cin>> x;
    while (x <5 || x > 10){
        cout<<"the values"<< " "<<x<<" not in the range"<<endl;
        cout << "please input a value in the range hun";
        cin>>x;
    }
    if(x >= 5 && x <=10){
    cout<<"the value is in the correct range please procced";
    }
return 0;
}