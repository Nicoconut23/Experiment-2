#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int x;
    x = 0;
    int y;
    y = 1;
    int z;
    cout << "Fibonacci numbers: " << endl;

    while (x <= 10946)
    {
        if (x < 10946)
        cout << x << ",";
        z = x + y;
        x = y;
        y = z;
        if (x == 10946)
        cout << x << "";
    }
getch ();
return 0;
}
