#include <iostream>
using namespace std;

int getLargestElement(int arr[], int size) {
    int largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int largest = getLargestElement(arr, size);
    cout << "The largest element in the array is: " << largest << endl;

    delete[] arr;
    return 0;
}