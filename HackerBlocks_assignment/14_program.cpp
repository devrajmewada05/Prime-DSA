#include<iostream>
using namespace std;
int main()
{
    int N,ttl;
    cin>>N;
    if(N<=100){
     ttl=N*2;
       cout<<ttl;
    }
    if(N>100 && N<=200){
        ttl=N*3;
        cout<<ttl;
    }
    if(N>200){
        ttl=N*5;
        cout<<ttl;
    }
   return 0;
}