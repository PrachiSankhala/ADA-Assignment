#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    int sum=0;
    unordered_map<char,int> mp;
    mp.insert({ 'I', 1 });
    mp.insert({ 'V', 5 });
    mp.insert({ 'X', 10 });
    mp.insert({ 'L', 50 });
    mp.insert({ 'C', 100 });
    mp.insert({ 'D', 500 });
    mp.insert({ 'M', 1000 });
    for(int i=0;i<str.length();i++){
        if(i<str.length() and (mp[str[i]]<mp[str[i+1]])){
            sum+=(mp[str[i+1]]-mp[str[i]]);
            i++;
        }
        else
            sum+=mp[str[i]];
    }
    cout<<sum;
	return 0;
}