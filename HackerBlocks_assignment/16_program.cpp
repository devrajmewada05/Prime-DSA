#include<iostream>
using namespace std;
int main()
{
    int Side1,Side2,Side3;
    cin>>Side1;
    cin>>Side2;
    cin>>Side3;
    
   if(Side1==Side2 && Side2==Side3){
    cout<<"Equilateral";
   }
    if((Side1==Side2 && Side2!=Side3) || (Side2==Side3 && Side1!=Side3) ||(Side1==Side3 && Side2!=Side1)){
    cout<<"Isosceles";
   }
    if(Side1!=Side2 && Side2!=Side3 && Side1!=Side3){
    cout<<"Scalene";
   }
   return 0;
}