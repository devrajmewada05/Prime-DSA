#include<iostream>
using namespace std;
void fun(int a , int b){
    if(a>b){
        cout<<"a is greater";
    }
    else{
        cout<<"b is greater";
    }
}
int main()
{
    fun(5,10);
   return 0;
}