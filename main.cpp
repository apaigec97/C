//
//  main.cpp
//  Total Purchase C2.8
//  Calculate the total purchase of 5 items
//  Created by Alexis Sisk on 1/29/22.
//

#include <iostream>
using namespace std;

int main()
{
//list variables
double item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95;
    //add variables together and calculate totals
    double subTotal = item1+item2+item3+item4+item5;
    double tax = (subTotal*.07);
    double total = subTotal + tax;
    //list results
    cout << "Item 1 cost $" << item1 << endl ;
    cout <<  "Item 2 cost $" << item2 << endl ;
    cout <<  "Item 2 cost $" << item3 << endl ;
    cout <<  "Item 4 cost $" << item4 << endl ;
    cout <<  "Item 5 cost $" << item5 << endl ;
    cout << "Subtotal $" << subTotal <<endl;
    cout << "Sales Tax $" << tax << endl;
    cout << "The total is $" << total << endl;
    return 0;
    
}
