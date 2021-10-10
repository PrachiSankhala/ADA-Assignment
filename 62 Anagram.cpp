/*[62]Given two strings "s1" and "s2", Write a program to check 
whether the two strings are an anagram of each other or not*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()!=s2.length()){
            cout << "Not Anagram";
            return 0;
    }
    unordered_map<char,int> mp;
    for(int i=0; i < s1.length(); i++)
        mp[s1[i]]++;
    for(int i = 0; i < s2.length(); i++){
        if(mp.find(s2[i]) == mp.end() or mp[s2[i]] == 0){
            cout << "Not Anagram";
            return 0;
        }
        mp[s2[i]]--;
    }
    cout << "Anagram";
	return 0;
}

//input s1=abcde s2 baedc
//output Anagram