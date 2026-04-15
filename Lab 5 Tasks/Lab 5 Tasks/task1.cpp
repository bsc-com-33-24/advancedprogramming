#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int dayremainingtillexpiration = rand()% 12;
    if (dayremainingtillexpiration <= 10){
        cout<<"your subscription will expire soon.renew now!";
    }
    if(dayremainingtillexpiration <= 5){
        cout<<"your subscription expires in"<<dayremainingtillexpiration<<"renew now!";
    }
    if (dayremainingtillexpiration == 1){
        cout<<"your subscription expires today.renew now!";
    }
    if (dayremainingtillexpiration == 0){
        cout<<"your subscription has expired";
    }
    if (dayremainingtillexpiration > 10){
        cout<<"you have active subscription";
    }

  return 0;
}