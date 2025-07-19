
#include<iostream>
using namespace std;

int print(int n) {  // Change return type to int
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else {
        return print(n-1) + print(n-2);
    }
}

int main() {
    cout << print(10); // prints 5th Fibonacci number
    return 0;
}
