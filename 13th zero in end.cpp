/*[13] Given an array arr[] of n elements filled with several 
integers, some of them being zeroes, write a program to move 
all the zeroes to the end.*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,c=0,temp,k=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)  {  
        cin>>temp;
        if(temp==0){
            c++;
            continue;
        }
        a[k++]=temp;
    }
    for(int i=0;i<n;i++){
        if(i>=k)
            a[i]=0;
        cout<<a[i]<<" ";
    }
	return 0;
}