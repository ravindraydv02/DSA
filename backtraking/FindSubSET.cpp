#include<iostream>
#include<string>
#include<vector>
using namespace std ;


void printsubset(string str,string subset){
    if(str.size()==0){
        cout<<subset<<"\n";
        return ;
    }
    char ch = str[0];
    printsubset(str.substr(1,str.size()-1),subset+ch);
    printsubset(str.substr(1,str.size()-1),subset);

}

int main(){
    string str = "abc";
    string subset="";
    
    printsubset(str,subset);

    return 0 ;
}