#include <iostream>
using namespace std;

int main()
{
    int days;
    cout << "Enter the number of days" << endl;
    cin >> days;
    int weeks = days / 7;
    days%=7;
    
    cout << "It is " << weeks << " week(s) and " << days << " day(s)";

    return 0;
}
