/* 
 * File:   main.cpp
 * Author: Michael Masli
 * Created on February 22, 2015, 4:59 PM
 *         Purpose: Ocean Level
 */

#include <cstdlib>
#include <iostream>

 using namespace std;

//User libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!!


/*Assuming the ocean s level is currently rising at about 1.5 millimeters per year, write a
program that displays:
* The number of millimeters higher than the current level that the ocean s level will
be in 5 years
* The number of millimeters higher than the current level that the ocean s level will
be in 7 years
* The number of millimeters higher than the current level that the ocean s level will
be in 10 years
 * 
 */
int main(int argc, char** argv) {
    float a = 1.5;
    float s1 = 5*a;
    float s2 = 7*a;
    float s3 = 10*a;

    cout <<"In 5 years = " << s1 << " millimeters"<<endl;
    cout << "In 7 years = " << s2 << " millimeters"<<endl;
    cout << "In 10 years = " << s3 << " millimeters" << endl;
    return 0;
}

