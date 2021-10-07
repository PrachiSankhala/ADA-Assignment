/*[59] Given two integer arrays(arr1 and arr2) of equal length, Check 
if the given arrays are equal or not.*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n],b[n];
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(int i = 0; i < n; i++){
        cin>>b[i];
        if(mp.find(b[i])==mp.end() or mp[b[i]]==0){
            cout<<"Not Equal";
            return 0;
        }
        mp[b[i]]--;
    }
    cout<<"Equal";
	return 0;
}

//n=5
//a=1 2 3 10 5 
//b=1 2 10 10 5  
//Not Equal