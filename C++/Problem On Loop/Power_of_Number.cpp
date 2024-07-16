#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int power_num = 1;
    for (int i = 1; i <= b; i++)
    {
        power_num *= a;
        cout << "Result after every calculation " << a << " raise to power " << i << " :" << power_num << endl;
    }

    cout << power_num << endl;

    return 0;
}