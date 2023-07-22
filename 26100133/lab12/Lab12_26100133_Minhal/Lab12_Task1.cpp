#include <iostream>
using namespace std;
int **myst(int *arr, int size, int r, int c)
{
    int **ret = new int *[r];
    for (int i = 0; i < r; i++)
    {
        ret[i] = new int[c];
    }
    int iter = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            ret[i][j] = arr[iter];
            iter++;
        }
    }
    return ret;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int v1, v2;
    do
    {
        cout << "Enter v1: ";
        cin >> v1;
        cout << "Enter v2 ";
        cin >> v2;
        if (v1 * v2 != size)
        {
            cout << "Incorrect values\n";
        }
    } while (v1 * v2 != size);
    int **ret = myst(arr, size, v1, v2);
    for (int i = 0; i < v1; i++)
    {
        for (int j = 0; j < v2; j++)
        {
            cout << ret[i][j] << " ";
        }
        cout << endl;
    }
    //memory cleaner
    for (int i = 0; i < v2; i++)
    {
        delete[] ret[i]; // To delete the inner arrays
    }
    delete[] ret;
    return 0;
}
