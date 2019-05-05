#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

const double Z = 2.5;

int main ()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    int x;
    int y;
    cout << "Enter value of x: ";
    cin >> x;

    switch (x)
    {
    case 1:
    cout << "Enter value of y: ";
    cin >> y;
    {
    if (y > 1 && y < 5)
    {
    cout.width(10);
    cout << "V = " << (y * 1) * Z << endl;
    }
    else if (y >= 5)
    {
    cout.width(10);
    cout << "V = " << (y / Z) + 1 << endl;
    }
    else
    {
    cout << "Invalid. ";
    }
    }
    break;
    case 2:
    cout << "Enter value of y: ";
    cin >> y;
    {
    if (y > 0 && y <= 2)
    {
    cout.width(10);
    cout << "V = " << (2 - y) / Z << endl;
    }
    else if (y > 2 && y <= 5)
    {
    cout.width(10);
    cout << "V = " << -((2 - y) / Z) << endl;
    }
    else if (y > 5)
    {
    cout.width(10);
    cout << "V = " << 2 - sqrt(y + Z) << endl;
    }
    else
    {
    cout << "Invalid. ";
    }
    }
    break;
    default:
    if (x > 2)
    {
    cout << "Enter value of y: ";
    cin >> y;
    {
    if (y > 0)
    {
    cout.width(10);
    cout << "V = " << x + y + Z << endl;
    }
    else
    {
    cout << "Invalid. ";
    }
    }
    }
    else
    {
    cout << "Invalid. ";
    }
    }
getch();
return 0;
}
