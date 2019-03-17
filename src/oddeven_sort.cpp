#include <iostream>
#include <random>
using namespace std;
// 奇偶数排序，先排奇数位和后面一位，再排偶数位和后面一位，以此重复
int oddeven_sort(int* arr,const int size)
{
    if (NULL == arr || size < 1)
    {
        return 1;
    }

    int exchFlag = 1;
    int start = 0;
    while (1==exchFlag) {
      exchFlag = 0;
      for (int i = start; i < size-1; i+=2)
      {
          if (arr[i] > arr[i+1])
          {
              int temp = arr[i];
              arr[i] = arr[i+1];
              arr[i+1] = temp;
              exchFlag = 1;
          }
      }
      if (start == 0)
      {
          start = 1;
      }else
      {
        start = 0;
      }


   }

    return 0;
}

int main()
{
    cout << "oddeven sort" << endl;
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
    oddeven_sort(a,size);
    for (int i = 0; i < size; i++)
    {    cout << a[i] << " ";    }
    cout << endl;
    return 0;
}
