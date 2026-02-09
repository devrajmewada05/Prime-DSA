//       0
//       4 0 4
//     3 4 0 4 3
//   2 3 4 0 4 3 2
// 1 2 3 4 0 4 3 2 1

//For right logic this code go on Practice folder......

#include<iostream>
using namespace std;
void fun(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            if(j==1){
                cout<<"0 ";
            }
            else{
                cout<<n-j+1<<" ";
             }
        }
        for(int j=2;j<=i;j++){
                cout<<n-j+1<<" ";
        }
        cout<<endl;
    }
   
}
int main()
{
    fun(5);
   return 0;
}