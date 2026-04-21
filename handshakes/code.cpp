#include <iostream>
using namespace std;

// Recursive method
int recursiveSum(int n) {
    if (n == 0)
        return 0;
    return n + recursiveSum(n - 1);
}

// Formula method
int formulaSum(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    int n;
    cout << "Enter a natural number: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a natural number!" << endl;
        return 0;
    }

    int recResult = recursiveSum(n);
    int formulaResult = formulaSum(n);

    cout << "Sum using recursion: " << recResult << endl;
    cout << "Sum using formula: " << formulaResult << endl;

    if (recResult == formulaResult)
        cout << "Both results are equal." << endl;
    else
        cout << "Results are NOT equal." << endl;

    return 0;
}