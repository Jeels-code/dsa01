#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    for (int i = start; i < end; i++)
    {
        if (key = arr[mid])
        {
            return mid;
        }

        // if key<mid
        if (key < mid)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
};

int main()
{
    int size;
    int even[8] = {24, 42, 664, 50, 4254, 66, 4};
    int odd[12] = {23, 19, 17, 33, 5, 7, 9, 11, 13, 15, 17};

    int result = binarySearch(even, 8, 664);
    cout << "the element" << size << "found at index :" << result << endl;
}