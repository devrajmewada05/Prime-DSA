#include<iostream>
using namespace std;
void fun(int n){
   for(int i=1;i<=10;i++){
    cout<<n*i<<endl;
   } 
}
int main()
{
    fun(7);
   return 0;
}