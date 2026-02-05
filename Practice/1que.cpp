#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    int n=(m+1)/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*(n-i);j++){
            cout<<"  ";
        }
        if(i==1){
            cout<<"1 ";
        }
        else {
            for(int j=1;j<=i;j++){
                cout<<i-j+1<<" ";
            }
        }
            for(int j=1;j<=2*i-3;j++){
                cout<<"  ";
            }
             for(int j=i;j>=1;j--){
                if(i==1){
                    cout<<"  ";
                }
                else{
                cout<<i-j+1<<" ";
                }
            }
        
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=2*(n-i);j++){
            cout<<"  ";
        }
        if(i==1 || i==n){
            cout<<"1 ";
        }
        else {
            for(int j=1;j<=i;j++){
                cout<<i-j+1<<" ";
            }
        }
            for(int j=1;j<=2*i-3;j++){
                cout<<"  ";
            }
             for(int j=i;j>=1;j--){
                if(i==1){
                    cout<<"  ";
                }
                else{
                cout<<i-j+1<<" ";
                }
            }
        
        cout<<endl;
    }
   return 0;
}