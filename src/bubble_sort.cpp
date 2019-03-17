#include <iostream>
#include <random>
using namespace std;

int bubble_sort(int* arr,const int size)
{
    if (NULL == arr || size < 1)
    {
        return 1;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j =0; j < size-1-i;j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
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
    bubble_sort(a,10);
    for (int i = 0; i < 10; i++) 
    {    cout << a[i] << " ";    }
    cout << endl;
    return 0;
}
