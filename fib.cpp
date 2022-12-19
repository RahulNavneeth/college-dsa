#include <iostream>
using namespace std;

int main()
{
    int r;
    cout << "ENTER NO.OF TEST CASES : ";
    cin >> r;
    for (int i = 0; i < r; i++)
    {
        int n;
        cout << "ENTER N : ";
        cin >> n;
        if (n >= 0)
        {

            int a = 0, b = 1;
            int sum = 0;
            for (int j; j < n - 1; j++)
            {
                int tmp = b;
                b = a + b;
                a = tmp;
                if (b % 2 == 0)
                {
                    sum += b;
                }
            }
            cout << "SUM OF EVEN FIB VALUE: " << sum << endl;
        }
        else
        {
            cout << "Invalid Input";
        }
    }
}
