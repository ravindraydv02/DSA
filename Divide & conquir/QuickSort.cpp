#include<iostream>
#include<vector>
using namespace std ;
void printarr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int partition(int arr[],int si,int ei){
    int i=si-1;
    int pivot=arr[ei];
    for(int j=si;j<ei;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[ei]);
    return i;
}
void QuickSort(int arr[],int si,int ei){
    if(si>=ei){
        return ;
    }
    int pivotIdx = partition(arr,si,ei);

    QuickSort(arr,si,pivotIdx-1);//left half
    QuickSort(arr,pivotIdx+1,ei);//right half
}


int main(){
    int arr[6]={6,3,7,5,2,4};
    int n = 6;
    QuickSort(arr,0,n-1);
    printarr(arr,n);
    return 0;
}
