#include<iostream>
using namespace std;
int main(){
    long n;
    cin>>n;
    long long  anterior;
    cin>>anterior;
    long long movimiento=0;

    for(int i=1;i<n;i++){
        long long actual;
        cin>>actual;
     if(actual<anterior)
     movimiento+=(anterior-actual);
     else
     anterior=actual;
    }
cout<<movimiento<<"\n";
}