#include <iostream>
using namespace std;

template <class T>
int linearSearch(T arr[], int n, T key) {
    for(int i=0;i<n;i++) {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {10,20,30,40};
    cout << linearSearch(arr, 4, 30);
}