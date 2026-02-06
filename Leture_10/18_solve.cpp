
// 5
//  *  *  *  *  * 
//  *  *     *  *
//  *           *
//  *  *     *  *
//  *  *  *  *  *

#include<iostream>
using namespace std;
int main()
{
    int N; 
    cin>>N;
    int m=(N+1)/2;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m-i+1;j++){
            cout<<" * ";
        }       
        for(int j=2;j<=2*(i-1);j++){
            cout<<"   ";
        }
        if(i!=1){
            for(int j=1;j<=m-i+1;j++){
        cout<<" * ";
        }
        }
        else{
            for(int j=1;j<=m-i;j++){
           cout<<" * "; 
           }
         }
        cout<<endl;
    }
    for(int i=m-1;i>=1;i--){
        for(int j=1;j<=m-i+1;j++){
            cout<<" * ";
        }       
        for(int j=2;j<=2*(i-1);j++){
            cout<<"   ";
        }
        if(i!=1){
            for(int j=1;j<=m-i+1;j++){
        cout<<" * ";
        }
        }
        else{
            for(int j=1;j<=m-i;j++){
           cout<<" * "; 
           }
         }
        cout<<endl;
        }
   return 0;
}