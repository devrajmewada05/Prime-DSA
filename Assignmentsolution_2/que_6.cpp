// 4
//       1 
//     2 3 2 
//   3 4 5 4 3 
// 4 5 6 7 6 5 4 
//   3 4 5 4 3 
//     2 3 2
//       1

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<i+j-1<<" ";
        }
          for(int j=i-1;j>=1;j--){
            cout<<i+j-1<<" ";
        }
        cout<<endl;
    }
     for(int i=n-1;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<i+j-1<<" ";
        }
          for(int j=i-1;j>=1;j--){
            cout<<i+j-1<<" ";
        }
        cout<<endl;
    }
   return 0;
}