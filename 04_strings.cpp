// ================================================
// Program 4: Strings
// Write a C++ program to perform string operations
// - length, reverse, palindrome, concatenation,
//   uppercase, lowercase, count vowels
// ================================================

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int countVowels(string s) {
    int count = 0;
    for(char c : s) {
        c = tolower(c);
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            count++;
    }
    return count;
}

bool isPalindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

int main() {
    string s1, s2;
    cout << "Enter first string : "; cin >> s1;
    cout << "Enter second string: "; cin >> s2;

    cout << "\n--- String Operations ---\n";
    cout << "Length of s1       : " << s1.length() << endl;

    // Reverse
    string rev = s1;
    reverse(rev.begin(), rev.end());
    cout << "Reverse of s1      : " << rev << endl;

    // Palindrome
    cout << "Is s1 palindrome?  : " << (isPalindrome(s1) ? "Yes" : "No") << endl;

    // Concatenation
    cout << "Concatenation      : " << s1 + " " + s2 << endl;

    // Uppercase
    string upper = s1;
    transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
    cout << "Uppercase of s1    : " << upper << endl;

    // Lowercase
    string lower = s1;
    transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
    cout << "Lowercase of s1    : " << lower << endl;

    // Count vowels
    cout << "Vowels in s1       : " << countVowels(s1) << endl;

    // Compare
    cout << "s1 == s2?          : " << (s1 == s2 ? "Equal" : "Not Equal") << endl;

    return 0;
}
