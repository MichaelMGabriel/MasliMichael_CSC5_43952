/* 
 * File:   main.cpp
 * Author: Michael Masli
 *
 * Created on February 25, 2015, 5:34 PM
 */

#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float payChk, hrsWrkd;
    float payAmount;
   
    
   
   //My Pay Check 
    cout<<"Input the payChk amount $xx.xx "<<endl;
    cin>>payChk;
    
   //My Hours
    cout<<"Input the hrsWrkd "<<endl;
    cin>>hrsWrkd;
    
    // Calculation
    payAmount = hrsWrkd*payChk;
    cout<<"$"<<payAmount <<"=" <<hrsWrkd <<"*"<<payChk<<  " is the total"<<endl;

    return 0;
}

