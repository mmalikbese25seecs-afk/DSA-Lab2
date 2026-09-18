#include <iostream>
#include <cassert>
using namespace std;

// function declerationa

bool isSorted(const int* arr, const int size);

// testing funtions

// array already sorteed in ascending order

void sortedArray() {
    int arr[] = {1, 2, 3, 4, 5};

    assert(isSorted(arr, 5) == true);
}

// unsorted array;

void unsortedArray() {

    int arr[] = {1, 4, 3, 5, 6};

    assert(isSorted(arr, 5) == false);

}

// sorted array duplicate value

void duplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};

    assert(isSorted(arr, 5) == true);
}

// one element array]

void oneElement() {
    int arr[] = {42};
    assert(isSorted(arr, 1) == true);
}

// array in descending order

void descendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
}

//array containing negative value

void negativeValues() {

    int arr[] = {-5, -3, -1, 0, 2};
    assert(isSorted(arr, 5) == true);
}

// Addtional test for empty array

void emptyArray() {

    int* arr = nullptr;

    assert(isSorted(arr, 0) == true);
}

// unsorted array with negative number
void unsortedNegativeValues() {
    int arr[] = {-1, -5, -2, 0};
    assert(isSorted(arr, 4) == false);
}

bool isSorted(const int* arr, const int size) {

// if the array is null or one element, it is sorted
    if (arr == nullptr || size <= 1) {
        return true;
    }
    

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            return true;
        } else {
            return false;
        }
    }

    return false; 
}

int main() {
    sortedArray();
    unsortedArray();
    duplicateValues();
    oneElement();
    descendingArray();
    negativeValues();
    emptyArray();
    unsortedNegativeValues();

    cout << "All test cases pass" << endl;
    return 0;
}