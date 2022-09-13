#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    cout << "INPUT PART" << endl
         << setfill('=') << setw(10) << "\n"
         << "Enter first price: ";

    float firstPrice{};
    cin >> firstPrice;
    while (firstPrice < 0)
    {
        cerr << "ERROR: First price must be at least 0 (zero) SEK" << endl;
        cout << "Enter first price: ";
        cin >> firstPrice;
    }

    float lastPrice{};
    cout << "Enter last price: ";
    cin >> lastPrice;
    while (firstPrice >= lastPrice)
    {
        cerr << "ERROR: Last price must be greater than first price" << endl;
        cout << "Enter last price: ";
        cin >> lastPrice;
    }

    float stride{};
    cout << "Enter stride: ";
    cin >> stride;
    while (stride < 00.01f)
    {
        cerr << "ERROR: Stride must be at least 0.01" << endl;
        cout << "Enter stride: ";
        cin >> stride;
    }

    float taxPercentage{};
    cout << "Enter tax percent: ";
    cin >> taxPercentage;
    while (taxPercentage <= 0 || taxPercentage >= 100)
    {
        cerr << "ERROR: Tax percent must be between 0.01 and 99.9 percent" << endl;
        cout << "Enter tax percent: ";
        cin >> taxPercentage;
    }

    cout << "\nTAX TABLE\n"
         << setfill('=') << setw(10) << "\n"
         << endl
         << setfill(' ') << setw(12) << "Price" << setw(13)
         << "Tax" << setw(18) << "Price with tax" << endl
         << setfill('-') << setw(44) << "\n"
         << endl;

    float loopsteps{};
    loopsteps = (lastPrice - firstPrice) / stride;
    float taxAmount{};
    float priceWTax{};
    float price{};
    for (int i = 0; i <= loopsteps; i++)
    {
        price = firstPrice + stride * i;
        cout << setfill(' ') << setw(11) << setprecision(2) << fixed << price;
        taxAmount = (price * taxPercentage) / 100;
        cout << setw(14) << fixed << taxAmount;
        priceWTax = price + taxAmount;
        cout << setw(18) << priceWTax << endl;
    }

    return 0;
}
