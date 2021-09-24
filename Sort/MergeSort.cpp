#include <iostream>
#include <cmath>

using namespace std;

void merge_sort(int* list,int len)
{
    int *a=list;
    int *b=new int [len]; 
    for(int i=1;i<len;i=i+i){//步长
        for(int start=0;start<len;start+=2*i){
            int low=start; int mid=min(start+i,len); int high = min(len,start+2*i);
            int k=start;
            int start1=low; int end1=mid;
            int start2=mid; int end2=high;
            while(start1<end1&&start2<end2)
            {
                // cout<<"b's add="<<b+k<<" a's add="<<a+start1<<" "<<a+start2<<endl;
                b[k++]=a[start1]<a[start2] ? a[start1++] : a[start2++];
                // cout<<"Now b's add="<<b+k-1<<endl;
            }
            while(start1<end1)
                b[k++]=a[start1++];
            while(start2<end2)
                b[k++]=a[start2++];
        }
        int* temp=a;
        a=b;
        b=temp;
    }
    if (a != list) {
        cout<<"exec"<<endl;
        for (int i = 0; i < len; i++)
            b[i] = a[i];
        b = a;
    }
    delete[] b;
    return;
}

int main()
{
    int arr[] = { 61, 17, 29, 22, 34, 60, 72, 21, 50, 1, 62 };
    int len = (int) sizeof(arr) / sizeof(*arr);
    merge_sort(arr, len);
    for (int i = 0; i < len; i++)
        cout << arr[i] << ' ';
    cout << endl;
    return 0;
}
