//question no 4
#include<iostream>
using namespace std;
int main(){
    int marks ;
    cout << "enetr the makrs ";
    cin>>marks;
    if(marks>90 || marks <100){
        cout<<"grade = A"<<endl;
    }else if(marks > 80 || marks <90){
        cout<<"grade = B"<<endl;
    }else if(marks > 70 || marks <80){
        cout<<"grade  = C"<<endl;
    }else if(marks > 60 || marks < 70){
        cout<<"grade = D"<<endl;
    }else {
        cout<<"FAIL";
    }
    return 0;
}