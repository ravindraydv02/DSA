#include<iostream>
using namespace std;
int main (){
    int a = 5 ;
    int *ptr=&a;
    cout << ptr << endl;

    int arr[]= {1,2,3,4,5};
    cout << *arr << endl ;
    cout << *(arr+1)<<endl;
    cout << *(arr+2)<<endl;
    cout << *(arr+3)<<endl;
    cout << *(arr+4)<<endl;
    return 0;

}