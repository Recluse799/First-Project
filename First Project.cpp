/*
      Immanuel Braxton
      9/17/2024
      Project 2. Interest Earned
      Description: "This program will show you your account savings,
      after intrest for a year ( Given theres no other deposits)."
      I ended up putting the program description in the description, because I couldn't think of anything better. :(

     
 */

#include <iostream>

#include <iomanip>

#include <cmath>

using namespace std;

int main()
{
    double principal;
    double intRate;
    double intcompound;
    double savings;
    double intrest;

    cout << "This program will show you your account savings, after intrest for a year ( Given theres no other deposits)." << endl;
    cout << "Please enter your Principal." << endl;
    cin >> principal;
    cout << "Please enter your intrest rate." << endl;
    cin >> intRate;
    cout << "Please enter your compound intrest." << endl;
    cin >> intcompound;

     
    double expomental  = (1 + ((intRate/100) / intcompound));
    double expomental2 = pow(expomental, intcompound);
    savings = principal * expomental2;
    intrest = savings - principal;
    
    cout << "Intrest Rate:" << setw(14) << setprecision(2) << fixed << intRate << "%\n";
    cout << "Times Compounded:" << setw(11) << intcompound << "\n";
    cout << "Principal:" << setw(13) << "$" << principal << "\n";
    cout << "Interest:" << setw(14) << "$" << intrest << "\n";
    cout << "Amount in Savings:" << setw(5) << "$" << savings << endl;

    return 0;

}