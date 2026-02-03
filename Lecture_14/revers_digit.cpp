#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int reversd=0;
//    while(n>0||n<0){
      while(n!=0){
        int lastd=n%10;
        reversd=reversd*10+lastd;
        n=n/10;
    }
    cout<<reversd<<endl;
 
    //for loop
    for(int i=n;i!=0;i=i/10){
        int lastd=n%10;
        reversd=reversd*10+lastd;
        n=n/10;
    }
     cout<<reversd<<endl;
   return 0;
}