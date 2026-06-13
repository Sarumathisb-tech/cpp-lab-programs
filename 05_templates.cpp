// ================================================
// Program 5: Templates
// Write a C++ program to demonstrate
// function templates and class templates
// ================================================

#include<iostream>
using namespace std;

// ── Function Template ──
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
void bubbleSort(T arr[], int n) {
    for(int i = 0; i < n-1; i++)
        for(int j = 0; j < n-i-1; j++)
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}

// ── Class Template ──
template <typename T>
class Calculator {
private:
    T a, b;
public:
    Calculator(T x, T y) : a(x), b(y) {}

    T add()      { return a + b; }
    T subtract() { return a - b; }
    T multiply() { return a * b; }
    T divide()   { return a / b; }

    void display() {
        cout << "Add      : " << add()      << endl;
        cout << "Subtract : " << subtract() << endl;
        cout << "Multiply : " << multiply() << endl;
        cout << "Divide   : " << divide()   << endl;
    }
};

int main() {
    // Function template with int
    cout << "Max of 10 and 20   : " << findMax(10, 20) << endl;
    // Function template with float
    cout << "Max of 3.5 and 2.1 : " << findMax(3.5, 2.1) << endl;
    // Function template with char
    cout << "Max of 'a' and 'z' : " << findMax('a', 'z') << endl;

    // Sort using template
    int arr[] = {5, 2, 8, 1, 9};
    int n = 5;
    bubbleSort(arr, n);
    cout << "\nSorted int array: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // Class template with int
    cout << "\n--- Integer Calculator ---\n";
    Calculator<int> c1(10, 3);
    c1.display();

    // Class template with float
    cout << "\n--- Float Calculator ---\n";
    Calculator<float> c2(10.5, 2.5);
    c2.display();

    return 0;
}
