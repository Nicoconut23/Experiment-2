#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
    char choice;
    cout << "What package did you purchase? ";
    cin >> choice;

    switch (choice)
    {
    case 'A':
        cout << "How many hours did you use it? ";
        {
        int hours;
        cin >> hours;
        if (hours > 0 && hours <= 10)
        cout << "Total amount due: 995 Pesos. ";
        else if (hours > 10)
        cout << "Total amount due: " << ((hours - 10) * 20) + 995 << " Pesos. ";
        else
        cout << "Invalid. ";
        }
        break;
    case 'B':
        cout << "How many hours did you use it? ";
        {
        int hours;
        cin >> hours;
        if (hours > 0 && hours <= 20)
        cout << "Total amount due: 1495 Pesos. ";
        else if (hours > 20)
        cout << "Total amount due: " << ((hours - 20) * 10) + 1495 << " Pesos. ";
        else
        cout << "Invalid. ";
        }
        break;
    case 'C':
        cout << "How many hours did you use it? ";
        {
        int hours;
        cin >> hours;
        if (hours > 0)
        cout << "Total amount due: 1995 Pesos. ";
        else
        cout << "Invalid. ";
        }
        break;
    default:
        cout << "Choices A, B, and C should only be stated. ";
        }
getch ();
return 0;
}
