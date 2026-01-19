#include<iostream>
using namespace std;
int main()
{
    int A,B,C,large;
    cin>>A;
    cin>>B;
    cin>>C;
    large=A;
   if(B>large){
   large= B;
   }
   if(C>large){
   large=C;
   }
   cout<<large;
   return 0;
}