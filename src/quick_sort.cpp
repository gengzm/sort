#include <iostream>
#include <random>
using namespace std;

int partition(int *arr, int left,int righ);
void swap(int *arr, int i, int j);
int quick_sort(int* arr,int left, int right);

int quick_sort(int* arr,int left, int right)
{
    if (NULL == arr)
    {
        return 1;
    }
    int partitionidx = 0;
    if (left < right)
    {
        partitionidx = partition(arr, left, right);
        quick_sort(arr,left, partitionidx-1);
        quick_sort(arr,partitionidx+1, right);
    }

    return 0;
}
void swap(int *arr, int i, int j)
{
    int temp = arr[i] ;
    arr[i] = arr[j];
    arr[j] = temp;
}
int partition(int *arr, int left,int right)
{
    if (!arr){return 1;}
    int key = left;
    int index = key+1;
    for (int i = index; i <= right; i++)
    {
        if (arr[i] < arr[key])
        {
            swap(arr, i, index);
            index++;
        }
    }
    swap(arr,key,index-1);
    return index-1;
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
    quick_sort(a,0,size-1);
    for (int i = 0; i < size; i++)
    {    cout << a[i] << " ";    }
    cout << endl;
    return 0;
}
