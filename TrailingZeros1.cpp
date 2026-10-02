#include<iostream>
using namespace std;
int main(){
long n;
long ceros=0;
cin>>n;

while(n>0){
	n=n/5;
	ceros +=n;
	
}
cout<<ceros<<endl;
return 0;
}
