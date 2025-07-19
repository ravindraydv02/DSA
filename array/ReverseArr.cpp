#include<iostream>
using namespace std ;
void printarr(int *arr,int n ){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
int main(){
    int arr[]={5,4,3,9,2};
    int n = sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<arr[i];//bina change
    }
    cout<<endl;
    int CopyArr[n];
    for(int i=0;i<n;i++){
        int j=n-i-1;
        CopyArr[j]=arr[i];
        cout << CopyArr[j];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        arr[i]=CopyArr[i];
        cout<<arr[i];
    }
    cout<<endl;
    printarr(arr,n);


}