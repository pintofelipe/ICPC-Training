#include <iostream>

using namespace std;

int main()
{

    int n;

    int sendProblem = 0;
    cin >> n;

    int q1, q2, q3;

    for (int i = 0; i < n; i++)
    {
        cin >> q1 >> q2 >> q3;

        if ((q1 + q2 + q3) >= 2)
        {
            sendProblem++;
        }
    }

    cout << sendProblem << '\n';

    return 0;
}