/*[6] Given an integer num, write a program to find the closest 
palindrome to integer num.*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool check(int x){
    int temp=x,ans=0;
    while(temp){
        ans=(temp%10)+(ans*10);
        temp/=10;
    }
    if(ans==x)
        return true;
    return false;
    
}
int palindrom(int n){
    int i,j=0;
    if(n<10)
        i=n+1;
    else{
        i=n+1;
        j=n-1;
    }
    while(true){
        if(check(i))
            return i;
        if(j and check(j))
            return j;
        i++;
        j--;
    }
    
}
int main() {
    int n;
    cin>>n;
    cout<<palindrom(n);
	return 0;
}

//input 12 
//output 11