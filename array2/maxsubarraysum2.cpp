#include<iostream>
using namespace std ;
int maxsum;
void maxsubarray(int *arr,int n){
    for(int start=0;start<n;start++){
        int currsum=0;
        for(int end=start;end<n;end++){
            currsum+=arr[end];
            maxsum=max(maxsum,currsum);
        }
        cout<<endl;
    }
    cout<<"maximum subarray sum    =  "<<maxsum<<endl;
}
int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxsubarray(arr,n);
}