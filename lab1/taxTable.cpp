#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main() {

    float firstPrice{};
    float lastPrice{};
    float stride{};
    float taxPercentage{};
    float taxAmount{};
    float priceWTax{};


    cout << "INPUT PART" << endl
        << setfill('=') << setw(10) << "\n"
        << "Enter first price: ";


    
    cin >> firstPrice;
    while(firstPrice < 0) {
        cerr << "ERROR: First price must be at least 0 (zero) SEK" << endl;
        cout << "Enter first price: ";
        cin >> firstPrice;
    }

    cout << "Enter last price: ";
    cin >> lastPrice;
    while(firstPrice >= lastPrice) {
        cerr << "ERROR: Last price must be greater than first price" << endl;
        cout << "Enter last price: ";
        cin >> lastPrice;
    }

    cout << "Enter stride: ";
    cin >> stride;
    while(stride < 00.01) {
        cerr << "ERROR: Stride must be at least 0.01" << endl;
        cout << "Enter stride: ";
        cin >> stride;
    }

    cout << "Enter tax percent: ";
    cin >> taxPercentage;
    while(taxPercentage <= 0 || taxPercentage >= 100) {
        cerr << "ERROR: Tax percent must be between 0.01 and 99.9 percent" << endl;
        cout << "Enter tax percent: ";
        cin >> taxPercentage;
    }


    cout << "\nTAX TABLE\n" << setfill ('=') << setw (10) << "\n" <<
        endl << setfill(' ') << setw(12) << "Price" << setw(13)
        << "Tax" << setw(18) << "Price with tax" << endl
        << setfill('-') << setw(44) << "\n" << endl;

    while(firstPrice <= lastPrice) {
        cout << setfill(' ') << setw(11) << setprecision(2) << fixed << firstPrice;
        taxAmount = (firstPrice * taxPercentage)/100;
        cout << setw(14) << fixed << taxAmount;
        priceWTax = firstPrice + taxAmount;
        cout << setw(18) << priceWTax << endl;
        firstPrice = firstPrice + stride; 

    }

    return 0;
}
