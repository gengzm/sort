#include <iostream>
#include <random>
using namespace std;

int select_sort(int* arr,const int size)
{
    if (NULL == arr || size < 1)
    {
        return 1;
    }
    int minidx = -1;
    for (int i = 0; i < size-1; i++)
    {
        minidx = i;
        for (int j =i+1; j < size;j++)
        {
            if (arr[j] < arr[minidx])
            {
                minidx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minidx];
        arr[minidx] = temp;
    }
    return 0;
}

int main()
{
    int *a = new int[10];
    if (!a) return 1;
    default_random_engine e;
    for (int i = 0; i < 10; i++)
    {
        a[i] = (e()%100);
    }
    for (int i = 0; i < 10; i++)
    {    cout << a[i] << " ";    }
    cout << endl;
    select_sort(a,10);
    for (int i = 0; i < 10; i++)
    {    cout << a[i] << " ";    }
    cout << endl;
    return 0;
}
