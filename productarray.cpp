#include <iostream>

using namespace std;
void productInArray(int arr[], int f, int result[]) {
    int startProduct = 1;
    int EndProduct = 1;
    for(int i =0; i<f;i++) {
        result[i] =1;
    }  for(int i =0; i<f;i++) {
        result[i] =startProduct;
        startProduct *=arr[i];
    } 
    for(int i = f-1; i>=0; i--) {
        result[i] *= EndProduct;
        EndProduct *=arr[i];
    }
} 
int main() {
    int arr[] ={3,5,2,6,2};
    int f = sizeof(arr)/sizeof(arr[0]);
    int result[f];
    productInArray(arr,f,result);
    for(int i =0; i<f;i++) {
        cout<<result[i]<<" ";
    }
    return 0;
}