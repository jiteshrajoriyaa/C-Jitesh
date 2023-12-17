#include <iostream>
using namespace std;

void printArr(int *arr, int idx, int size)
{

    if (idx == size)
    {
        return;
    }

    cout << arr[idx] << endl;

    return printArr(arr, idx + 1, size);
}
int main()
{

    int arr[] = {2, 4, 6, 3, 7};
    printArr(arr, 0, 5);

    return 0;
}