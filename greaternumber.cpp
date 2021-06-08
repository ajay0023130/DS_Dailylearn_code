#include<iostream>
using namespace std;
int main(){
    int a=100;
    int b=20;
    int c =140;
    if (a>b){
        if(a>c){
            cout<<a;
        }else{
            cout<<c;
        }
    }
    else{
        if(b>c){
            cout<<b;
        }
        else{
            cout<<c;
        }
    }
    return 0;
}