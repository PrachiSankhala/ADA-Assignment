/*[19] Given an array of integers arr[], if i < j and arr[i] > arr[j] then 
the pair (i, j) is called an inversion of arr[]. Write a program to 
find the total number of inversion count in arr[].*/
#include <iostream>
using namespace std;
int main() {
    int n,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j])
                c++;
        }
    }
    cout<<c;
	return 0;
}