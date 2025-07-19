#include<iostream>
using namespace std ;
int linear(int *arr,int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }

    }
    return -1;
}
int main(){
    int arr[]={3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    cout<<linear(arr,n,11);

}