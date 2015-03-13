/* 
 * File:   main.cpp
 * Author: Michael Masli
 *
 * Created on March 9, 2015, 6:24 PM 
 *    Purpose: Display test scores
 */

//System Libraries
#include <iostream>

//User Libraries

//Global Constants

//Function Prototypes 

//Execution Begins Here!!!

using namespace std;

/* 3. Write a program that asks for five test scores. The program should calculate the average
test score and display it. The number displayed should be formatted in fixed-point
notation, with one decimal point of precision.
 */
int main(int argc, char** argv) {
    //Declare Variables
    float test1, test2, test3, test4, test5, avgTests;
    
    //Input the test scores
    cout<<"What score did you get for test 1?"<<endl;
    cin>>test1;
    cout<<"What score did you get for test 2?"<<endl;
    cin>>test2;
    cout<<"What score did you get for test 3?"<<endl;
    cin>>test3;
    cout<<"What score did you get for test 4?"<<endl;
    cin>>test4;
    cout<<"What score did you get for test 5?"<<endl;
    cin>>test5;
    
    //Calculate the average test score
    avgTests=(test1+test2+test3+test4+test5)/5;
    
    //Output the results
    cout<<"The average test score is "<<avgTests<<endl;
    
    //Exit Stage right!
    
    
    return 0;
}

