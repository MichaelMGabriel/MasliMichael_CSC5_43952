/* 
 * File:   main.cpp
 * Author: Michael Masli
 *
 * Created on March 9, 2015, 6:47 PM
 *           Purpose: calculates a theater's gross and net
 */

//System Libraries
#include <iostream>
#include <iomanip>
//User Libraries

//Global Constants

//Function Prototypes 

//Execution Begins Here!!!


using namespace std;

/* 5. A movie theater only keeps a percentage of the revenue earned from ticket sales. The
remainder goes to the movie distributor. Write a program that calculates a theater s
gross and net box office profit for a night. The program should ask for the name of
the movie, and how many adult and child tickets were sold. (The price of an adult
ticket is $6.00 and a child s ticket is $3.00.) It should display a report similar to
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    float gross, nBox, amtPaid;
    float adlt = 6.00;
    float child = 3.00;
    int ichild, iadult;
    string movie;
    
    //Input
    cout<<"What is the name of the movie"<<endl;
    getline(cin, movie);
    
    cout<<"How many adult tickets were sold?"<<endl;
    cin>>iadult;
    
    cout<<"How many child tickets were sold?"<<endl;
    cin>>ichild;
    
    //Calculate the gross and netbox
    gross = iadult*adlt + ichild*child;
    nBox = 0.02*gross;
    amtPaid = gross - nBox;
    
    //Output the results
    cout<<left<<setw(36)<<"Movie name"<<movie<<endl;
    cout<<left<<setw(36)<<"Adult tickets sold"<<iadult<<endl;
    cout<<left<<setw(36)<<"Gross Box Office Profit:"<<gross<<endl;
    cout<<left<<setw(36)<<"Net Box Office Profit:"<<ichild<<endl;
    cout<<left<<setw(36)<<"Amount Paid to Distributor"<<amtPaid<<endl;
    
    //Exit stage right!
    
    
    return 0;
}

