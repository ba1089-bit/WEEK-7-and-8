#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to find sum
int findSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

// Function to find mean
double findMean(int arr[], int size) {
    int sum = findSum(arr, size);
    return (double)sum / size;
}

// Function to find shortest
int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

// Function to find tallest
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int heights[11];

    // Random height generation
    srand(time(0));
    for (int i = 0; i < 11; i++) {
        heights[i] = 150 + rand() % 101; // 150 to 250
    }

    cout << "Heights of players: ";
    for (int i = 0; i < 11; i++) {
        cout << heights[i] << " ";
    }
    cout << endl;

    cout << "Sum of heights: " << findSum(heights, 11) << endl;
    cout << "Mean height: " << findMean(heights, 11) << endl;
    cout << "Shortest height: " << findMin(heights, 11) << endl;
    cout << "Tallest height: " << findMax(heights, 11) << endl;

    return 0;
}