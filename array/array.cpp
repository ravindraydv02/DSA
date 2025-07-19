#include<iostream>
using namespace std ;

int main (){
    int arr[7]={3,4,5,6,7,20,10};
    int max=arr[0];
    for(int i = 0 ;i <= 7; i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }
    cout<<max;
    return 0 ;
}