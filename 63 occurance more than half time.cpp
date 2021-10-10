/*[63] You are given an array arr of size n, write a program to 
find the element which appears more than n/2 times in the array 
arr.*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    unordered_map<int,int> mp;
    for(int i=0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
        if(mp[a[i]]>n/2){
            cout << a[i];
            return 0;
        }
    }
    cout << "Not Exist";
	return 0;
}

//input 1 2 3 3 3 3 4 
//output 3