/* 
 * File:   main.cpp
 * Author: Michael Masli
 * Created on February 22, 2015, 5:24 PM
 *           Purpose: finding miles per gallon of the car
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

/*
 * A car holds 12 gallons of gasoline and can travel 350 miles before refueling. Write a
program that calculates the number of miles per gallon the car gets. Display the result
on the screen.
Hint: Use the following formula to calculate miles per gallon (MPG):
MPG = Miles Driven / Gallons of Gas Used
 */
int main(int argc, char** argv) {
    float gallns = 12, miles = 350;
    float MPG = miles/gallns;
    
    cout<<"MPG = " << MPG << " is the miles per gallon the car gets" <<endl;
    return 0;
}

