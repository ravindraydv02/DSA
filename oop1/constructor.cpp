#include<iostream>
#include<string>
using namespace std ;
class car {
    string name;
    string color;

public:
    car(){
        cout<<"constructor is called. object being created..\n";
        this->name=name;
        this->color=color;
    }
      
    void start(){
        cout<<"car has started..";

    }
    void stop (){
        cout<<"car has stopped\n";
    }

};
int main(){
    car c1;// object
    return 0;

}