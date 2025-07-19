#include<iostream>
using namespace std ;

void func(int arr[]) {
    arr[0] = 1000;
    cout <<arr<<"funnction"<<endl;

}

int main (){
    int arr[]={1,2,3,4,5};
    cout<<arr<<" 2 "<<endl;
    func(arr);
    cout<<" 3 " << arr[0]<< endl ;
    return 0 ;
}