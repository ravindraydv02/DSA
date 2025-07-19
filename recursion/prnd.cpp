#include<iostream>
using namespace std ;
void decreasin(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    return decreasin(n-1);
}
int main(){
    decreasin(6);
    // int n ;
    // cin>>n;
    // int i=n;
    // for(int i=n;i>=0;i--){
    //     cout<<i<<endl;
    // }
    // cout<<i<<endl;
    return 0;
}