#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
    int balance;
    int gallons;
    cout << "Number/s should ONLY be stated. " << endl;
    cout << endl;
    cout << "How much is your unpaid balance? ";
    cin >> balance;
    cout << "How many gallons have you consumed? ";
    cin >> gallons;
    if (balance > 0)
    cout << "Your Total Water Bill: " << (gallons * 1.10) + 55 << " Pesos. ";
    else if (balance == 0)
    cout << "Your Total Water Bill: " << (gallons * 1.10) + 35 << " Pesos. ";
getch ();
return 0;
}
