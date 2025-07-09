//vowel or consonant 
#include<iostream>
using namespace std;
int main (){
    char shiv;
    cin>>shiv;
    if(shiv == 'a' || shiv == 'e' || shiv == 'i' || shiv == 'o' || shiv == 'u'|| shiv == 'A'  || shiv == 'E' || shiv == 'I' || shiv == 'O' || shiv == 'U'){
        cout<<"vowels"<<endl;
    }else {
        cout<<"consonant";
    }
    return 0;
}