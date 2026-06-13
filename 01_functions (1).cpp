// ================================================
// Program 1: Functions
// Write a C++ program to find factorial using
// recursive and non-recursive functions
// ================================================

#include<iostream>
using namespace std;

// Non-recursive factorial
int factIterative(int n) {
    int result = 1;
    for(int i = 1; i <= n; i++)
        result *= i;
    return result;
}

// Recursive factorial
int factRecursive(int n) {
    if(n == 0 || n == 1) return 1;
    return n * factRecursive(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial (Iterative): " << factIterative(n) << endl;
    cout << "Factorial (Recursive): " << factRecursive(n) << endl;
    return 0;
}
