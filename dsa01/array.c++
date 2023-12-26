#include <iostream>
using namespace std;

int printArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "the sum of all element in array is : " << sum << endl;
};

int main()
{
    cout << "entre the size you want:" << endl;
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    printArray(arr, size);
    return 0;
}