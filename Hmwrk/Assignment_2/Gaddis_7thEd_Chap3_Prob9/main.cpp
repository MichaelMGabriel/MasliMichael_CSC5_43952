/* 
 * File:   main.cpp
 * Author: Michael Masli
 *
 * Created on March 10, 2015, 9:10 PM
 *      Purpose: Monthly cost
 */

//System Libraries
#include <iostream>

//User Libraries

//Global Constants

//Function Prototypes 

//Execution Begins Here!!!


using namespace std;

/* 9. Write a program that asks the user to enter the monthly costs for the following
expenses incurred from operating his or her automobile: loan payment, insurance,
gas, oil, tires, and maintenance. The program should then display the total monthly
cost of these expenses, and the total annual cost of these expenses.
 * 
 */
int main(int argc, char** argv) {
//Declare Variables
    float lnPymnt, ins, gas, oil, tires, maint,totMon, totAnnl;
    
    //Input the monthly costs
    cout<<"enter the monthly costs for loan payment $xx.xx"<<endl;
    cin>>lnPymnt;
    cout<<"enter the monthly costs for insurance $xx.xx"<<endl;
    cin>>ins;
    cout<<"enter the monthly costs for gas $xx.xx"<<endl;
    cin>>gas;
    cout<<"enter the monthly costs for oil $xx.xx"<<endl;
    cin>>oil;
    cout<<"enter the monthly costs for tires $xx.xx"<<endl;
    cin>>tires;
    cout<<"enter the monthly costs for maintenance $xx.xx"<<endl;
    cin>>maint;
    
    //Calculate the monthly cost and annual cost
    totMon=lnPymnt + ins + gas + oil + tires+ maint;
    totAnnl=totMon*12; //annual costs for 12 months
    
    //Output the results
    cout<<"The total monthly costs for these expenses is "<<totMon<<" dollars"<<endl;
    cout<<"The total annual costs for these expenses is "<<totAnnl<<" dollars"<<endl;
    
    
    
    
    
    return 0;
}

