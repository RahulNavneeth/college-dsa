#include <iostream>
using namespace std;

int main()
{

    // TIME COMPLEXITY  -> o(N) * o(N) -> o(N^2)
    // SPACE COMPLEXITY -> o(1)

    int r;
    cout << "ENTER NO.OF TEST CASES : ";
    cin >> r;

    // o(N)

    for (int i = 0; i < r; i++)
    {
        int n;
        cout << "ENTER N : ";
        cin >> n;
        if (n >= 0)
        {

            int a = 0, b = 1;
            int sum = 0;

            // o(N)

            while (b <= n)
            {
                int tmp = b;
                b = a + b;
                a = tmp;
                if (b % 2 == 0)
                {
                    sum += b;
                }
            }
            cout << "SUM OF EVEN FIB VALUES : " << sum << endl;
        }
        else
        {
            cout << "INVALID INPUT" << endl;
        }
    }
}
