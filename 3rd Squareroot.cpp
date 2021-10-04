#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int square(int n){
    int s=1,e=n/2,mid;
    while(s<=e){
        mid=s+(e-s)/2;
        if(mid*mid==n)
            return mid;
        else if(mid*mid>n)
            e=mid-1;
        else
            s=mid+1;
    }
    return mid;
    
}
int main() {
    int n;
    cin>>n;
    cout<<square(n);
	return 0;
}