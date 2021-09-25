#include <iostream>
#include <cmath>

using namespace std;

void quick_sort(int* list,int len);
void quick(int* list, int low, int high);
int partition(int* list,int low, int high);

int main()
{
    int arr[] = { 61, 17, 29, 22, 34, 60, 72, 21, 50, 1, 62 };
    int len = (int) sizeof(arr) / sizeof(*arr);
    quick_sort(arr,len);
    for (int i = 0; i < len; i++)
        cout << arr[i] << ' ';
    cout << endl;
    return 0;
}

void quick_sort(int* list,int len)
{
    quick(list,0,len-1);
}
void quick(int* list, int low, int high)
{
    if(low>=high) return;
    int pivot=partition(list,low,high);
    quick(list,low,pivot-1);
    quick(list,pivot+1,high);
}
int partition(int* list,int low, int high)
{
    int pivot=list[low];
    while(low<high){
        while(low<high&&list[high]>=pivot) high--;
        list[low]=list[high];
        while(low<high&&list[low]<=pivot) low++;
        list[high]=list[low];
    }
    list[low]=pivot;
    return low;
}