#include<iostream>
using namespace std ;
int maxsubarraysumkk(int *arr,int n){
    int maxsum = 0;
    int currsum =0;

    for(int i=0;i<n;i++){
        currsum+=arr[i];
        maxsum = max(currsum,maxsum);
        if(currsum<0){
            currsum=0;
        }
    }
    cout<<maxsum<<endl;

}
int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    maxsubarraysumkk(arr,n);
    return 0;
}