#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

#include <iostream>
using namespace std;

class NumberArray {
private:
    double* arr;
    int size;
    static const int MAX_SIZE = 10;
    static constexpr double DEFAULT_RETURN = 1000000.0; // Returned value for invalid index.

public:
    // Constructor
    NumberArray(int s = MAX_SIZE);

    // Destructor
    ~NumberArray();

    // Mutator
    void setNumber(int index, double value);

    // Accessor
    double getNumber(int index) const;

    // Utility functions
    double getMin() const;
    double getMax() const;
    double getAverage() const;

    // Display
    void printArray() const;
};

#endif
