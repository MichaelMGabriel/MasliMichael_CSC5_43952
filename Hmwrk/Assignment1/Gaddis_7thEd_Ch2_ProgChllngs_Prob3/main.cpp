/* 
 * File:   main.cpp
 * Author: Michael Masli
 * Created on February 22, 2015, 4:28 PM
 *      Purpose: compute the total sales tax
 */
#include <cstdlib>
#include <iostream>

using namespace std;

//User libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!!

//Write a program that will compute the total sales tax on a $52 purchase. Assume the
//state sales tax is 4 percent and the county sales tax is 2 percent.

int main(int argc, char** argv) {
    float total=52;
    float StSales = 0.04*total;
    float CoSales = 0.02*total;
    float salTax = total+StSales+CoSales;
    
    cout<<"The total sales tax is "<<salTax<<endl;
   
    
    
    
    return 0;
}

