#include<iostream>
#include<vector>
using namespace std ;
void merge(int *arr,int si,int mid,int ei){
    vector<int>temp;
    int i=si;
    int j=mid+1;
    while(i<=mid && j<=ei){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=ei){
        temp.push_back(arr[j++]);
    }
    
    for(int idx=si,x=0;idx<=ei;idx++){
        arr[idx]=temp[x++];
    }

}
void print(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";

    }
    cout<<endl;
}
void mergesort(int *arr,int si,int ei){
    if(si>=ei) return;
    int mid =(si+ei)/2;
    

    mergesort(arr,si,mid);//left
    mergesort(arr,mid+1,ei);

    merge(arr,si,mid,ei);
}

int main(){
    int arr[6]={3,4,5,2,7,6};
    int n=6;
    mergesort(arr,0,n-1);
    print(arr,6);

}
