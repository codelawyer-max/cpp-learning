#include <iostream>
using namespace std;

int totalchai(int chaiserved[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += chaiserved[i];
    }
    return total;
}
int main()
{
    int chaiserved[5] = {23, 56, 89, 45, 90};
    int total = totalchai(chaiserved, 5);
    cout << "total chai served: " << total << endl;
    return 0;
}