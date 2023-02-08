//******************************************************************
// Author: Kevin Hernandez-Garza
// Assignment Number: Programming Assignment "2"
// File Name: hernandezGarza.Lab2.cpp
// Course/Section: COSC 1337 Section -009
// Due Date: 2/11/23
// Instructor: Dr.Haytham Mohamed
//
// Software Sales: This programs helps calculate the discount, and
// the total price of the packages depending on how much they purchased.
//  ******************************************************************

// preprocessor directive, includes a header file
// because we are using the cout object
#include <iostream>
using namespace std;

// beginning of a function
int main()
{
    // variable definitions
    double unitsOrdered,
        total_price,
        UNIT_PRICE = 199.00;

    // output
    cout << "How many units are being purchased? ";
    // input
    cin >> unitsOrdered;

    // if it's between 10-19 discount is 20%
    if (unitsOrdered >= 10 & unitsOrdered <= 19)
        total_price = (unitsOrdered * UNIT_PRICE) * 0.8;
    // if it's between 20-49 discount is 30%
    else if (unitsOrdered >= 20 & unitsOrdered <= 49)
        total_price = (unitsOrdered * UNIT_PRICE) * 0.7;
    // if it's between 50-99 discount is 40%
    else if (unitsOrdered >= 50 & unitsOrdered <= 99)
        total_price = (unitsOrdered * UNIT_PRICE) * 0.6;
    // if it's between 100 or more discount is 50%
    else if (unitsOrdered >= 100)
        total_price = (unitsOrdered * UNIT_PRICE) * 0.5;
    // else if it's between 0-9 discount is 0%
    else
        total_price = unitsOrdered * UNIT_PRICE;

    // output total_price value
    cout << "Your total price is $" << total_price;

    // usually indicates that the program ran successfully
    return 0;
}