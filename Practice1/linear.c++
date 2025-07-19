#include<iostream>
using namespace std ;
int linearSearch(int *arr,int n,int key){
    int i=0;
    for( i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }

    }
    cout<<i;
    return -1;
}
int main(){
    int arr[]={3,4,5,22,57,88,99,3,2,33,44,65,67,55,66,89};
    int n=sizeof(arr)/sizeof(int);
    cout<<linearSearch(arr,n,66);
}
