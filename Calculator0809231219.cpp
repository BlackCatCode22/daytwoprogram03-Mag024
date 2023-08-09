#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    //Comment practice
    int num1 = 0;
    int num2 = 0;
    int theSum = 0;
    int theProd = 0;

    //Input of first number.
    cout <<"/n First number...";
    cin >> num1;

    // Input of second number.
    cout << "/n Second Number...";
    cin >> num2;

    // Add the two numbers...
    theSum = num1 + num2;

    //Product of numbers
    theProd = num1 * num2;

    //Final Added Numbers
    cout << "The Total Is..." << theSum <<"!/n/n";
    cout << "Total Product..." << theProd <<"/n/n";


    return 0;
}
