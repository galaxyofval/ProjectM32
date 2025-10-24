#include "NumberArray.h"
#include <iostream>
#include <random>
#include <iomanip>
using namespace std;

int main() {
    cout << "Test constructors\n";
    NumberArray n1;
    n1.printArray();
    cout << "\n";

    NumberArray n2(15);
    n2.printArray();
    cout << "\n";

    cout << "Test mutator\n";
    default_random_engine gen;
    uniform_real_distribution<double> dist(-100.0, 100.0);
    for (int i = 0; i < 15; ++i)
        n2.setNumber(i, dist(gen));
    n2.printArray();
    cout << "\n";

    cout << "Trying to set a number with an out of bounds index (20):\n";
    n2.setNumber(20, 123.4);
    cout << "\n";

    cout << "Test accessors\n";
    cout << "Access item at index 5: " << n2.getNumber(5) << "\n";
    cout << "Access item at index 20 (out of bounds): " << n2.getNumber(20) << "\n\n";

    cout << "The minimum value in the array is: " << n2.getMin() << "\n";
    cout << "The maximum value in the array is: " << n2.getMax() << "\n";
    cout << "The average of the values in the array is: " << fixed << setprecision(1) << n2.getAverage() << "\n";
}
