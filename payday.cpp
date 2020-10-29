/*
 *  This is a program to tell me how much I can spend per day in a month from my current checking account balance. 
 *  I'm thinking I can borrow a function that returns the number of days left in a month as an integer in C++. Or just make my own function. 
 */

// HEADERS:
#include<iostream>
#include<ctime> 

// FUNCTION DEFINITIONS:
int payday(int day, int month, int year){
    return 31-day; 
}
// STRUCT DEFINITIONS

// MAIN:
int main(){
    
    
    
    std::time_t time = std::time(nullptr);
    auto today = std::localtime(&time);

    int month = today->tm_mon + 1;
    int day = today->tm_mday;
    int year = today->tm_year + 1900;
    std::cout << "Today's date: " << month << "/" << day << "/" << year << "\n";
    
    float checking = 0.0;
    
    std::cout << "$ Amount in Checking?: "; 
    std::cin >> checking;
    std::cout << "\n";

    std::cout << "You may spend $" << (checking/payday(day, month, year)) << " per day." << "\n";
    std::cout << "Payday in " << payday << " days." << "\n";
    return 0;
}