#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    //srand(time(0));
    int arr[10][10];
    int new_arr[10][10];
    int even[100];
    int odd[100];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            // srand(time(0));
            int random = rand() % (99 - 10 + 1) + 10;
            // cout<<random<<endl;
            arr[i][j] = random;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int index1 = 0;
    int index2 = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr[i][j] % 2 == 0)
            {
                even[index1] = arr[i][j];
                index1++;
            }
            else
            {
                odd[index2] = arr[i][j];
                index2++;
            }
        }
    }

    // int size1 = sizeof(even) / sizeof(int);
    // int size2 = sizeof(odd) / sizeof(int);



    
    for (int i=0; i<index1; i++){
            cout<<even[i]<<" ";
           
    }

     for (int i=0; i<index2; i++){
            cout<<odd[i]<<endl;
    }



    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for arr[i][j] << ;
        }
        cout << endl;
    }
    

    return 0;
}