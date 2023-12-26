#include <iostream>
using namespace std;
void linearSearch(int arr[], int size)
{
    cout << "Enter the key you want to search: ";
    int key;
    cin >> key;

    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            cout << "Element Found at index: " << i << endl;
            return;
        }
    };
    cout << "Element not found " << endl;
}
int main()
{
    cout << "enter the size you want:" << endl;
    int size;
    cin >> size;
    int arr[size];
    cout << "enter the values: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    linearSearch(arr, size);
    return 0;
}