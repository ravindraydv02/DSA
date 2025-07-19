#include<iostream>
using namespace std;
int maxsum;
void maxSubarraysum1(int *arr,int n){
    for(int start=0;start<n;start++){
        for(int end = start;end<n;end++){
            int currsum=0;
            for(int i=start;i<=end;i++){
                currsum+=arr[i];

            }
            cout<<currsum<<",";
            maxsum=max(maxsum,currsum);//return maximum value
//agar min nikalna hai to max chang in min

        }
        cout<<endl;
    }
}

int main (){
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxSubarraysum1(arr,n);
    cout<<maxsum;
    return 0;
}