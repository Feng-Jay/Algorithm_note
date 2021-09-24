#include <iostream>

using namespace std;

void Bubble_sort(int* list,int len)
{
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-i-1;j++){
            if(list[j]>list[j+1]){
                swap(list[j],list[j+1]);
            }
        }
    }
}

int main()
{
    int arr[] = { 61, 17, 29, 22, 34, 60, 72, 21, 50, 1, 62 };
    int len = (int) sizeof(arr) / sizeof(*arr);
    Bubble_sort(arr, len);
    for (int i = 0; i < len; i++)
        cout << arr[i] << ' ';
    cout << endl;
    return 0;
}
