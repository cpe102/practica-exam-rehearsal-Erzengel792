#include<iostream>
using namespace std;

int main(){
    double GPA;
    string name;

    cout<<"What is your name?: ";
    cin>>name;
    cout<<"What is your GPA?: ";
    cin>>GPA;
    if(GPA >= 3.5 and GPA <=4.0 ){
        cout<<name<<" Inw Jrim Jrim!!!";
    }else{
        cout<<"Try harder, "<<name<<"!!!";
    }
    return 0;
}
