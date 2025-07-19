#include<iostream>
#include<vector>
using namespace std ;
void printarr(int *arr,int si,int ei){
    for(int i=si;i<=ei;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(int *arr,int si ,int ei){
    int i=si-1;
    int pivote=arr[ei];
    for(int j=si;j<ei;j++){
        if(arr[j]<=pivote){
        i++;
        swap(arr[i],arr[j]);
        }
        
    }
    i++;
    swap(arr[i],arr[ei]);
    return i;
}


// void printarr(int *arr,int si,int ei){
//     for(int i=si;i<=ei;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

void QuickSort(int *arr,int si, int ei){
    if(si>=ei){
    return ;
    }
    int pivoteIdx=partition(arr,si,ei);
    QuickSort(arr,si,pivoteIdx-1);
    QuickSort(arr,pivoteIdx+1,ei);//left side

}


int main(){
    int arr[6]={6,3,7,5,2,4};
    int n = 6;
    QuickSort(arr,0,n-1);
    printarr(arr,0,n-1);
    return 0;


}