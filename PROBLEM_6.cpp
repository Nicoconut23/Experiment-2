#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int x;
    int sum;
    sum = 0;
    int input;
    cout << "Enter a number: ";
    cin >> input;

    do
    {
    if (input > 0)
    {
    {
    for (x=1;x<=input;x++)
    {
    sum = sum + x;
    }
    cout << "The sum of all whole numbers from 1 to " << input << " is " << sum << "." << endl;
    sum = 0;
    }
    cout << "Enter a number: ";
    cin >> input;
    }
    else if (input = 0)
    {
    cout << "Thank you! ";
    }
    }
    while (input != 0);
    cout << "Thank you! ";
getch ();
return 0;
}
