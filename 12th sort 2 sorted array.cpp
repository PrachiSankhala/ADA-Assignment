#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m,k=0,i=0,j=0;
    cin>>n>>m;
    int a[n],b[m],c[n+m];
    for(int i=0;i<n;i++)    
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    for(;i<n and j<m;k++){
        if(a[i]>b[j])
            c[k]=b[j++];
        else
            c[k]=a[i++];
    }
    while(i<n)
        c[k++]=a[i++];
    while(j<m)
        c[k++]=b[j++];
    for(int i=0;i<k;i++){
        cout<<c[i]<<" ";
    }
	return 0;
}