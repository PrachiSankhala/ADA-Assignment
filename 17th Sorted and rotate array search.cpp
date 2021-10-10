/*[17] You have a sorted and rotated array arr[] of size n where 
elements are sorted and rotated circularly. Write a program to 
find the minimum element in the array.*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int s=0,e=n-1,mid;
    while(s<e){
        if(a[s]<a[e])
            break;
        mid=s+(e-s)/2;
        if(a[mid]<a[s])
            e=mid;
        else
            s=mid+1;
    }
    cout<<s;
	return 0;
}

//input a=4 5 1 2 3 
//output 1