#include <iostream>
using namespace std;

void square()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void rectangle()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void void_rectangle()
{
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            if (row == 0 || row == 4)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == 4)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << "\n";
    }
}

void half_pyramid()
{
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            if (row >= col)
            {
                cout << "* ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

void inverted_pyramid()
{
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5 - row; col++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

int main()
{
    cout << "SQUARE \n";
    square();
    cout << "\nRECTANGLE\n";
    rectangle();
    cout << "\nvoid_RECTANGLE\n";
    void_rectangle();
    cout << "\nHALF_PYRAMID\n";
    half_pyramid();
    cout << "\ninverted_PYRAMID\n";
    inverted_pyramid();
}