#include <iostream>
using namespace std;
void leftshift(int f[], int n, int k) {
    k=k%n;  //if k is equal or greater than the size of array, it handles that situation
    int temp[n];
    for (int i=0; i<n-k; i++) {
        temp[i] = f[i+k];
    }
    for (int i=n-k; i<n; i++) {
temp[i]=f[i-(n-k)];
    } 
    for (int i=0;i<n;i++) {
        f[i]=temp[i];
    }
    } 
    int main () {
        int f[]={3,4,5,7,6};
        int n= sizeof(f)/sizeof(f[0]);
        int k=4;
        leftshift(f,n,k);
        for (int i=0; i<n;i++) {
            cout<<f[i]<<" ";
        } 
        return 0;
    }