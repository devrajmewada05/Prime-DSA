#include<iostream>
using namespace std;
int main()
{
    int marks;
    cin>>marks;
    if(marks>=90){
        cout<<"A";
    }
    if(marks>=75 && marks<90){
        cout<<"B";
    }
    if(marks>=60 && marks<75)
    cout<<"C";
    if(marks<60){
        cout<<"Fail";
    }
   return 0;
}