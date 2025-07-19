#include<iostream>
using namespace std;
int search(int matrix[][4],int n ){
    int key=33;
    for(int i=0;i<4;i++){
        for(int j=0;j<n;j++){
            if(key==matrix[i][j]){
                key=matrix[i][j];
                cout << "Key " << key << " found at position (" << i << "," << j << ")" << endl;
            }
           
        }
    }
    cout<<key;
}
int main(){
    int matrix[4][4]={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    search(matrix,4);
}