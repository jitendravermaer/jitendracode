#include <iostream>
using namespace std;

// int largestelementindex(int array[], int size)
// {
//     int max = INT8_MIN;
//     int maxindex = -1;
//     for (int i = 0; i < size; i++)
//     {
//         if (array[i] > max)
//         {
//             max = array[i];
//             maxindex = i;
//         }
//     }
//     return maxindex;
// }

int secondLargestElement(int array[], int size)
{
    int max = INT16_MIN;
    int second_max = INT16_MIN;

    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (array[i] > second_max && array[i] != max)
        {
            second_max = array[i];
        }
    }

    return second_max;
}

int main()
{

    int array[] = {2, 3, 5, 7, 6, 7, 1};
    int n = 7;

    
    // int indexOfLargest = largestelementindex(array, 6);
    // cout << array[indexOfLargest] << endl;

    // // array[indexOfLargest] = -1;

    // int largestElement = array[indexOfLargest];
    // for (int i = 0; i < n; i++)
    // {
    //     if (array[i] == largestElement)
    //     {
    //         array[i] = -1;
    //     }
    // }

    // int indexOfSecondLargest = largestelementindex(array, 6);
    // cout << array[indexOfSecondLargest] << endl;
    // cout << array[3] << endl;

    cout << secondLargestElement(array, n) << endl;

    return 0;
}