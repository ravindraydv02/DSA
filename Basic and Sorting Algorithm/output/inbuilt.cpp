#include <iostream>
#include <algorithm>  // Needed for sort()
using namespace std;

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};

    // Sorting from index 2 to 4 (i.e., elements 1, 3, 2)
    sort(arr + 2, arr + 5);

    print(arr, 8);

    return 0;
}
