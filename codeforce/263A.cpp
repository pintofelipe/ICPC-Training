#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int m[5][5];

    int row = -1;
    int column = -1;
    int value;

        int output = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            cin >> value;
            m[i][j] = value;
            if (value == 1)
            {
                row = i;
                column = j;
            }
        }
    }

    // centro (2,2)

    int moves = abs(row-2) + abs(column-2);

    cout << moves << "\n";

    return 0;
}
