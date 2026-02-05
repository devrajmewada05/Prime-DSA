#include<iostream>
using namespace std;
int rev(int n){
 int r=0;
   while(n>0){
    int k=n%10;
    r=r*10+k;
    n=n/10;
   } 
return r;
}
int main()
{
    int x;
cin>>x;
  cout<<rev(x)<<endl;
   return 0;
}