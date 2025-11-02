#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputfile ("input.txt");

    if (!inputfile)
    {
        cout << "cannot open input.txt!" << endl;
        return 1;
    }

    char ch;
    int spacecount = 0;
    int digitcount = 0;

    while (inputfile.get(ch))
    {
        if (ch == ' ')
            spacecount++;
        else if (isdigit(ch))
            digitcount++;
    }

    inputfile.close();

    cout << "Total spaces : " << spacecount << endl;
    cout << "Total digits : " << digitcount << endl;

    return 0;
}

