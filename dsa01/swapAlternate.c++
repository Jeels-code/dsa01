#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
}

void swaparray(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i + 1], arr[i]);
            // if inbuild fun swap is not working you can use this:
            /* {  int temp = arr[i + 1];
                arr[i+1] = arr[i];
                arr[i] = temp;}*/
        }
    }
};

int main()
{
    int odd[8] = {2, 4, 6, 8, 12, 14, 16, 18};
    // printArray(odd, 8);
    swaparray(odd, 8);
    printArray(odd, 8);

    return 0;
}