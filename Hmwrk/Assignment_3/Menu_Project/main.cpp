/* 
 * File:   main.cpp
 * Author: Michael Masli
 * Purpose:  To Illustrate the code for developing a menu
 * Problem 1 -> Determine which number is the smaller and which is the larger
 * Problem 2 -> Determining roman numeral value of an integer 1-10
 * Problem 3 -> Determining whether the date is magic
 * Problem 4 -> Determine which rectangle is bigger, smaller, or they are the same
 * Problem 5 -> Determine whether a person's wight is overweight, optimal, or underweight
 * Problem 6 -> Determine whether the object is too light or heavy
 * Problem 7 -> Enter the number of seconds, then convert to minute, hours, and days
 * Problem 8 -> Win the game if the number of coins you have is equal to 1 dollar
 * Problem 9 -> Determine whether the sum of 2 random numbers are correct
 * Problem 10 -> Finding the total cost of purchase
 * 
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //General Menu Format
    //Display the selection
    cout<<"Type 1 to solve problem 1"<<endl;
    cout<<"Type 2 to solve problem 2"<<endl;
    cout<<"Type 3 to solve problem 3"<<endl;
    cout<<"Type 4 to solve problem 4"<<endl;
    cout<<"Type 5 to solve problem 5"<<endl;
    cout<<"Type 6 to solve problem 6"<<endl;
    cout<<"Type 7 to solve problem 7"<<endl;
    cout<<"Type 8 to solve problem 8"<<endl;
    cout<<"Type 9 to solve problem 9"<<endl;
    cout<<"Type 0 to solve problem 10"<<endl;
    cout<<"Type anything else to quit with no solutions."<<endl;
    
    //Read the choice
    char choice;
    cin>>choice;
    //Solve a problem that has been chosen.
    switch(choice){
            case '1':{
                int x, y;

                //Input the numbers
                cout << "Enter your first number: " << endl;
                cin>>x;
                cout << "Enter your second number: " << endl;
                cin>>y;

                //Output the results
                if (x > y) {
                    cout << x << " is bigger than " << y << endl;
                }
                else {
                    cout << y << " is bigger than " << x << endl;
                }
            break;
        }
            case '2':{
                //Declare Variables
                int n;

                //Input the integer (<10)
                cout<<"Enter your integer number: "<<endl;
                cin>>n;

                //Display the roman numeral value

                if(n==1)
                    cout<<"I"<<endl;
                if (n==2) {
                    cout<<"II"<<endl;}
                if (n==3) {
                    cout<<"III"<<endl;}
                if (n==4) {
                    cout<<"IV"<<endl;}
                if (n==5) {
                    cout<<"V"<<endl;}
                if (n==6) {
                    cout<<"VI"<<endl;}
                if (n==7) {
                    cout<<"VII"<<endl;}
                if (n==8) {
                    cout<<"VIII"<<endl;}
                if (n==9) {
                    cout<<"IX"<<endl;}
                if (n==10) {
                    cout<<"X"<<endl;}
                if (n>10 || n<1) { cout<<"Not Valid"<<endl; // "||" means "or"
                }
            break;
            }
            case '3':{
                //Declare Variables
                int date, mnth, year;

                //Input the date, month, and two digit year
                cout<<"Enter the date (in digits): "<<endl;
                cin>>date;
                cout<<"Enter the month (in digits): "<<endl;
                cin>>mnth;
                cout<<"Enter the year (two digits): "<<endl;
                cin>>year;

                //To determine whether the date is magic (use if else)
                if(mnth*date==year) {
                cout<<"The date is MAGIC"<<endl;}     

                else{ 
                    cout<<"The date is not MAGIC"<<endl;}
            break;
            }
            case '4':{
                //Declare Variables
                int m,n,areaA,l,w,areaB;

                //Input the length and widths of 2 rectangles
                cout<<"Enter the the length of Rectangle A: "<<endl;
                cin>>m;
                cout<<"Enter the the width of Rectangle A: "<<endl;
                cin>>n;
                cout<<"Enter the the length of Rectangle B: "<<endl;
                cin>>l;
                cout<<"Enter the the width of Rectangle B: "<<endl;
                cin>>w;

                //Calculate the areas of the rectangles
                areaA=m*n;
                areaB=l*w;

                //Determine the larger rectangles of if they are the same
                if(areaA==areaB) {
                    cout<<"They are the same rectangles with respect to size"<<endl;}
                else if(areaA>areaB) {
                    cout<<"Rectangle A is greater than Rectangle B"<<endl;}
                else{
                    cout<<"Rectangle B is greater than Rectangle A"<<endl;}
            break;
        }
            case '5':{
                //Declare Variables
                float w, h;
                float BMI;

                //Input the person's weight and height
                cout<<"What is your weight? (pnds)"<<endl;
                cin>>w;
                cout<<"What is your height? (inch)"<<endl;
                cin>>h;

                //Calculate BMI
                BMI = (w*70.3)/(h*h);

                //Determine if he/she is overweight, underweight, or optimal

                if(BMI<18.5) {
                    cout<<"The person is considered to be underweight"<<endl;
                }
                else if(BMI>25.0) {
                    cout<<"The person is considered to be overweight"<<endl;
                }
                else{
                    cout<<"The person's weight is optimal "<<endl; //How to do this? hmm....
                }

                //Output the results
                cout<<"The person's BMI is "<<setprecision(2) << fixed << BMI << " (pnds/inch)"<<endl;
               
            break; 
        }
            case '6':{
                //Declare Variables
                float m, W;
                cout<<fixed<<showpoint<<setprecision(2);
                //Input the object's mass
                cout<<"What is the mass of object? (kg)"<<endl;
                cin>>m;

                //Calculate the weight (Newtons)
                W=m*9.8;

                //Determine if the object is too light or too heavy
                if (W>1000) {
                    cout<<"Object is too heavy"<<endl;
                }
                else if (W<10) {
                    cout<<"Object is too light"<<endl;
                }

                //Output the results
                cout << "The object weighs "<<W<< " (Newtons)"<<endl;

            break; 
        }
            case '7':{
                //Declare variables
                float sec, m, h;
                int d; //Days can't be in decimals
                cout<<fixed<<showpoint<<setprecision(2);
                //Input the number of seconds
                cout<<"Enter the number of seconds: "<<endl;
                cin>>sec;

                //Convert to minute, hours, and days
                m=sec/60; //in Minute
                h=sec/3600; //in hours
                d=sec/86400; //in days

                //Display in screen
                if (sec>=86400) {
                    cout<<"The number of days = "<<d<<" day(s)"<<endl;
                }
                else if (sec>=36000) {
                    cout<<"The number of hours = "<<h<<" hr(s)"<<endl;
                }
                else if (sec>=60) {
                    cout<<"The number of minutes = "<<m<<" minute(s)"<<endl;
                }
                
            break; 
        }
            case '8':{
                //Declare Variables
                int p, n, d, q;
                float total;

                cout<<fixed<<showpoint<<setprecision(2); 

                //Input the coins
                cout<<"Input the number of pennies: "<<endl;
                cin>>p;
                cout<<"Input the number of nickels: "<<endl;
                cin>>n;
                cout<<"Input the number of dimes: "<<endl;
                cin>>d;
                cout<<"Input the number of quarters: "<<endl;
                cin>>q;

                //Calculate the total
                total=p*0.01 + n*0.05 + d*0.1 + 0.25*q;


                //Output the results
                cout<<"The total is "<<total<<" (dollar)"<<endl;

                //Conditions
                if (total==1) {
                    cout<<"Congratulations, you won the game!!!"<<endl;
                }
                else if (total<1) {
                    cout<<"It is less than 1 dollar"<<endl;
                 }
                else
                    cout<<"it is more than 1 dollar"<<endl;
            break; 

        }
            case '9':{
                //Declare Variables
                int a, b;
                int total;
                srand(time(0)); //set time seed
                a=rand()%500+1; //500 means range (0-499)  +1 means 0+1 - 499+1
                b=rand()%500+1; //500 means range (0-499)  +1 means 0+1 - 499+1

                //Calculate the total
                cout<<a<<" + "<<b<<" = "<<total<<endl;

                //Conditions
                if (total==a+b) {
                    cout<<"Congratulations!!!"<<endl;
                }
                else {
                    cout<<"The sum is incorrect"<<endl;
                    cout<<"The correct answer should be "<<a+b<<endl;
                }
                
            break; 

        }
            case '0':{
                //Declare Variables
                int unit; 
                float total;
                float const RET=99;
                float discount=0.0;

                //Input
                cout<<"Input the number of units: "<<endl;
                cin>>unit;

                //Conditions
                if (unit<=0) {
                    cout<<"Not Valid"<<endl;
                }
                else if (unit>=100)
                    discount=0.5;
                else if (unit>=50)
                    discount=0.4;

                else if(unit>=20){
                    discount=0.3;
                } 
                else if(unit>=10){
                    discount=0.2;
                }

                //The discount
                cout<<"The discount is "<<discount<<endl;

                //Calculate the total
                total=static_cast<float>(unit)*RET*(1-discount); //convert the "unit" variable to float

                //Output the Results
                cout<<"The total cost of the purchase is "<<total<<" (dollars)" << endl;

            break; 
        }
            default:{
                    cout<<"Exit?"<<endl;
            }
    }; //Final bracket to close
    return 0;
}