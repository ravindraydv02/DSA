#include<iostream>
#include<vector>
using namespace std ;//chat gpt code hqai ye

vector<int> pairsum(vector<int> arr, int target){
    int st = 0, end = arr.size() - 1;
    vector<int> ans;

    while(st < end){
        int currsum = arr[st] + arr[end];
        if(currsum == target){
            ans.push_back(st);
            ans.push_back(end);
            return ans; // return immediately after finding the first pair
        }
        else if(currsum > target){
            end--;
        }
        else{
            st++;
        }
    }

    // If no pair found, return {-1, -1} to indicate no such pair
    ans.push_back(-1);
    ans.push_back(-1);
    return ans;
}

int main (){
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = pairsum(vec, target);

    if(result[0] != -1){
        cout << "Pair found at indices: " << result[0] << " and " << result[1] << endl;
    }
    else{
        cout << "No valid pair found." << endl;
    }
}
