// ================================================
// Program 3: Arrays
// Write a C++ program to perform operations on
// arrays - insert, delete, search, sort, reverse
// ================================================

#include<iostream>
using namespace std;

void display(int arr[], int n) {
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Bubble Sort
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++)
        for(int j = 0; j < n-i-1; j++)
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}

// Linear Search
int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++)
        if(arr[i] == key) return i;
    return -1;
}

// Reverse array
void reverse(int arr[], int n) {
    int start = 0, end = n - 1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++; end--;
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "\nOriginal array: ";
    display(arr, n);

    // Sort
    bubbleSort(arr, n);
    cout << "Sorted array  : ";
    display(arr, n);

    // Search
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    int pos = linearSearch(arr, n, key);
    if(pos != -1)
        cout << key << " found at index " << pos << endl;
    else
        cout << key << " not found\n";

    // Reverse
    reverse(arr, n);
    cout << "Reversed array: ";
    display(arr, n);

    return 0;
}
