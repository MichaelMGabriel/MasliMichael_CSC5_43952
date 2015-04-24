/* 
 * File:   main.cpp
 * Author: Michael Masli
 * Purpose:  To Illustrate the code for
 * developing a menu
 * Problem 1 -> Calculate the retail
 * Problem 3 -> Find the largest quarterly sales figure in a division
 * Problem 4 -> Find the lowest number of accidents in the area
 * Problem 5 -> Calculate the falling distance
 * Problem 6 -> Calculate the kinetic energy
 * Problem 7 -> Making a table of celcius and fahrenheit degrees
 * Problem 8 -> Coin toss. Heads or tails.
 * Problem 9 -> Calculate the present value
 * Problem 10 -> Calculate the average of a group of test scores
 * Problem 11 -> Get the judges data
 * Modified on Apr 20, 2015
 *      
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void problem1();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();
void problem11();
float calculateRetail (float , float); //Prob 1
//Prob 3
float getSales(string); //return type is "float"
void findHighest(float, float, float, float); //inside the "()" is the argument
//Prob 4
int getNumAccidents(string); //return type is "float"
void findLowest(int, int, int, int, int); //inside the "()" is the argument
//Prob 5
float fallingDistance(float);
//Prob 6
float kineticEnergy(float, float); 
//Prob 7
float celcius (float);
//Prob 8
int coinToss();
//Prob 9
float presentValue (float, float, int);
//Prob 10
void getscore(int &); //"&" is the refference symbol for parameter
int findlowest(int , int , int , int , int );
void calcAverage (float &avg, int a, int b, int c, int d, int e);
//Prob 11
void getJudgeData(int &); //"&" is the refference symbol for parameter
int findHighest(int, int, int, int, int);
void calcScore (float &, int , int , int , int , int );

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare menu variable choice
    char choice;
    //Repeat the menu
    do{
        //General Menu Format
        //Display the selection
        cout<<"Type 1 to solve problem 1"<<endl;
        cout<<"Type 2 to solve problem 3"<<endl;
        cout<<"Type 3 to solve problem 4"<<endl;
        cout<<"Type 4 to solve problem 5"<<endl;
        cout<<"Type 5 to solve problem 6"<<endl;
        cout<<"Type 6 to solve problem 7"<<endl;
        cout<<"Type 7 to solve problem 8"<<endl;
        cout<<"Type 8 to solve problem 9"<<endl;
        cout<<"Type 9 to solve problem 10"<<endl;
        cout<<"Type 0 to solve problem 11"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
            case '1':problem1();break;
            case '2':problem3();break;
            case '3':problem4();break;
            case '4':problem5();break;
            case '5':problem6();break;
            case '6':problem7();break;
            case '7':problem8();break;
            case '8':problem9();break;
            case '9':problem10();break;
            case '0':problem11();break;
            default :cout<<"Exit?"<<endl;
        };
    }while(choice>='0'&&choice<='9');
    //Exit Stage right
    return 0;
}

//*******************         Problem 1           ********************/
void problem1(){
    //Declare Variables
    float wSale;
    float mPercnt;
    float rPrice;
    
    // Do not accept negative values for either the wholesale cost of the
    // item or the markup percentage.
    
    do
    {
        //prompt the user forr input
        cout<<"The item's whole sale cost: ";
        cin>>wSale;
        if(wSale<0) cout<<"Invalid input. Try Again."<<endl;
    }while(wSale<0);
    
    do
    {
        //Prompt user
        cout<<"The markup percentage is: (%)";
        cin>>mPercnt;
        if(mPercnt<0) cout<<"Invalid Input. Try again."<<endl;
        
    }while (mPercnt<0);   
    
    //Calculate retail
    rPrice=calculateRetail(wSale, mPercnt); //call the function
    
    
    //Output the resluts
    cout<<"If an item s wholesale cost is"<< wSale << "and its markup percentage is "<< mPercnt<<"% then the item s retail price is $"<<rPrice<<endl;
   // return 0;
}
//****************************************************************************************************************************************************************+-
float calculateRetail (float wSale, float mPercnt){
    
    return wSale*(1+(mPercnt/100)); //return the function
}

//*******************         Problem 3           ********************/
void problem3(){
  //Declare Variables
    string a="Northeast";
    string b="Northwest";
    string c="Southeast";
    string d="Southwest";
    float nE, nW, sE, sW;
    
    //Return the function
    nE=getSales(a);
    nW=getSales(b);
    sE=getSales(c);
    sW=getSales(d);
   
    //Put it back here
    findHighest(nE, nW, sE, sW);
    //return 0;
}

float getSales(string a){
    //declare variables
    float nE;
    do
    {
        cout<<a<<endl;
        
        cout<<"Input quarterly sales figure: ";
        cin>>nE;
        if(nE<0) cout<<"Invalid input. Try again."<<endl;
    }while(nE<0);

    return nE;
}

void findHighest(float a, float b, float c, float d)
{
    
  //Determine the largest one
  float temp=0;
  if (a>b && a>c && a>d){
      cout<<"The largest sales figure division is North East"<<endl;
      cout<<"The largest sales figure = "<<a<<endl;
  }      
  else if (b>a && b>c && b>d){
      cout<<"The largest sales figure division is North West"<<endl;
      cout<<"The largest sales figure = "<<b<<endl;
  }      
  else if (c>b && c>a && c>d){
      cout<<"The largest sales figure division is South East"<<endl;
      cout<<"The largest sales figure = "<<c<<endl;
  }      
  else if (d>b && d>c && d>a){
      cout<<"The largest sales figure division is South West"<<endl;
      cout<<"The largest sales figure = "<<d<<endl;
  }      
  else {
      cout<<"ERROR\n";
  }
} 
void problem4(){
//*******************         Problem 4           ********************/
//Declare Variables
    string a="North";
    string b="South";
    string C="East";
    string d="West";
    string E="Central";
    int n, s, e, w, c;
    
    //Return the function
    n=getNumAccidents(a);
    s=getNumAccidents(b);
    e=getNumAccidents(C);
    w=getNumAccidents(d);
    c=getNumAccidents(E);
   
    //Put it back here
    findLowest(n, s, e, w, c);
}
//    return 0;


//*************************************************************************************************************************************
int getNumAccidents(string a){
    //declare var
    float n;
    do{
        cout<<a<<endl;
        
        cout<<"Input the number of accidents: ";
        cin>>n;
        if(n<0) cout<<"Invalid input. Try again."<<endl;
    }while(n<0);

    return n;
}

void findLowest(int a, int b, int c, int d, int e){
    
  //Determine the largest one
  float temp=0;
  if (a<b && a<c && a<d && a<e){
      cout<<"The smallest number of accidents is in North region"<<endl;
      cout<<"Number of accidents = "<<a<<endl;
  }      
  else if (b<a && b<c && b<d && b<e){
      cout<<"The smallest number of accidents is in South region"<<endl;
      cout<<"Number of accidents = "<<b<<endl;
  }      
  else if (c<b && c<a && c<d && c<e){
      cout<<"The smallest number of accidents is in East region"<<endl;
      cout<<"Number of accidents = "<<c<<endl;
  }      
  else if (d<b && d<c && d<a && d<e){
      cout<<"The smallest number of accidents is in West region"<<endl;
      cout<<"Number of accidents = "<<d<<endl;
  }      
  else if (e<b && e<c && e<a && e<d){
      cout<<"The smallest number of accidents is in Central region"<<endl;
      cout<<"Number of accidents = "<<d<<endl;
  }      
  else {
      cout<<"ERROR\n";
  }
}
 //*******************         Problem 5           ********************/
//Declare Variables
void problem5(){
    float d, t;
    
    
    //Loop
    for(t=1; t<=10; t++)
    {
    //Calculate the distance
    d=fallingDistance(t);
    
    //Output the distance
    cout<<"The falling distance of "<<t<<" seconds is "<<d<<" meters"<<endl;
    }
}
//****************************************************************************************************************************************

float fallingDistance(float t){
    const float G=9.8;
    return 0.5*G*t*t;
}

//*******************         Problem 6           ********************/
void problem6(){
//Declare Variables
    float m, v;
    float KE;
    
    //Prompt the user for input
    cout<<"Enter the mass of the object (kg): ";
    cin>>m;
    cout<<"Enter the speed of the object (m/s): ";
    cin>>v;
    
    //Calculate the kinetic energy energy
    KE=kineticEnergy(m, v); //substitute function
    
    //Output the results
    cout<<"The kinetic energy of this object is "<<KE << "(Joules)"<<endl;
}

//****************************************************************************************************************************************

float kineticEnergy(float m, float v){
    return 0.5*m*v*v; //return the function back
}

//*******************         Problem 7           ********************/
void problem7(){
//Declare Variables
    float f, c;
       
    cout<<"Fahrenheit (degrees)    |      Celcius (degrees)"<<endl;
    cout<<"--------------------------------------------------------------"<<endl;
    
    //Loop
    for(f=0; f<=20; f++)
    {
        //Calculate the celcius from 0 to 20 degrees fahrenheit
        c=celcius(f); //call the function here
        //Output the table
        cout<<"     "<<f<<"                  |                "<<c<<endl;        
    } 
}

//------------------------------------------------------------------------------------------------------------------------------------
float celcius(float f)
{

    return (f-32)*5/9; //return the function
}
//*******************         Problem 8           ********************/
void problem8(){
//Declare Variables
    int nFlip;
    int head, tail;
    
    //Prompt the user for input
    cout<<"How many times do would you like to toss the coin? "<<endl;
    cin>>nFlip;
    
    //Flip the coin to simulate it using loop
    for(int flip=1; flip<=nFlip; flip++)
    {
        //Possibilities
        tail=coinToss(); //0 to 1, but then you add (+1) so it is actually "1 to 2"
        //Output the results
        if(tail==1) cout<<"This is head"<<endl;
        else cout<<"This is tail"<<endl;
        
    }    
}

//--------------------------------------------------------------------------------------------------------------------------------------
int coinToss()
{
    return rand()%2+1; //return the function
}

//*******************         Problem 9           ********************/
void problem9(){
//Declare Variables
    float F=10000, r;
    int n=10;
    float P;
    
    //Prompt the user for input
    cout<<"What is your annual interest rate? ";
    cin>>r;
    
    //Calculate Present Value
    P=presentValue(F, r, n); //call the function
    
    //Output the results
    cout<<"The present value is "<<P<<" dollars"<<endl;
}


float presentValue (float F, float r, int n)
{
    float a=(1+r);
    for(int i=1; i<n; i++)
    {
        //calculate P
        a*=(1+r);        
    }
    return F/a;
}

//*******************         Problem 10           ********************/
void problem10(){
//Declare Variables
    int a,b,c,d,e; //test scores
    float avg;
    
    //Call the function to input all tests scores
    getscore(a); 
    getscore(b);        
    getscore(c);
    getscore(d);
    getscore(e);
    //Output the rssults
    calcAverage(avg,a,b,c,d,e); //call the "void function" here
    cout<<"The average test score = "<<avg<<endl; //since it's changed, just put the "avg" variable here
}


void getscore(int &a)
{
    do{
        cout<<"score=";
        cin>>a;
        if(a<0 || a>100){
            //invlid message
            cout<<"Invalid input. try again."<<endl;
        }
    }while(a<0 || a>100);
}



int findlowest(int a, int b, int c, int d, int e)
{
    int low=100;
    if(low>a)low=a;
    if(low>b)low=b;
    if(low>c)low=c;
    if(low>d)low=d;
    if(low>e)low=e;        
    return low; //return the lowest score
}

void calcAverage (float &avg, int a, int b, int c, int d, int e)
{
    avg=(a+b+c+d+e-findlowest(a,b,c,d,e))/4; //drop the lowest score then calc average
}

//*******************         Problem 11           ********************/
void problem11(){
//Declare Variables
    int a,b,c,d,e; //scores by judge
    float avg;
    
    //Call the function to input all tests scores
    getJudgeData(a); 
    getJudgeData(b);        
    getJudgeData(c);
    getJudgeData(d);
    getJudgeData(e);
    //Output the rssults
    calcScore(avg,a,b,c,d,e); //call the "void function" here
    cout<<"The average score = "<<avg<<endl; //since it's changed, just put the "avg" variable here
}

void getJudgeData(int &a){
    do{
        cout<<"score=";
        cin>>a;
        if(a<0 || a>10){
            //invlid message
            cout<<"Invalid input. try again."<<endl;
        }
    }while(a<0 || a>10);
}


////Find lowest and highes scores
//int findlowest(int a, int b, int c, int d, int e){
//    int low=10;
//    if(low>a)low=a;
//    if(low>b)low=b;
//    if(low>c)low=c;
//    if(low>d)low=d;
//    if(low>e)low=e;        
//    return low; //return the lowest score
//}

int findhighest (int a, int b, int c, int d, int e){
    int high=0;
    if(high<a) high=a;
    if(high<b) high=b;
    if(high<c) high=c;
    if(high<d) high=d;
    if(high<e) high=e;
    return high; //return the highest score
}

void calcScore (float &avg, int a, int b, int c, int d, int e){
    avg=static_cast<float>((a+b+c+d+e-findlowest(a,b,c,d,e)-findhighest(a,b,c,d,e)))/3;
}
