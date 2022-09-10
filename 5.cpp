#include <iostream>
using namespace std;

int main()
{
    double sum;
    cout << "Enter the sum on your account (in Euros)" << endl;
    cin >> sum;
    double rate;
    cout << "Enter your yearly interest rate (in %)" << endl;
    cin >> rate;
    double interest = sum * rate / 1200;
    cout << "The monthly interest payment for the sum of " << sum << " Euros with a " << rate << "% rate is " << interest << " Euros" << endl;

    return 0;
}
