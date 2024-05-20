#include <iostream>

int main()
{
    int arr[7]={1,1,2,2,2,2,3};
    std::cout<<"Enter element to check\n-->";
    int a ;
    std::cin>>a;
    int count, size = sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<=size;i++){
        if (arr[i] == a){
            count++;
        }
    }
    std::cout<<"Repetation -->"<<count;

    return 0;
}
