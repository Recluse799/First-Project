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


using namespace std;

int main()
{
    double consumers  = 16500;
    double drinkPweek = 0.15;
    double critrusLvr = 0.58;
    double Anw1;
    double Anw2;

    cout << "A soft drink company recently surveyed 16,500 of its consumers.\n15% of them would purchase one or more energy drinks per week." << endl;
    Anw1 = consumers  * drinkPweek;
    cout << "The number of people with that precentage was " << Anw1 << " customers.\n" << endl;
    cout << "The company would also see a surge of 58% of it's drinking consumers purchasing the citrus flavored drinks." << endl;
    Anw2 = Anw1 * critrusLvr;
    cout << "The total number of customers purchasing citrus flavor would be " << Anw2 << "." << endl;

    return 0;
}

/*
*Make my variables
* say stuff
* calculate
* say more stuff
* calculate again
* say one last thing
* end
* 16,000 drink / 0.15 perch / 7 week /  0.58 citrus lovers.
*/