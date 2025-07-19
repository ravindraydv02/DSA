// #include<iostream>
// #include <climits>
// using namespace std;
// void trap(int *hight,int n){
//     int leftmax[20000],rightmax[20000];
//     leftmax[0]=hight[0];
//     rightmax[n-1]=hight[n-1];

//     for(int i=1;i<n;i++){
//         leftmax[i]=max(leftmax[i-1],hight[i]);
//     }
//     for(int i=n-2;i>=0;i--){
//         rightmax[i]=max(rightmax[i+1],hight[i]);
//     }
//     int watertrapped = 0;
//     for(int i=0;i<n;i++){
//         int currwater =min(leftmax[i],rightmax[i]-hight[i]);
//         if(currwater>0){
//             watertrapped+=currwater;
//         }

//     }
//     cout<<"watertrapped = "<<watertrapped<<endl;
// }
// int main(){
//     int hight[]={4,2,0,6,3,2,5};
//     int n=sizeof(hight)/sizeof(int);
//     trap(hight,n);
// }
#include<iostream>
#include <climits>
using namespace std;

void trap(int *height, int n){
    int leftmax[20000], rightmax[20000];

    // Fill leftmax
    leftmax[0] = height[0];
    for(int i = 1; i < n; i++){
        leftmax[i] = max(leftmax[i-1], height[i]);
    }

    // Fill rightmax
    rightmax[n-1] = height[n-1];
    for(int i = n - 2; i >= 0; i--){
        rightmax[i] = max(rightmax[i+1], height[i]);
    }

    int watertrapped = 0;

    // Calculate water trapped
    for(int i = 0; i < n; i++){
        int currwater = min(leftmax[i], rightmax[i]) - height[i];
        if(currwater > 0){
            watertrapped += currwater;
        }
    }

    cout << "watertrapped = " << watertrapped << endl;
}

int main(){
    int height[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height)/sizeof(int);
    trap(height, n);
}
