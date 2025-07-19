#include<iostream>
#include<vector>
using namespace std ;

int firstoccur(vector<int> arr,int i,int target){
    if(arr[i]==target){
        return i;
    }
    if(i==arr.size()){
        return -1;
    }

    return firstoccur(arr,i+1,target);

}

int main (){
    vector<int>arr={1,2,3,3,3,4};
    cout<<firstoccur(arr,0,3);
    return 0;
}