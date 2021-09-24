#include <iostream>
#include <cmath>

using namespace std;

void Insert_sort(int * list, int len)
{
    for(int i=1;i<len;i++){
        int temp=list[i];
        int pos=i;
        while(pos>0&&list[pos-1]>temp){
            list[pos]=list[pos-1];
            pos--;
        }
        list[pos]=temp;
    }
}

int main()
{
    int arr[] = { 61, 17, 29, 22, 34, 60, 72, 21, 50, 1, 62 };
    int len = (int) sizeof(arr) / sizeof(*arr);
    Insert_sort(arr, len);
    for (int i = 0; i < len; i++)
        cout << arr[i] << ' ';
    cout << endl;
    return 0;
}
