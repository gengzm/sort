#include <iostream>
#include <random>
using namespace std;

int shell_sort(int* arr,const int size)
{
    if (NULL == arr || size < 1)
    {
        return 1;
    }

    for (int gap = size/2; gap > 0; gap = gap/2){
        
        for (int i = gap; i < size; i++)
        {
            int preidx= i - gap;
            int curdata = arr[i];
            while (preidx >= 0 && arr[preidx] > curdata)
            {
                arr[preidx+gap] = arr[preidx];
                preidx -= gap;
            }
            arr[preidx+gap] = curdata;
        }
    }

    return 0;
}

int main()
{
    cout << "shell sort" << endl;
    int *a = new int[11];
    if (!a) return 1;
    default_random_engine e;
    int size = 11;
    for (int i = 0; i < size; i++)
    {
        a[i] = (e()%100);
    }
    for (int i = 0; i < size; i++)
    {    cout << a[i] << " ";    }
    cout << endl;
    shell_sort(a,size);
    for (int i = 0; i < size; i++)
    {    cout << a[i] << " ";    }
    cout << endl;
    return 0;
}
