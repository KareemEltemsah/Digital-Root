#include <iostream>

using namespace std;
int DigitSum (int n)
{
    if (n==0)
        return 0;
    else
        return (n%10+DigitSum(n/10));
}
int DigitalRoot (int n)
{
    if (n/10==0)
        return n;
    else
        return DigitalRoot(DigitSum(n));
}
int main()
{
    while (true)
    {
        char choose;
        cout << "1- Get the digital root for a number\n0- close program" << endl;
        cin >> choose;
        if (choose=='1')
        {
            int num;
            cout << "Enter the number: ";
            cin >> num;
            cout << "Result = " << DigitalRoot(num) << endl;
        }
        else if (choose=='0')
            return 0;
        else
            cout << "Not valid choice" << endl;
    }
}
