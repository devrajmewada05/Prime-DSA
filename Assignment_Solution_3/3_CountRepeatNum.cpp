#include<iostream>
using namespace std;
void fun(int n,int b){
    int count=0;
for(int i=1;i<=n;i++){
  int r=n%10;
  if(b==r){
    count++;
  }
  n=n/10;    
}
cout<<count<<endl;
}
int main()
{
    fun(122322224,2);
   return 0;
}