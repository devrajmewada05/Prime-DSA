#include<iostream>
using namespace std;
//no argument , no return
void greet(){
    cout<<"hello"<<endl;
}
//argument and no return
void greet(string name){
    cout<<"hello"<<" "<<name<<endl;
}
//no argument and return
int subtract(){
    int a=4;
    int b=3;
    int c=a-b;
    return c;
    cout<<endl;
}
//argument and return
int add(int a,int b){
    int c=a+b;
    cout<<endl;
    return c;
}
int main()
{
    greet();
    greet("dev");
    cout<<subtract();
    cout<<add(6,2);
   return 0;
}