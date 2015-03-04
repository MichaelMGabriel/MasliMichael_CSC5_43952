/* 
 * File:   main.cpp
 * Author: Michael Masli
 * Created on March 4, 2015, 8:24 AM
 *         Purpose: 2nd Homework Problem
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
unsigned char CNVPCT=100;

//Function Prototypes

//Execution Begins here!

int main(int argc, char** argv) {

    //Declare Variables
unsigned short nCust, nEDrnks, nCDrnks;
unsigned char pEDrnks, pCDrnks;

//Assigned Values
nCust=16500;//Number of customers
pEDrnks=15;//Percentage Energy Drinkers
pCDrnks=58;//Percentage out of Energy Drinkers

//Process/Calculate
nEDrnks=nCust/static_cast<float>(CNVPCT)*pEDrnks;
nCDrnks=nEDrnks/static_cast<float>(CNVPCT)*pCDrnks;

//Output Everything
cout<<"Number of customers  = " << nCust << "%" <<endl;
cout<<"Percentage of Energy Drinkers = " <<static_cast<int>(pEDrnks) << "%" << endl;
cout<<"Percentage Citrus Drinkers/Energy Drinkers = "<<static_cast<int>(pCDrnks)<<"%"<<endl;
cout<<"Number of Energy Drinkers = "<<nEDrnks<<endl;
cout<<"Number of Citrus Drinkers = "<<nCDrnks<<endl;
    return 0;
}

