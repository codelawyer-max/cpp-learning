#include <iostream>
using namespace std;

int main()
{
    int data[3][4] = {{1, 2, 3, 4},
                      {7, 6, 57, 9},
                      {23, 556, 67, 345}};

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
