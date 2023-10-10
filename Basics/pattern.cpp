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

void pyramid(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void pyramid_2(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void full_pyramid(int n)
{
    pyramid(n / 2);
    pyramid_2(n / 2);
}

void empty_pyramid(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
            if (col == 0 || col == row + 1 - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        cout << "\n";
    }
}

void empty_pyramid_2(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < n - row; col++)
            if (col == 0 || col == n - row - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        cout << "\n";
    }
}

void diamond()
{
    int n = 4;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }
        for (int col = 0; col < 2 * row + 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        for (int col = 0; col < 2 * n - 2 * row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern()
{
    int n = 4;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row * 2 + 1; col++)
        {
            if (col % 2 == 0)
            {
                cout << row + 1 << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    n = 4;
    for (int row = n - 1; row > 0; row--)
    {
        for (int col = 0; col < row; col++)
            if (col == row - 1)
            {
                cout << row;
            }
            else
            {
                cout << row << " * ";
            }
        cout << endl;
    }
}

void hollow_inverted_pyramid()
{
    int n = 8;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            if (row == 0)
            {
                cout << "* ";
            }
            else if (col == 0)
            {
                cout << "* ";
            }
            else if (row + col == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void hollow_number_pyramid()
{
    int n = 8;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)

            if (row == n - 1)
            {
                cout << col + 1 << " ";
            }
            else if (col == 0)
            {
                cout << "1 ";
            }
            else if (col == row)
            {
                cout << row + 1 << "  ";
            }
            else
            {
                cout << "  ";
            }
        cout << endl;
    }
}

void alphabet()
{
    int n = 5;
    for (int row = 0; row < n; row++)
    {
        char ch = 'A';
        char alphabet;
        for (int col = 0; col < row + 1; col++)
        {
            alphabet = ch + col;
            cout << alphabet << " ";
        }

        for (char col = alphabet; col > 'A';)
        {
            col--;
            cout << col << " ";
        }

        cout << endl;
    }
}

void number_void_half_pyramid()
{
    int n = 5;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            if (row == 0)
            {
                cout << col + 1 << " ";
            }
            else if (col == 0)
            {
                cout << row + 1 << " ";
            }
            else if (col == n - row - 1)
            {
                cout << "5 ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void numeric_palindrome_equilateral_pyramid()
{
    int n = 5;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            if (col == n - row - 1 - 1)
            {
                cout << row + 1 << " ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
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
    cout << "\nPYRAMID\n";
    pyramid(8);
    cout << "\nPYRAMID_2\n";
    pyramid_2(8);
    cout << "\nFULL-PYRAMID_2\n";
    full_pyramid(16);
    cout << "\nEMPTY-PYRAMID\n";
    empty_pyramid(8);
    cout << "\nEMPTY-PYRAMID_2\n";
    empty_pyramid_2(8);
    cout << "\nEMPTY_DIAMOND\n";
    empty_pyramid(8);
    empty_pyramid_2(8);
    cout << "\nDIAMOND\n";
    diamond();
    cout << "\nPattern\n";
    pattern();
    cout << "\nHOLLOW INVERTED PYRAMID\n";
    hollow_inverted_pyramid();
    cout << "\nHOLLOW NUMBER PYRAMID\n";
    hollow_number_pyramid();
    cout << "\nALPHABET\n";
    alphabet();
    cout << "\nnumber_void_half_pyramid\n";
    number_void_half_pyramid();
    cout << "\nnumeric_palindrome_equilateral_pyramid\n";
    numeric_palindrome_equilateral_pyramid();
}