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