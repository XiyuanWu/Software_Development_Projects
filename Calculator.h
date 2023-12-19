#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;


class Calculator {

  public:
    
    Calculator() {}
    ~Calculator() {}

    // PART 1: Basic Operation
    template<typename T>
    T addition(T&a, T&b) {
        return a + b;
    }

    template<typename T>
    T subtraction(T&a, T&b) {
        return a - b;
    }

    template<typename T>
    T multiplication(T&a, T&b) {
        return a * b;
    }

    template<typename T>
    T division(T&a, T&b) {
        if (b == 0) throw runtime_error("Can't divide by 0");
        return a / b;
    }

    template<typename T>
    T exponentiation(T&a, T&b) {
        return pow(a, b);
    }

    template<typename T>
    T squareRoot(T&a) {
        if (a < 0) throw runtime_error("Number can't be negetive");
        return sqrt(a);
    }

    int factorial(int a) {
        if (a < 0) throw runtime_error("Number can't be negetive");
        if (a == 0) return 1;
        return a * factorial(a - 1);
    }




    // PART 2: Compute common shape area
    template<typename T>
    T circleArea(T&a) {
        if (a < 0) throw runtime_error("Length can't be negetive");
        return 3.14 * pow(a, 2);
    }

    template<typename T>
    T rectangleArea(T&a, T&b) {
        if (a < 0 || b < 0) throw runtime_error("Length can't be negetive");
        return a * b;
    }

    template<typename T>
    T triangleArea(T&a, T&b) {
        if (a < 0) throw runtime_error("Length can't be negetive");
        return (a * b) / 2;
    }

    template<typename T>
    T trapezoidArea(T&a, T&b, T&c) {
        if (a < 0 || b < 0 || c < 0) throw runtime_error("Length can't be negetive");
        return ((a + b) * c) / 2;
    }




    // PART 3: Compute common shape volume
    template<typename T>
    T cubeVolume(T&a, T&b, T&c) {
        if (a < 0 || b < 0 || c < 0) throw runtime_error("Length can't be negetive");
        return a * b * c; 
    }

    template<typename T>
    T sphereVolume(T&a) {
        if (a < 0) throw runtime_error("Length can't be negetive");
        return 4/3 * 3.14 * pow(a, 3);
    }

    template<typename T>
    T cylinderVolume(T&a, T&b) {
        if (a < 0 || b < 0 ) throw runtime_error("Length can't be negetive");
        return circleArea(a) * b;
    }

    template<typename T>
    T coneVolume(T&a, T&b) {
        if (a < 0 || b < 0) throw runtime_error("Length can't be negetive");
        return cylinderVolume(a, b) * (1.0 / 3.0);
    }

};