/* 
 * File:   main.cpp
 * Author: Michael Masli
 *
 * Created on March 9, 2015, 6:04 PM
 *     Purpose: Ticket price for a soft ball game
 */

//System Libraries
#include <iostream>
#include <iomanip>
//User Libraries

//Global Constants

//Function Prototypes 

//Execution Begins Here!!!


using namespace std;

/* 2. There are three seating categories at a stadium. For a softball game, Class A seats cost
$15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how
many tickets for each class of seats were sold, then displays the amount of income
generated from ticket sales. Format your dollar amount in fixed-point notation, with
two decimal places of precision, and be sure the decimal point is always displayed.
 */
int main(int argc, char** argv) {
//Declare Variables
    float A=15, B=12, C=9, tix1, tix2, tix3;
    
    cout<<fixed<<showpoint<<setprecision(2); //to two decimal point
    
    
//Number of tickets that are sold
    cout<<"how many tickets for class A?"<<endl;
    cin>>tix1;
    cout<<"how many tickets for class B?"<<endl;
    cin>>tix2;
    cout<<"how many tickets for class C?"<<endl;
    cin>>tix3;
    
    //Calculate the amount tickets sold
    float classA=A*tix1;
    float classB=B*tix2;
    float classC=C*tix3;
    float tixSold = classA + classB + classC;
    
    //Calculate the results
    cout<<"The total income from sold tickets is "<<tixSold<<" (dollars)"<<endl;
    
    //Exit Stage right!
    return 0;
}

