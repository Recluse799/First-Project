/*
      Immanuel Braxton
      9/17/2024
      Project 1. Ingredient Adjuster
      Description:

      A cookie recipe calls for the following ingredients:

      • 1.5 cups of sugar
      • 1 cup of butter
      • 2.75 cups of flour

      The recipe produces 48 cookies with this amount of ingredients. Write a program that asks the user how
      many cookies he or she wants to make, then displays the number of cups of each ingredient needed for
      the specified number of cookies.
 */

#include <iostream>

#include <iomanip>

using namespace std;

int main()
{
    double cupOsugar = 1.5;
    double cupObutter = 1;
    double cupOflour = 2.75;
    double sugarAnsw;
    double butterAnsw;
    double flourAnsw;
    double userAnsw;

    cout << "How meny cookes do you want?" << endl;
    cin >> userAnsw;

    sugarAnsw = cupOsugar * userAnsw;
    butterAnsw = cupObutter * userAnsw;
    flourAnsw = cupOflour * userAnsw;

    cout << "You will need " << sugarAnsw << ;
}

/*
* 48 cooks max
* loop these over a max of 48 times
*
* variable for cups of sugar = 1.5
* variable for cups of butter = 1
* variable for cups of flour = 2.75
*
* each ingredent will be added to a total of it's self.
*
* then all the totaled amounts will be shown
*
*/