/* 
 * File:   main.cpp
 * Author: Michael Masli
 *
 * Created on May 25, 2015, 14:32 AM
 * Purpose: Hangman Game
 */
//User Libraries

//System Libraries
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <fstream>
using namespace std;

//Global Constants
const int COL=26; //size of 2d array (alphabet characters = 26 letters)
//Function Prototypes
bool letFill (char, string, string&, int, char[][COL]); //Letter Fill function
void getWord (string [], string &, string &); //'&' call by referrence
float percent (int, int); // guessing accuracy percentage in decimal
void display(int); //display hangman
bool valid(char, string);   //input validation
//Display input array and 2d record array
void showAry(int [], char [], char[][COL], int total_try, int unknown_length);
void sortAry(int [], char [], char[][COL], int, int);
//Execution Begins Here
int main (int argc, char** argv){
    //Declare Variables
    const int MaxTRY=8; //number of maximum tries
    char letter; // input the letter to guess the word 
    int nWrng=0; //num. of wrong guesses
    string word;
    const int SIZE=10; //size of array
    char inputAr[COL]; //1D array (new))
    char record[COL][COL]; //record of unknown and try 2D (new)
    int tryArr[COL]; //new
    int ttlTry=1; //initialize number of try (new)
    cout<<setprecision(2)<<fixed<<showpoint; //decimal format
    //New Loop (for the "unknown" unrevealed word)
    for(int i=0;i<COL;i++){
        for(int j=0;j<26;j++){
            record[i][j]='_'; //2D array print out unrevealed unknown word
        }
    }
    //set the random time seed
    srand(time(0));
    string words[SIZE] = {
        "china",
        "germany", //7
        "england", //
        "netherlands", //9
        "philippines",
        "australia",
        "turkey",
        "greece",
        "uganda",
        "indonesia"
    }; 
    
    string sports[SIZE] = {
        "football",
        "swimming",
        "soccer",
        "basketball",
        "cricket",
        "baseball",
        "running",
        "tennis",
        "badminton",
        "racing"
    };
    
    string music[SIZE] = {
        "rock",
        "hiphop",
        "pop",
        "folk",
        "classical",
        "jazz",
        "alternative",
        "blues",
        "punk",
        "country"
    };

	string unknown; //for the unknown word
        //Input file
        fstream input;
        input.open("test.txt", ios::in);
        string temp;
        while(getline(input, temp))cout<<temp<<endl;
        input.close();
	//Prompt the User
//	cout<<"Hello there! Welcome to HANGMAN...Guess the correct word."<<endl; //Modify this, to "select a category
//	cout<<"Each letter is represented by the character '-' "<<endl;
//	cout<<"You get to type a letter in each try."<<endl;
//	cout<<"You have 8 tries to guess the correct word in the selected category."<<endl;
	
    //Menu format
    int choice;
        //Repeat the menu
    do{    
        nWrng=0;
        //General Menu Format
        //Display the selection
        cout<<"\nType 1 to guess a country name."<<endl;
        cout<<"Type 2 to guess a name of sport."<<endl;
        cout<<"Type 3 to guess a music genre."<<endl;
        cout<<"Type anything else to quit playing this game."<<endl;
        //Read the choice
        cin>>choice;
        cin.ignore();
        //Solve a problem that has been chosen.
        switch(choice){
                case 1:{
                    getWord(words, word, unknown);
                    //Loop until the guesses are used up
                    do{
                        //cout<<"\ntotal try = "<<ttlTry<<endl;
                        //Input Validation
                        do{
                            cout<<"\n"<< unknown;
                            cout<<"\nGuess a Country Name!\nTry typing a letter EACH TIME to guess the word (all LOWERCASE): ";
                            cin>>letter;
                            cin.ignore();
                            if(valid(letter, unknown)==false)cout<<"Letter '"<<letter<<"' was input before, try again!\n";
                        }while(valid(letter, unknown)==false);
                        inputAr[ttlTry-1]=letter;
                        //Conditions
                        if (letFill(inputAr[ttlTry-1], word, unknown, ttlTry, record)==false){
                                cout<<endl<< "Whoops! The letter is not in the word!"<<endl;
                                nWrng++;
                                display(nWrng);
                        }
                        else{
                                cout<<endl<< "Yes! You found a letter, keep going!" <<endl;
                        }
                        ttlTry++; //increment ttl try (new)
                        //cout<<unknown<<endl;
                        //Inform the user for how many guess the user has
                        cout<<"Number of guess(s) left = "<< MaxTRY - nWrng;

                        // Check if user guessed the word.

                    }while(nWrng<MaxTRY && word!=unknown);
                    if (word==unknown){
                            cout <<"\nThe word is "<<word<<endl;
                            cout << "Congratulations! You got it!"<<endl;
                        }
                    else{
                            cout << "\nSorry, you lose...you've been hanged :(" << endl;
                            cout << "The correct word was : " << word << endl;
                    }
                    //cout<<nWrng<<" "<<MaxTRY<<endl;
                    cout<<"Your guessing accuracy in decimal point is "<<percent(nWrng, MaxTRY)<<endl;
                    
                    for(int i=0;i<ttlTry-1;i++){ //new loop
                        tryArr[i]=i+1;
                    }
                    //Show the Array (new)
                    cout<<"Table of input: "<<endl;
                    showAry(tryArr, inputAr, record, ttlTry, unknown.length());
                    //Sort the Array
                    sortAry(tryArr, inputAr, record, ttlTry, unknown.length());
                    cout<<"After Sorting:\n";
                    showAry(tryArr, inputAr, record, ttlTry, unknown.length()); //Show the array after sorting
                    
                    break;
                }       
               
                case 2:{
                    getWord(sports, word, unknown);
                   
                     //Loop until the guesses are used up
                    do{
                        //Input Validation
                        do{
                            cout<<"\n"<< unknown;
                            cout<<"\nGuess a Name of Sport\nTry typing a letter EACH TIME to guess the word (all LOWERCASE): ";
                            cin>>letter;
                            cin.ignore();
                            if(valid(letter, unknown)==false)cout<<"Letter '"<<letter<<"' was input before, try again!\n";
                        }while(valid(letter, unknown)==false);
                        inputAr[ttlTry-1]=letter;
                        //Conditions
                    if (letFill(inputAr[ttlTry-1], word, unknown, ttlTry, record)==false){
                            cout<<endl<< "Whoops! The letter is not in the word!"<<endl;
                            nWrng++;
                            display(nWrng);
                    }
                    else{
                            cout<<endl<< "Yes! You found a letter, keep going!" <<endl;
                    }
                    ttlTry++;    
                    //cout<<unknown<<endl;
                    //Inform the user for how many guess the user has
                    cout<<"Number of guess(s) left = "<< MaxTRY - nWrng;

                    // Check if user guessed the word.
                    
                    }while(nWrng<MaxTRY && word!=unknown);
                    if (word==unknown){
                            cout <<"\nThe word is "<<word<<endl;
                            cout << "Congratulations! You got it!"<<endl;
                        }
                    else{
                            cout << "\nSorry, you lose...you've been hanged :(" << endl;
                            cout << "The correct word was : " << word << endl;
                    }
                    
                    //cout<<nWrng<<" "<<MaxTRY<<endl;
                    cout<<"Your guessing accuracy in decimal point is "<<percent(nWrng, MaxTRY)<<endl;
                    
                    for(int i=0;i<ttlTry-1;i++){
                        tryArr[i]=i+1;
                    }
                    //Show the Array
                    cout<<"Table of input: "<<endl;
                    showAry(tryArr, inputAr, record, ttlTry, unknown.length());
                    //Sort the Array
                    sortAry(tryArr, inputAr, record, ttlTry, unknown.length());
                    cout<<"After Sorting:\n";
                    showAry(tryArr, inputAr, record, ttlTry, unknown.length()); //Show the array after sorting
                    break;
                }
                case 3:{
                    
                    getWord(music, word, unknown); //getWord--> randomly pick word from music array
                   
                    //Loop until the guesses are used up
                    do{
                        //Input Validation
                        do{
                            cout<<"\n"<< unknown;
                            cout<<"\nGuess a name of Music Genre!\nTry typing a letter EACH TIME to guess the word (all LOWERCASE): ";
                            cin>>letter;
                            cin.ignore();
                            if(valid(letter, unknown)==false)cout<<"Letter '"<<letter<<"' was input before, try again!\n";
                        }while(valid(letter, unknown)==false);
                    //Conditions
                        inputAr[ttlTry-1]=letter;
                    if (letFill(inputAr[ttlTry-1], word, unknown, ttlTry, record)==false){
                            cout<<endl<< "Whoops! The letter is not in the word!"<<endl;
                            nWrng++;
                            display(nWrng);
                    }
                    else{
                            cout<<endl<< "Yes! You found a letter, keep going!" <<endl;
                    }
                    ttlTry++; //increment ttl try
                    //cout<<unknown<<endl;
                    //Inform the user for how many guess the user has
                    cout<<"Number of guess(s) left = "<< MaxTRY - nWrng;

                    // Check if user guessed the word.
                    
                    }while(nWrng<MaxTRY && word!=unknown);
                    if (word==unknown){
                            cout <<"\nThe word is "<<word<<endl;
                            cout << "Congratulations! You got it!"<<endl;
                        }
                    else{
                            cout << "\nSorry, you lose...you've been hanged :(" << endl;
                            cout << "The correct word was : " << word << endl;
                    }
                    //cout<<nWrng<<" "<<MaxTRY<<endl;
                    cout<<"Your guessing accuracy in decimal point is "<<percent(nWrng, MaxTRY)<<endl;
                    for(int i=0;i<ttlTry-1;i++){
                        tryArr[i]=i+1;
                    }
                    //Show the Array
                    cout<<"Table of input: "<<endl;
                    showAry(tryArr, inputAr, record, ttlTry, unknown.length());
                    //Sort the Array
                    sortAry(tryArr, inputAr, record, ttlTry, unknown.length());
                    cout<<"After Sorting:\n";
                    showAry(tryArr, inputAr, record, ttlTry, unknown.length()); //Show the array after sorting
                    break;
                }
                default:{
                        cout<<"Exit?"<<endl;
                }
        }  
    } while(choice>=1 && choice<=3);
    //Exit Stage Right
    return 0;
}
//The function of changing unknown
bool letFill (char guess, string word, string &unknown, int ttlTry, char record[][COL]){
  cout<<"guess = "<<guess<<endl;
    bool match=false;
    for (int i = 0; i< word.length(); i++){ //word.length = how many characters are in side
            if (guess == word[i]){      //parallel array same index for word and unknown
                    unknown[i] = guess;
                    match=true;
            }
    }
    //add unknown to record
    for(int j=0;j<unknown.length();j++){
        record[ttlTry-1][j]=unknown[j]; //num of input variable is what? change it
    }
    return match;
}
void getWord(string arr[], string &word, string &unknown){
    //choose and copy a word from array of words randomly
    word=arr[rand()%10];
    fstream output;
    output.open("word.txt", ios::out);
    output<<word;
    output.close();
    unknown="";
    //Initialize the unkn word with the "-" character.
    for(int i=0;i<word.length();i++){
        unknown+="-";
    }
    //cout<<word;
}
//Function that displays hangman
void display(int count){
    if(count==1){
        cout<<"______________________________\n";
        cout<<"|                             |\n";
        cout<<"|                             |\n";
        cout<<"|                             |\n";
        cout<<"|                             |\n";
        cout<<"|_____________________________|\n";
    }
    else if(count==2){
        cout<<"______________________________\n";
        cout<<"|               |             |\n";
        cout<<"|                             |\n";
        cout<<"|                             |\n";
        cout<<"|                             |\n";
        cout<<"|_____________________________|\n";
    }
    else if(count==3){
        cout<<"______________________________\n";
        cout<<"|               |             |\n";
        cout<<"|               O             |\n";
        cout<<"|                             |\n";
        cout<<"|                             |\n";
        cout<<"|_____________________________|\n";
    }
    else if(count==4){
        cout<<"______________________________\n";
        cout<<"|               |             |\n";
        cout<<"|               O             |\n";
        cout<<"|               |             |\n";
        cout<<"|                             |\n";
        cout<<"|_____________________________|\n";
    }
    else if(count==5){
        cout<<"______________________________\n";
        cout<<"|               |             |\n";
        cout<<"|               O             |\n";
        cout<<"|              /|             |\n";
        cout<<"|                             |\n";
        cout<<"|_____________________________|\n";
    }
    else if(count==6){
        cout<<"______________________________\n";
        cout<<"|               |             |\n";
        cout<<"|               O             |\n";
        cout<<"|              /|\\            |\n";
        cout<<"|                             |\n";
        cout<<"|_____________________________|\n";
    }
    else if(count==7){
        cout<<"______________________________\n";
        cout<<"|               |             |\n";
        cout<<"|               O             |\n";
        cout<<"|              /|\\            |\n";
        cout<<"|              /              |\n";
        cout<<"|_____________________________|\n";
    }
    else if(count==8){
        cout<<"______________________________\n";
        cout<<"|               |             |\n";
        cout<<"|               O             |\n";
        cout<<"|              /|\\            |\n";
        cout<<"|              / \\            |\n";
        cout<<"|_____________________________|\n";
        cout<<"YOU JUST LOST!\n";
    }
}

float percent (int atmpt, int max){
    return static_cast<float>((max-atmpt))/max;
}

bool valid(char input, string unknown){
    for(int i=0;i<unknown.length();i++){
        if(input==unknown[i]) return false;
    }
    return true;
}
void showAry(int tryArr[], char inputAr[], char record[][COL], int ttl_try, int length){
    cout<<"| Attempt |    Phrase   | Input|\n";
    for(int i=0;i<ttl_try-1;i++){
        cout<<"|   "<<setw(2)<<tryArr[i]<<"    |";
        string output=""; //starts as a blank string
        for(int j=0;j<length;j++){
            output+=record[i][j];   
        }
        cout<<setw(13)<<output;
        cout<<"|  "<<inputAr[i]<<"   |\n";
        cout<<"|_________|_____________|______|\n";
    }
}
void sortAry(int tryArr[], char inputAr[], char record[][COL], int ttlTry, int length){
    bool swap;
    char temp;
    int itemp;
    do{
        swap=false;
        for(int i=0;i<ttlTry-2;i++){
            if(inputAr[i]>inputAr[i+1]){
                swap=true;
                itemp=tryArr[i];
                tryArr[i]=tryArr[i+1];
                tryArr[i+1]=itemp;
                temp=inputAr[i];
                inputAr[i]=inputAr[i+1];
                inputAr[i+1]=temp;
                
                for(int j=0;j<length;j++){
                    temp = record[i][j];
                    record[i][j]= record[i+1][j];
                    record[i+1][j] = temp;
                }
            }
        }
    }while(swap);
}