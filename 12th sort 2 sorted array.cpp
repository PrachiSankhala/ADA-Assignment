/*[12] You are given two sorted arrays arr1[] and arr2[] of sizes m
and n respectively. Write a program to merge them in such a 
way that the resultant array is sorted too.*/
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

//input 4 5 
// a= 1 2 8 10      b= 3 4 5 6 9
//output   c= 1 2 3 4 5 6 8 9 10