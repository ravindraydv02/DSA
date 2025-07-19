#include<iostream>
using namespace std ;
int main () {
    int arr[]= {5,4,3,9,2};
    int n = sizeof(arr)/sizeof(int);
    
    
    int copyArr[n];
    for(int i=0 ; i<n; i++){
        int j = n-j-1;
        copyArr[i]=arr[j];
    }

    return 0 ;
}