#include <iostream>
using namespace std;


int swap(int arr[],int a,int b){
    int temp =arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
    return(0);
}


int reverseArray(int arr[],int size){
    for(int i=0;i<(size/2);i++){
        swap(arr,i,size-1-i);
    }
    return(0);
}



int main()
{
    int arr[5]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,size);
    
    for(int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }

    return 0;
}
