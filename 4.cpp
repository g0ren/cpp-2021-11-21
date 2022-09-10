#include <iostream>
using namespace std;

int main()
{
    cout << "Calculating running speed." << endl;
    int distance;
    cout << "Enter the length of distance(meters) = ";
    cin >> distance;
    double t;
    cout << "Enter time(min.sec) = ";
    cin >> t;
    int minutes = (int) t;
    int seconds = (t-minutes)* 100 + minutes*60;
    cout << "Distance: " << distance << " m" << endl;
    cout << "Time: " << minutes << " min " << (int)((t-minutes) * 100) <<  " sec = " << seconds << " seconds" << endl;
    double speed = (double)distance / (double)seconds * 3.6;
    cout << "You were running at speed " << speed << " km/h" << endl;

    return 0;
}
