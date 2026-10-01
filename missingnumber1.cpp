#include<iostream>
using namespace std;
int main(){
	long n;
	cin>>n;
long total= n*(n+1)/2;
	for(int i=0;i<n-1;i++){
		long x;
		cin>>x;
		total-= x;
		
	}
	cout<<total<<endl;
	return 0;
}
