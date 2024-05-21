#include <iostream>
using namespace std;

int main()
{
    // program to find the minimum and maximum elements in an array;
    int arr[5]={1,2,3,4,5};
    int min=arr[0]; int max=arr[0];
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int i=1;i<size;i++){
        if (min > arr[i]){
            min=arr[i];
        }
        if (max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"Max --> "<<max<<"\n"<<"Min --> "<<min<<"\n";

    return 0;
}

