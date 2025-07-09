// question no 5
#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"enter the character  = ";
    cin>>a;
    if(a>='0' || a<='9'){
        cout<<"digit";
    }else if((a>='a' || a <= 'z')||(a>='A' || a<= 'Z')){
        cout<<"Alphabet";
    }else {
        cout<<"symbol";
    }
    return 0;
}