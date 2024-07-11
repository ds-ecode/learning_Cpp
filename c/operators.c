# c operators 


#include <stdio.h>

int main(){
    float sum= (float) 5/2;
    printf("sum = %.2f\n",sum);

    const int myNum = 15;  // myNum will always be 15
    /*myNum = 10;  // error: assignment of read-only variable 'myNum' erore */

    int sum1 = 100 + 50;        // 150 (100 + 50)
    int sum2 = sum1 + 250;      // 400 (150 + 250)
    int sum3 = sum2 + sum2; 
    printf("%d%d%d\n",sum1,sum2,sum3);
    

    /*  +	Addition	Adds together two values	x + y	
    -	Subtraction	Subtracts one value from another	x - y	
    *	Multiplication	Multiplies two values	x * y	
    /	Division	Divides one value by another	x / y	
    %	Modulus	Returns the division remainder	x % y	
    ++	Increment	Increases the value of a variable by 1	++x	
    --	Decrement	Decreases the value of a variable by 1	--x*/

//The addition assignment operator (+=) adds a value to a variable:
//Example
int x = 10;
x += 5;
printf("\n%d", x);

/*   =	x = 5	x = 5	
    +=	x += 3	x = x + 3	
    -=	x -= 3	x = x - 3	
    *=	x *= 3	x = x * 3	
    /=	x /= 3	x = x / 3	
    %=	x %= 3	x = x % 3	
    &=	x &= 3	x = x & 3	
    |=	x |= 3	x = x | 3	
    ^=	x ^= 3	x = x ^ 3	
    >>=	x >>= 3	x = x >> 3	
    <<=	x <<= 3	x = x << 3*/



    return 0;
};
  
