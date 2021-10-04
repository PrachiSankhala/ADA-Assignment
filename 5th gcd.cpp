#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int a,b,ans;
	cin>>a>>b;
	for(int i=1;i<=a and i<=b;i++ ){
	    if(a%i==0 and b%i==0)
	        ans=i;
	}
	cout<<ans;
	return 0;
}