#include <iostream>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int s=0,end=n-1,mid;
    while(s<=end){
        mid=s+(end-s)/2;
        if((mid==0 or a[mid-1]<k) and a[mid]==k){
            cout<<mid<<" ";
            break;
        }
        else if(a[mid]<k)
            s=mid+1;
        else
            end=mid-1;
    }
    s=0,end=n-1;
    while(s<=end){
        mid=s+(end-s)/2;
        if((mid==n-1 or a[mid+1]>k) and a[mid]==k){
            cout<<mid;
            break;
        }
        else if(a[mid]<k)
            s=mid+1;
        else
            end=mid-1;
    }
	return 0;
}