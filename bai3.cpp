#include <iostream>
#include "bai3.h" // bao gồm file header

using namespace std;

int main() {
    RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);
    /*
    cout << "Description: " << item1.getDescription() << endl;
    cout << "Units on hand: " << item1.getUnitsOnHand() << endl;
    cout << "Price: $" << item1.getPrice() << endl;

    cout << "Description: " << item2.getDescription() << endl;
    cout << "Units on hand: " << item2.getUnitsOnHand() << endl;
    cout << "Price: $" << item2.getPrice() << endl;

    cout << "Description: " << item3.getDescription() << endl;
    cout << "Units on hand: " << item3.getUnitsOnHand() << endl;
    cout << "Price: $" << item3.getPrice() << endl;
*/
        cout << "\tDescription\t\tUnits on hand\t\tPrice" << endl;
        
        cout <<"Item1#  "<< item1.getDescription() << "\t\t\t" << item1.getUnitsOnHand() << "\t\t\t"<< item1.getPrice() <<  endl;
       
        cout <<"Item2#  "<< item2.getDescription() << "\t\t" << item2.getUnitsOnHand() << "\t\t\t"<< item2.getPrice() <<  endl;
        
        cout <<"Item3#  "<< item3.getDescription() << "\t\t\t" << item3.getUnitsOnHand() << "\t\t\t"<< item3.getPrice() <<  endl;
    return 0;
}