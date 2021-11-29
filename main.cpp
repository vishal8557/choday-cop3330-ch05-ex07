/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Vishal Choday
 */
#include "std_lib_facilities.h"


int main() 
{
    cout << "Enter the coefficients a, b, and c of the quadratic equation " << endl;
    double a = 0;
    double b = 0;
    double c = 0;
    cin >> a >> b >> c;
    double our_descriminant = 0;
    double the_first_root;
    double the_second_root;
     our_descriminant  = pow(b, 2) - 4 * a * c;
    if (our_descriminant<0) 
    {
        cout << "How do you know that your results are plausible? Can you check that they are correct? ";
    } 
    else 
    {
        the_first_root = (-b + sqrt(our_descriminant )) / 2 * a;
        the_second_root = (-b - sqrt(our_descriminant )) / 2 * a;
        
        cout << "x1: " << the_first_root << endl << "x2: " << the_second_root << endl;
    }
    return 0;
    }
