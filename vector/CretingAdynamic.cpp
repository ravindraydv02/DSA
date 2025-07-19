#include<iostream>
using namespace std ;

void funcInt(){
    int *ptr = new int ;

    *ptr = 5;
    cout<<*ptr;
    delete ptr ;

}
void funcARR(){
    int size ;
    cin>>size ;
    int *ptr=new int [size];

    int *ptr = new int [size];
    
}