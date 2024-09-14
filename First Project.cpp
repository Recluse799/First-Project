/*
      Immanuel Braxton
      9/13/2024
      Project 1. Distance per Tank of Gas
      Description: A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town, and 28.9
      miles per gallon when driven on the highway. Write a program that calculates and displays the
      distance the car can travel on one tank of gas when driven in town and when driven on the
      highway.
 */

//Distance = Number of Gallons x Average Miles per Gallon

#include <iostream>

#include <iomanip>

#include <string>

#include <fstream>


using namespace std;

int main()
{
    double GallonsInTank = 20;
    double Miles1 = 23.5;
    double Miles2 = 28.9;
    double Answer1;
    double Answer2;

    cout << "This programe will calculate how much a car with a 20 gallon tank of gas will consume,\non a 23.5 mile drive in a town and 28.9 mile drive on the high way.\n" <<endl;

    Answer1 = GallonsInTank * Miles1; // Town
    Answer2 = GallonsInTank * Miles2; // Highway

    cout << "It takes " << Answer1 << " miles for the car to travel in the town and " << Answer2 << " miles for the car to travel on the highway." << endl;

    return 0;
}

/* 
* Program will strate up just calculat the two variables
* Car has 20 gallon gas tank
* 23.5 gal in town
* 28.9 highway
*/