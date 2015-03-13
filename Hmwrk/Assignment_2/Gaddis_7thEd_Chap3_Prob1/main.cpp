/* 
 * File:   main.cpp
 * Author: Michael Masli
 *
 * Created on March 9, 2015, 5:47 PM
 *         Purpose: Calculating car's mileage
 */

//System Libraries
#include <iostream>

//User Libraries

//Global Constants

//Prototype Functions

//Execution Begins Here!!!

using namespace std;

/* 1. Write a program that calculates a car's gas mileage. The program should ask the user
to enter the number of gallons of gas the car can hold, and the number of miles it can
be driven on a full tank. It should then display the number of miles that may be driven
per gallon of gas.
*/

int main(int argc, char** argv) {
    //Declare Variables
    float miles, gallns, MPG;
    
    cout<<"Input the number of miles the car can be driven "<<endl;
    cin>>miles;
    cout<<"What is the number of gallons of the car can hold?"<<endl;
    cin>>gallns;
    //Calculate Miles per Gallon
    MPG = miles/gallns;
    
    //Output the results
    cout<<"The milleage of the car is "<<MPG<<" = "<<miles<<" / "<<gallns<<endl;
    
    
    
    return 0;
}

