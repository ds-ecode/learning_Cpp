#include <stdio.h>
#include <stdbool.h>

int main(){


    printf("Enter the Number \n-->");
    int a;
    scanf("%d",&a);
    bool prime = true;

    for (int i=2;i<a/2;i++){
        if (a%i == 0){
            prime = false;
        };

    };
    if (prime){
        printf("%d is not prime\n",a);
    }
    else{
        printf("%d is prime\n",a);
    };

    return 0;
}
