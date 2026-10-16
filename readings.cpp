#include <iostream>
using namespace std;

int main()
{
    double t1 = 0, t2 = 0, t3 = 0;      // start from zeros, never garbage
    cout << "Enter 3 temperature in C separated by spaces:" << endl;
    cin >> t1 >> t2 >> t3;

    double average = (t1 + t2 + t3) / 3.0;

    cout << "Readings: " << t1 << " " << t2 << " " << t3 << endl;
    cout << "Average: " << average << endl;
    return 0;
}