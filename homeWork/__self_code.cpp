#include<iostream>
using namespace std;
int main()
{
    int m=7;
    //cin>>m;
    int n=(m+1)/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<"  ";
        }
         for(int j=1;j<=i-i+1;j++){
            cout<<"* ";
         }
         for(int j=1;j<=n+2-(2*i-1);j++){
          
            cout<<"  ";   
         }
        
         for(int j=1;j<=i-i+1;j++){
             if(i!=n){
            cout<<"* ";
             }
         }
      cout<<endl;
         
      }
   for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i-1;j++){
            cout<<"  ";
        }
         for(int j=1;j<=i-i+1;j++){
            cout<<"* ";
         }
         for(int j=1;j<=n+2-(2*i-1);j++){
          
            cout<<"  ";   
         }
        
         for(int j=1;j<=i-i+1;j++){
             if(i!=n){
            cout<<"* ";
             }
             else{
               cout<<endl;
             }
         }
         cout<<endl;
         
      }
   return 0;
}