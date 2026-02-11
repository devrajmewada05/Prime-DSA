#include<iostream>
using namespace std;
#include<cmath>
int main() {
	int n;
	cin>>n;
	int sum=0;
	int g=0;
	while(n>0){
    int r=n%10;
	sum=sum+r*pow(2,g);
	g++;
	n=n/10;
	}
	cout<<sum<<endl;
	return 0;
}