#include <iostream>
using namespace std;

//...You have to print the pattern like given below
//input --- >   4
//output --->
//*
//* *
//* * *
//* * * *
void patternrec(int n, int i)
{
    // base case
    if (i == n)
    {
        return;
    }

    // recursive case
    for (int j = 0; j <= i; j++)
    {
        cout << "*"
             << " ";
    }
    cout << endl;

    patternrec(n, i+1);
}

int main()
{
    int n;
    cin >> n;

    patternrec(n, 0);
    return 0;
}