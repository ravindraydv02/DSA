#include<iostream>
using namespace std ;
int binary(int *arr,int n,int key){
    int st=0, end=n-1;
    while(st<=n){
        int mid=(st+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if (arr[mid]<key){
            st=mid+1;
        }
        else{
            end=n-1;
        }
    }
}
int main(){
    int arr[]={2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(int);
    cout<<binary(arr,n,8);
    return 0;
}