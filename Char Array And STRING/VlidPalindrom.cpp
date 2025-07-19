#include<iostream>
#include<cstring>
using namespace std;

bool palindrome(char *arr, int n) {
    int ststring = 0, endstring = n - 1;
    while (ststring <= endstring) {
        if (arr[ststring] != arr[endstring]) {
            return false; // Not a palindrome
        }
        ststring++;
        endstring--;
    }
    return true; // It's a palindrome
}

int main() {
    char arr[] = "rarvindra";
    int length = strlen(arr); // Calculate length of string
    if (palindrome(arr, length)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}
