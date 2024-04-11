//Q-2. Write a program of to sort the array using templates

#include <iostream>

using namespace std;

// Template function to sort an array of any type using bubble sort
template<typename T, size_t N>
void sortArray(T (&arr)[N]) {
    for (size_t i = 0; i < N - 1; ++i) {
        for (size_t j = 0; j < N - 1 - i; ++j) {
            // Perform comparison and swap using std::swap
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Template function to print the elements of an array of any type
template<typename T, size_t N>
void printArray(const T (&arr)[N]) {
    for (size_t i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Example with an array of integers
    int intArray[] = {5, 2, 8, 1, 4};
    cout << "Before sorting (integers): ";
    printArray(intArray);

    // Sort the array of integers
    sortArray(intArray);

    cout << "After sorting (integers): ";
    printArray(intArray);
}

