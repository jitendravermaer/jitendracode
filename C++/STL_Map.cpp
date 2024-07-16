#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Rohan"] = 2;

    map<string, int>::iterator itr;
    for (itr = marksMap.begin(); itr ! = marksMap.end(); itr++)
    {
        cout << (*itr).first << "  " << (*itr).second << "\n";
    }

    return 0;
}