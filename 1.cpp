#include <iostream>
using namespace std;

int main()
{
    int t;
    cout << "Enter time in seconds" << endl;
    cin >> t;
    int hours = t/3600;
    int minutes = t % 3600 / 60;
    int seconds = t % 60;
    cout << "Your time is " << hours << " hour(s), " << minutes << " minute(s) and " << seconds << " second(s).";

    return 0;
}
