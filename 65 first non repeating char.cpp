#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	unordered_map<char,int> mp;
	for(int i=0;i<s.length();i++)
	    mp[s[i]]++;
	for(int i=0;i<s.length();i++){
	        if(mp[s[i]]==1){
	            cout<<i;
	            break;
	        }
	}
	return 0;
}