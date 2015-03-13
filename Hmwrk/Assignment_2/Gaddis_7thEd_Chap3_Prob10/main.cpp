/* 
 * File:   main.cpp
 * Author: Michael Masli
 *
 * Created on March 10, 2015, 9:34 PM
 *    Purpose: Convert Celcius to Fahrenheit
 */

//System Libraries
#include <iostream>

//User Libraries

//Global Constants

//Function Prototypes 

//Execution Begins Here!!!


using namespace std;

/* 10. Write a program that converts Celsius temperatures to Fahrenheit temperatures. The
formula is
F is the Fahrenheit temperature and C is the Celsius temperature.
 * 
 */
int main(int argc, char** argv) {
//Declare Variables
    float celc;
    float fah;
    
    
    //Input the celcius value
    cout<<"What is the temperature in Celcius degree? xx.xx"<<endl;
    cin>>celc;
    
    //Convert to Fahrenheit
    fah= 1.8*celc + 32;
    
    //Output the results
    cout<<"The conversion from Celcius to Fahrenheit = "<<fah<<" degrees fahrenheit"<<endl;
    
    return 0;
}

