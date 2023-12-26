#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};
void swapArray(int arr[], int size)
{

    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
};

int main()
{

    int even[8] = {24, 42, 664, 50, 4254, 66, 4};
    int odd[12] = {23, 19, 17, 33, 5, 7, 9, 11, 13, 15, 17};

    swapArray(even, 8);
    printArray(even, 8);
    swapArray(odd, 12);
    printArray(odd, 12);
}