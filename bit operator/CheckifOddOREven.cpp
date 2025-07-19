#include<iostream>
using namespace std ;
void oddoreven(int num){
    if(!(num&1)){
        cout<<"even\n";
    } else{
        cout<<"odd\n";
    }
}
int main(){
    oddoreven(5);
    oddoreven(8);
    return 0;
}