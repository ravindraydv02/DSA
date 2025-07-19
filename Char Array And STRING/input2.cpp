#include<iostream>
#include<cstring>
using namespace std;
int main(){




char sentence[30];
cin.getline(sentence,30,'*');

cout<<"your word was : "<<sentence<<endl;
cout<<"length : "<<strlen(sentence)<<endl;
return 0;

}