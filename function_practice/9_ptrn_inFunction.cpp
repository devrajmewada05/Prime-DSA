
// 1 
// 4 4 
// 9 9 9 
// 16 16 16 16 
// 25 25 25 25 25

#include<iostream>
using namespace std;
void fun(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i*i<<" ";
        }
        cout<<endl;
        
    }
    
}
int main()
{
    fun(5);
   return 0;
}