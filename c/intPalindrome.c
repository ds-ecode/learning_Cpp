#include <stdio.h>
#include <math.h>

int main(){


    int a ;
    printf("Enter the Number \n-->");
    scanf("%d",&a);
    int c = 0;
    int temp = a;
    while (temp){
        int b= temp%10;
        c = b + c*10;
        temp = temp/10;
    };

    if (c == a ){
        printf("%d is Palindrome",a);
    } 
    else{
        printf("%d Not a Palindrome",a);
    };

    return 0;
}
