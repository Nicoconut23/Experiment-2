#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int counting;
    cout << "Counting... " << endl;
    for (counting=1;counting<=10;counting++)
    {
        cout << counting << ",";
    }
    for (counting=10;counting<=30;counting++)
    {
        if (counting == 10)
        cout << counting + 2 << ",";
        else if (counting == 12)
        cout << counting + 2 << ",";
        else if (counting == 14)
        cout << counting + 2 << ",";
        else if (counting == 16)
        cout << counting + 2 << ",";
        else if (counting == 18)
        cout << counting + 2 << ",";
        else if (counting == 20)
        cout << counting + 2 << ",";
        else if (counting == 22)
        cout << counting + 2 << ",";
        else if (counting == 24)
        cout << counting + 2 << ",";
        else if (counting == 26)
        cout << counting + 2 << ",";
        else if (counting == 28)
        cout << counting + 2 << " ";
    }
getch ();
return 0;
}
