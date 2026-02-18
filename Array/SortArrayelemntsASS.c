// CPP program to sort the given array elements asscending order
#include <iostream>
#include <iterator> // To find the size of array with the help of size()
using namespace std;

int main() {
    int arr[]={2, 3, 1, 5, 7, 4, 6};
     int temp=0,len;
     len=size(arr);
     for(int i=0;i<len; i++)
     {
        for(int j=i;j<len;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
     }
     
     for(int i=0;i<len;i++)
     {
         cout<<arr[i]<<" ";
     }

    return 0;
}
