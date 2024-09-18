/*
      Immanuel Braxton
      9/17/2024
      Project 2. Interest Earned
      Description:

     
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

    cout << "This program will show you your account savings, after intrest for a year ( Given theres no other deposits)." << endl;
    cout << "Please enter your Principal." << endl;
    cin >> principal;
    cout << "Please enter your intrest rate." << endl;
    cin >> intRate;
    cout << "Please enter your compound intrest." << endl;
    cin >> intcompound;

     
    double expomental  = (1 + (intRate / intcompound));
    double expomental2 = pow(expomental, intcompound);
    savings = principal * expomental2;
    
    cout << "Intrest Rate:" << setw(8) << setprecision(2) << fixed << intRate << "%\n";
    cout << "Times Compounded:" << setw(8) << intcompound;
    cout << "Principal:" << setw(8) << "$" << principal;
    cout << "Amount in Saveings:" << setw(8) << "$" << savings << endl;

    return 0;

}

/*
* make var for principal, rate and t (times).
* 
*
*/