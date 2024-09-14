/*
      Immanuel Braxton
      9/13/2024
      Project 2. Energy Drink Consumption
      Description: A soft drink company recently surveyed 16,500 of its customers and found that approximately
      15 percent of those surveyed purchase one or more energy drinks per week. Of those
      customers who purchase energy drinks, approximately 58 percent of them prefer citrus-flavored
      energy drinks. Write a program that displays the following:
      
      • The approximate number of customers in the survey purchasing one or more energy drinks per week.
      
      • The approximate number of customers in the survey preferring citrus-flavored energy drinks.
 */


#include <iostream>

#include <iomanip>

#include <string>

#include <fstream>


using namespace std;

int main()
{
    double drinks = 16000;
    double drinkPweek = 0.15;
    double critrusLvr = 0.58;
    double Anw1;
    double Anw2;

    cout << "A soft drink company recently surveyed 16,500 of its consumers.\n15% of them would purchase one or more energy drinks per week." << endl;
    Anw1 = drinks * drinkPweek;
    cout << "The number of people in that procentage that who would purchase one or more drinks per week was " << Anw1 << " customers.\n" << endl;
    cout << "The company would also see a surge of 58% of it's consumers purchasing the citrus flavored drinks." << endl;
    Anw2 = drinks * critrusLvr;
    cout << "That would be " << Anw2 << " of there total costomers, purchasing the citrus flavor." << endl;

    return 0;
}

/*
*Make my variables
* say stuff
* calculate
* say more stuff
* calculate again
* end
* 16,000 drink / 0.15 perch / 7 week /  0.58 citrus lovers.
*/