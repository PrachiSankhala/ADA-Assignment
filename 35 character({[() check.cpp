/*[35] You are given a string s consisting of characters: (, ), [, 
], { and }. Write a program to check whether the characters in 
the string s are valid or not.*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack{
    int *a;
    int sz,top;
    public: Stack(int size){
        a=new int[size];
        sz=size;
        top=-1;
    }
    void push(char x){
        a[++top]=x;
    }
    void pop(){
            top--;
    }
    char peak(){
        return a[top];
    }
    bool isempty(){
        return top<0;
    }
};
int main() {
    string s;
    cin>>s;
    int n=s.length();
    Stack st(n);
    for(int i=0;i<n;i++){
        if(s[i]=='(' or s[i]=='{' or s[i]=='['){
            st.push(s[i]);
            continue;
        }
        if(st.isempty()){
            cout<<"Invalid";
            return 0;
        }
        if(s[i]==')'){
            if(st.peak()!='('){
                cout<<"Invalid";
                return 0;
            }
            else{
                st.pop();
            }
        }
        else if(s[i]==']'){
            if(st.peak()!='['){
                cout<<"Invalid";
                return 0;
            }
            else{
                st.pop();
            }
        }
        else if(s[i]=='}'){
            if(st.peak()!='{'){
                cout<<"Invalid";
                return 0;
            }
            else{
                st.pop();
            }
        }
    }
    
    if(st.isempty())
        cout<<"valid";
    else
        cout<<"invalid";
    
    
	return 0;
}