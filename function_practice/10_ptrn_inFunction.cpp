//    0 
//   1 0 1
// 2 1 0 1 2

#include<iostream>
using namespace std;
void fun(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<i-j<<" ";
        }
        for(int j=i-1;j>=1;j--){
            cout<<i-j<<" ";
        }
        cout<<endl;
    }
    
}
int main()
{
    fun(3);
   return 0;
}