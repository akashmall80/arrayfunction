//pass by reference using array
#include<iostream>
using namespace std;
// void pass(int arr[]) here call by reference is done
// {
//     cout<<sizeof(arr)<<endl; so pointer size is 8 bytes so size of arr is 8 bytes
//     int n=sizeof(arr)/sizeof(int); size of arr in function is 8 bytes and size of int is 4 bytes so n is 8/4=2
//     cout<<n;so number of element is 2
// }


//so whenever we pass arr we pass number of element
void pass(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[]={1,2,3,4};
    // cout<<sizeof(arr) output =16
    //because size of int =4 byte
    //so number of element is 4 so total size is 4*4=16
    int n=sizeof(arr)/sizeof(int);
    //size of arr is 16 and size of int is 4
    //so total number of elements is 16/4=4
    pass(arr,n);
    //pass by reference
    return 0;
}
