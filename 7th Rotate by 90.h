/*[7] You are given an n x n 2D-matrix. Write a program to rotate 
the matrix by 90 degrees.*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n / 2; ++j)
        {
            int temp = a[i][j];
            a[i][j] = a[i][n - j - 1];
            a[i][n - j - 1] = temp;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
	return 0;
}