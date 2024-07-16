#include <iostream>
using namespace std;

int main()
{
    int array[] = {10, 55, 88, 21, 30};
    int key = 21;
    int ans = -1;

    for (int i = 0; i < 5; i++)
    {
        if (array[i] == key)
        {
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}