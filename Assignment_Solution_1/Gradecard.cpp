#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=90){
        cout<<"A grade";
    }
    else if(n<90 and n>=75){
       cout<<"B grade" ;
    }
    else if(n<75 and n>=60){
        cout<<"c grade";
    }
    else {
        cout<<"fail";
    }

   return 0;
}