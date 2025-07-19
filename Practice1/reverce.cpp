#include<iostream>
using namespace std ;
int main (){
    int arr[]={2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    int copyarr[n];
    for(int i=0;i<n;i++){
        int j=n-i-1;
        copyarr[j]=arr[i];
        cout<<copyarr[j];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        int j=i;
        arr[i]=copyarr[j];
        cout<<arr[i];
    }
    return 0;

}