// 3
// 1 
// 1 1 
// 1 2 1 

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
   
	for(int i=0;i<n;i++){
         int m=1;
		for(int j=0;j<=i;j++){
            cout<<m<<" ";
            m=m*(i-j)/(j+1);
        }
        cout<<endl;
	}
	return 0;
}