#include<iostream>
#include<algorithm>
using namespace std;
int diagonalsumm(int mat[][4],int n){
    int sum =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=mat[i][j];
            }else if(j==n-i-1){
                sum+=mat[i][n-i-1];

            }
        }
    }
    cout<<"sum = "<<sum<<endl;
    return sum;
}

int main (){
    int mat[4][4] ={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    diagonalsumm(mat,4);
    return 0;
}