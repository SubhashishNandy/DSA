#include <iostream>
using namespace std;

void reverse(int arr[], int s, int e)
{
    if(s<e)
    {
        int temp =  arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}
void print(int arr[], int s)
{
    for(int i=0;i<=s;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[] = {1, 3 , 5, 7, 9};
    int n = sizeof(arr)/sizeof(0);
    reverse(arr, 0, n-1);

    print(arr, n);

    return 0;
}
