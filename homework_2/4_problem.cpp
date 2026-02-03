#include<iostream>
using namespace std;
int main()
{
    int n=5;
    // cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){ 
            if(i!=1 and j!=1 and i!=n and j!=n){
                
              if(i==2){
                cout<<j<<" ";
               }
               else if(i==3 and j==3){
                cout<<j*2<<" ";
               }
               else {
                cout<<"3 ";
               }
              if(i==4){
                cout<<i-j+2<<" ";
               }
            }
            else{
                cout<<"1 ";
            }
        }
        cout<<endl;
    }
   return 0;
}