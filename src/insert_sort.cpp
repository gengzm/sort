#include <iostream>
#include <random>
using namespace std;

int insert_sort(int* arr,const int size)
{
    if (NULL == arr || size < 1)
    {
        return 1;
    }
    for (int i = 1; i < size; i++)
    {
        int predix = i-1;
        int curdata = arr[i];
        while (predix >= 0 && arr[predix] > curdata)
        {
            arr[predix+1] = arr[predix];
            predix--;
        }
        arr[predix+1] = curdata;
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
    insert_sort(a,10);
    for (int i = 0; i < 10; i++)
    {    cout << a[i] << " ";    }
    cout << endl;
    return 0;
}
