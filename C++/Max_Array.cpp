#include <iostream>
using namespace std;

int main()
{
    int array[] = {10, 55, 88, 21, 30};
    int size = sizeof(array) / sizeof(array[0]);
    int max = array[0];

    for (int i = 1; i < 5; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    cout << max << endl;

    return 0;
}