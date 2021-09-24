#include <iostream>
#include <cmath>

using namespace std;

void Select_sort(int * list, int len)
{
    // 认为刚开始以及排序序列长度为0
    int min,flag,index;
    for(int i=0;i<len-1;i++){
        min=list[i]; flag=0;
        for(int j=i;j<len;j++){
            if(min>list[j]){
                flag=1;
                min=list[j];
                index=j;
            }
        }
        if(flag){
            swap(list[i],list[index]);
        }
    }
}

int main()
{
    int arr[] = { 61, 17, 29, 22, 34, 60, 72, 21, 50, 1, 62 };
    int len = (int) sizeof(arr) / sizeof(*arr);
    Select_sort(arr, len);
    for (int i = 0; i < len; i++)
        cout << arr[i] << ' ';
    cout << endl;
    return 0;
}
