#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int reverse_num = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        // reverse_num = lastdigit;
        reverse_num = (reverse_num * 10) + lastdigit;
        n /= 10;
        // cout << reverse_num;
    }
    cout << reverse_num;

    return 0;
}