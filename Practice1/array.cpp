#include<iostream>
using namespace std ;
int main(){
    int arr[]={3,4,5,2,1,7};
    int n=sizeof(arr)/sizeof(int);
    int max = arr[0];
    for(int i = 0;i<=n;i++){
        if(max<=arr[i]){
            max=arr[i];
        }
    }
    int min = arr[0];
    for(int i=0;i<=n;i++){
        if(min>=arr[i]){
            min=arr[i];
        }
    }
    cout<<"largest element in array = "<<max<<"minimum element in array = "<<min;
}