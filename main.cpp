#include "Calculator.h"


void menu() {

    cout << "Simple Calculator Menu\n" << endl;

    cout << "PART 1: Baseic Operation" << endl
         << "1. Addition" << endl
         << "2. Subtraction" << endl
         << "3. Multiplication" << endl
         << "4. Division" << endl
         << "5. Exponentiation" << endl
         << "6. Square Root" << endl
         << "7. Factorial\n" << endl;

    cout << "PART 2: Compute Area" << endl
         << "8. Circle" << endl
         << "9. Rectangle/Square" << endl
         << "10. Triangle" << endl
         << "11. Trapezoid\n" << endl;

    cout << "PART 3: Compute Volume" << endl
         << "12. Cubiod/Cube" << endl
         << "13. Sphere" << endl
         << "14. Cylinder" << endl
         << "15. Cone\n" << endl;

    cout << "Enjoy!" << endl;

    
}

int main() {

    Calculator calculator;
    int choice = 0;
    //unsigned int result = 0;
    double a, b, c;
    int d;


    
    menu();

    cout << "Please enter a number select a choice: ";
    cin >> choice;
    cin.ignore();

    if (! cin >> choice) throw runtime_error("Input Failed");


    switch(choice) {

      case 1:
        cout << "Enter first number you want to add: ";
        cin >> a;
        cin.ignore();
        cout << "Enter second number you want to add: ";
        cin >> b;

        cout << "The result is " << calculator.addition(a, b) << endl;
        break;

      case 2:
        cout << "Enter first number you want to subtract: ";
        cin >> a;
        cin.ignore();
        cout << "Enter second number you want to subtract: ";
        cin >> b;
        cout << "The result is " << calculator.subtraction(a, b) << endl;
        break;

      case 3:
        cout << "Enter first number you want to multiply: ";
        cin >> a;
        cin.ignore();
        cout << "Enter second number you want to multiply: ";
        cin >> b;
        cout << "The result is " << calculator.multiplication(a,b) <<endl;
        break;

      case 4:
        cout << "Enter first number you want to divide: ";
        cin >> a;
        cin.ignore();
        cout << "Enter second number you want to divide: ";
        cin >> b;
        cout << "The result is " << calculator.division(a,b) << endl;
        break;

      case 5:
        cout << "Enter base number: ";
        cin >> a;
        cin.ignore();
        cout << "Enter exponential number: ";
        cin >> b;
        cout << "The result is " << calculator.exponentiation(a, b) << endl;
        break;

      case 6:
        cout << "Enter number you want to square root: " << endl;
        cin >> a;
        cout << "The result is " << calculator.squareRoot(a) << endl;
        break;

      case 7:
        cout << "Enter first number you want to factorial(Interger Only):" << endl;
        cin >> d;
        cout << "The result is " << calculator.factorial(d) << endl;
        break;

      case 8:
        cout << "Enter circle's radius: ";
        cin >> a;
        cin.ignore();
        cout << "The result is " << calculator.circleArea(a) << endl;
        break;

      case 9:
        cout << "Enter rectangle length: ";
        cin >> a;
        cin.ignore();
        cout << "Enter rectangle width(If you want to compute area of suqare, width should be same as length): ";
        cin >> b;
        cout << "The result is " << calculator.rectangleArea(a, b) << endl;
        break;

      case 10:
        cout << "Enter triangle bottom length: ";
        cin >> a;
        cin.ignore();
        cout << "Enter triangle height: ";
        cin >> b;
        cout << "The result is " << calculator.triangleArea(a, b) << endl;
        break;

      case 11:
        cout << "Enter trapezoid top length: ";
        cin >> a;
        cin.ignore();
        cout << "Enter trapezoid bottom length: ";
        cin >> b;
        cin.ignore();
        cout << "Enter trapezoid height: ";
        cin >> c;
        cout << "The result is "<< calculator.trapezoidArea(a, b, c) << endl;
        break;


      case 12:
        cout << "Enter cube length: ";
        cin >> a;
        cin.ignore();
        cout << "Enter cube width: ";
        cin >> b;
        cin.ignore();
        cout << "Enter cube height: ";
        cin >> c;
        cout << "The result is " << calculator.cubeVolume(a, b, c) << endl;
        break;

      case 13:
        cout << "Enter shphere radius: ";
        cin >> a;
        cin.ignore();
        cout << "The result is " << calculator.sphereVolume(a) << endl;
        break;

      case 14:
        cout << "Enter cylinder radius: ";
        cin >> a;
        cin.ignore();
        cout << "Enter cylinder height: ";
        cin >> b;
        cin.ignore();
        cout << "The result is " << calculator.cylinderVolume(a, b) << endl;
        break;

      case 15:
        cout << "Enter cone radius:" << endl;
        cin >> a;
        cin.ignore();
        cout << "Enter cone height:" << endl;
        cin >> b;
        cin.ignore();
        cout << "The result is " << calculator.coneVolume(a, b) << endl;
        break;
     
      default:
        throw out_of_range("Number entered out of range, please try again");






    }
    return 0;
}