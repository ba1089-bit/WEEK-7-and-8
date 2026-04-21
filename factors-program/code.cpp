#include <iostream>
#include <cmath>
using namespace std;

// Function to find factors
int* findFactors(int n, int &size) {
    size = 0;

    // Count factors
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            size++;
    }

    int* factors = new int[size];

    int index = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            factors[index++] = i;
        }
    }

    return factors;
}

// Sum of factors
int sumFactors(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

// Product of factors
long long productFactors(int arr[], int size) {
    long long product = 1;
    for (int i = 0; i < size; i++)
        product *= arr[i];
    return product;
}

// Sum of squares
int sumSquareFactors(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += pow(arr[i], 2);
    return sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int size;
    int* factors = findFactors(num, size);

    cout << "Factors: ";
    for (int i = 0; i < size; i++) {
        cout << factors[i] << " ";
    }
    cout << endl;

    cout << "Sum of factors: " << sumFactors(factors, size) << endl;
    cout << "Product of factors: " << productFactors(factors, size) << endl;
    cout << "Sum of squares of factors: " << sumSquareFactors(factors, size) << endl;

    delete[] factors;

    return 0;
}