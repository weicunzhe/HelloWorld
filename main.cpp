#include <iostream>
using namespace std;

//MyWsl给sort函数添加注释
void sort(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {12, 4, 89, 43, 21, 78};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);
    return 0;
}
