#include <iostream>
using namespace std;

int main()
{
    double sum;
    cout << "Enter a sum of money as a floating point number" << endl;
    cin >> sum;
    int dollars = (int) sum;
    double cents = (sum - dollars) * 100;
    
    cout << "Your sum is " << dollars << " dollar(s) and " << cents << " cent(s)";

    return 0;
}
