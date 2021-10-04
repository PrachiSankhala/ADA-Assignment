#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long exp(int k,int n){
    if(n==1)
        return k;
    if(n==0)
        return 1;
    if(n>1){
        long t=exp(k,n/2);
        t*=t;
        if(n%2==1)
            t=t*k;
        return t;
    }
}
int main() {
	int k,n;
	cin>>k>>n;
    cout<<exp(k,n);
	
	return 0;
}