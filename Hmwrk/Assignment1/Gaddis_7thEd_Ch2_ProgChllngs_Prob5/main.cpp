/* 
 * File:   main.cpp
 * Author: Michael Masli 
 * Created on February 22, 2015, 4:40 PM
 *     Purpose: finding average series of values
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//User libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!!

/*
To get the average of a series of values, you add the values up and then divide the sum by
the number of values. Write a program that stores the following values in ve different
variables: 28, 32, 37, 24, and 33. The program should rst calculate the sum of these ve
variables and store the result in a separate variable named sum. Then, the program
should divide the sum variable by 5 to get the average. Display the average on the screen.
 */
int main(int argc, char** argv) {
    float a=28, b=32, c=37, d=24, e=33;
    float sum=a+b+c+d+e;
    float avg=sum/5;
    
    cout<<"the average of a series of values is " <<avg<<endl;
    return 0;
}

