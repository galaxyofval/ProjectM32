#include "NumberArray.h"
#include <iomanip>
#include <algorithm>

NumberArray::NumberArray(int s) {
    if (s <= 0) {
        cout << "Invalid size. Using default size " << MAX_SIZE << endl;
        s = MAX_SIZE;
    }
    size = s;
    arr = new double[size];
    for (int i = 0; i < size; ++i) arr[i] = 0.0;
    cout << "Array of size " << size << " created.\n";
}

// Destructs the array.
NumberArray::~NumberArray() {
    delete[] arr;
    cout << "The destructor is running.\n";
}

// Checks to see if the value is out of bounds.
void NumberArray::setNumber(int index, double value) {
    if (index < 0 || index >= size) {
        cout << "The index is out of the bounds of the array, number not stored.\n";
    } else {
        arr[index] = value;
    }
}

double NumberArray::getNumber(int index) const {
    if (index < 0 || index >= size) {
        cout << "The index is out of the bounds of the array, returning default.\n";
        return DEFAULT_RETURN;
    }
    return arr[index];
}

// Returns the minimum value.
double NumberArray::getMin() const {
    double minVal = arr[0];
    for (int i = 1; i < size; ++i)
        if (arr[i] < minVal)
            minVal = arr[i];
    return minVal;
}
// Returns the maximum value.
double NumberArray::getMax() const {
    double maxVal = arr[0];
    for (int i = 1; i < size; ++i)
        if (arr[i] > maxVal)
            maxVal = arr[i];
    return maxVal;
}
// Gets the average of the values.
double NumberArray::getAverage() const {
    double sum = 0;
    for (int i = 0; i < size; ++i)
        sum += arr[i];
    return sum / size;
}
// Prints out the array.
void NumberArray::printArray() const {
    cout << fixed << setprecision(1);
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
