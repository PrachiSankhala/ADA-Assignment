#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,i=0;
	cin>>n;
	int a[n];
	while(n){
	    a[i++]=n%2;
	    n=n/2;
	}
	for(int j=0;j<i;j++){
	    n+=a[j]*pow(2,i-j-1);
	}
	cout<<n;
	return 0;
}