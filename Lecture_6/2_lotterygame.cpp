#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=300 and n<=460){
      cout<<"You Won a maccbook"<<endl;
      if(n>=300 and n<=380){
        cout<<"m1 mac"<<endl; 
      }
    
     else if(n>=381 and n<=460){
            cout<<"m2 mac"<<endl;
        }
    }
    else if(n>=200 and n<=280){
        cout<<"you won kurkure"<<endl;
        if(n>=200 and n<=240){
            cout<<"flavor chili kurkure"<<endl;
        }
    else if(n>=241 and n<=280){
                cout<<"flavor:onion kurkure"<<endl;  
       }
       }
    else if(n>=1100 and n<=1500){
        cout<<"you won a cycle"<<endl;
    if(n>=1103 and n<=1500){
        cout<<"brand:avon cyclee"<<endl;
    }
    
    else if(n>=1301 and n<=1500){
        cout<<"brand:hero cycle"<<endl;
     }
    }
    
    else if(n>=50 and n<=80){
        cout<<"you won a bike"<<endl;
    
    if(n>=50 and n<=65){
        cout<<"model:bulet"<<endl;
    
    }
 else if(n>=65 and n<=80){
        cout<<"model:rajdoot"<<endl;
 }
}
   return 0;
}