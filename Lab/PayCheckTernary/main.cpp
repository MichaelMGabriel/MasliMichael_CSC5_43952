/* 
 * File:   main.cpp
 * Author: Michael Masli
 *
 * Created on March 16, 2015, 8:12 AM
 * Purpose: paycheck --> Ternary
 */  

//System Libraries
#include <iostream> // I/O Standard
#include <iomanip> // Formatting
#include <fstream> // I/O File

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!




using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    ofstream out; //Output the results in a file
    float hrsWkd; //Hours Worked (hrs)
    float payRate; //Pay Rate ($'s/hr)
    float oRate=1.5f; //Multiplicative factor of payRate
    float oTime=40.0f; //Where overtime begins (hr)
    float payChk; // Gross pay ($'s)
    //Open the file
    out.open("Payroll.dat");
    //Prompt the user for inputs
    
    cout<<"How many hours this week did you work?"<<endl;
    cin>>hrsWkd;
    cout<<"What is your pay rate ($'s/hr) ?"<<endl;
    cin>>payRate;
    
    //Calculate the paycheck
    payChk=hrsWkd<oTime?
              payRate*hrsWkd:
              payRate*(hrsWkd+(oRate-1)*(hrsWkd-oTime));
    
    //Output The Results to the screen
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Hours worked = "<<hrsWkd<<" (hrs) "<<endl;
    cout<<"Pay Rate = $"<<payRate<<" (/hr) "<<endl;
    cout<<"Over time rate = "<<oRate<<endl;
    cout<<"Over time begins at "<<oTime<<" (hrs) "<<endl;
    cout<<"Gross Pay = $"<<payChk<<endl;
    
    //Output the results to the file
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Hours worked = "<<hrsWkd<<" (hrs) "<<endl;
    out<<"Pay Rate = $"<<payRate<<" (/hr) "<<endl;
    out<<"Over time rate = "<<oRate<<endl;
    out<<"Over time begins at "<<oTime<<" (hrs) "<<endl;
    out<<"Gross Pay = $"<<payChk<<endl;
    
    //Close the file
    out.close();
    
    
    return 0;
}

