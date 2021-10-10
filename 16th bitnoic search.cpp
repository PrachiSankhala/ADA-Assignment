/*[16] Given a bitonic sequence arr[] of n distinct elements, 
write a program to search a given element k in the bitonic 
sequence.*/
#include <iostream>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int s=0,e=n-1,mid;
    while(s<=e){
        mid=s+(e-s)/2;
        if(a[mid-1]<a[mid] and a[mid]<a[mid+1])
            s=mid+1;
        else if(a[mid-1]>a[mid] and a[mid]>a[mid+1])
            e=mid-1;
        else if(a[mid-1]<a[mid] and a[mid]>a[mid+1])
            break;
    }
    if(a[mid]==k){
        cout<<mid;
        return 0;
    }
    else if(a[mid]>k){
        e=mid-1;
        s=0;
        while(s<=e){
            mid=s+(e-s)/2;
            if(a[mid]==k){
                cout<<mid;
                return 0;
            }
            else if(a[mid]>k){
                e=mid-1;
            }
            else
                s=mid+1;
        }
    }
    else{
        s=mid+1;
        e=n-1;
        while(s<=e){
            mid=s+(e-s)/2;
            if(a[mid]==k){
                cout<<mid;
                return 0;
            }
            else if(a[mid]>k){
                s=mid+1;
            }
            else
                e=mid-1;
        }
    }
    cout<<-1;
	return 0;
}


//input 5 2
//      5 6 7 2 1 
//output  3