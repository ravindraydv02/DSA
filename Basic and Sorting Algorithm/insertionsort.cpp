#include<iostream>
#include<climits>
using namespace std;

void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prew =i-1;
        while(prew>=0&&arr[prew]>curr){
            swap(arr[prew],arr[prew+1]);
            prew--;
        }
        arr[prew+1]=curr;
    }

}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

int main() {
    int arr[5]={5,4,1,3,2};
    int n=5;
    insertionsort(arr,n);
    print(arr,n);
    return 0 ;
}