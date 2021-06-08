#include<iostream>
using namespace std;
int main(){
    char c ='A';
    // if (c=='a'||c=='e'|| c=='i'||c=='o'|| c=='u'){
    //     cout<<"it is vowels";

    // }else{
    //     cout<<"this is not vowels";
    // }
    char isLowercaseVowel;
    char isUppercaseVowel;
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (isLowercaseVowel || isUppercaseVowel)
    {
        cout<<"it i vowels";

    }else{
        cout<<"it is constant";
    }


    return 0;
}