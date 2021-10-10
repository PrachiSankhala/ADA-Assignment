/*[21] Given the array of strings arr[], write a program to find 
the longest common prefix string which is the prefix of all 
the strings in the array.*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,min=INT_MAX;
    cin>>n;
    string a[n],ans,temp;
    char ch;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i].length()<min)
            min=a[i].length();
            
    }
    for(int i=0;i<min;i++){
        ch=a[0][i];
        for(int j=1;j<n;j++){
            if(a[j][i]!=ch){
                cout<<ans;
                return 0;
            }
        }
        ans+=ch;
    }
    cout<<ans;
	return 0;
}
//input a=["abcd","ab","abc","abcde"]
//output   ab