#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=2;
    char c ='*';
    switch(c){
        case '+':{
            cout<<a+b;
            break;
        }
        case '-':{
            cout<<a-b;
            break;
        }
        case '*':{
            cout<<a*b;
            break;
        }
        case '/':{
            cout<<a/b;
            break;
        }
        default:
        cout<<"this is invalid";
        break;

    }
    return 0;
}