# include <stdio.h>
# include <stdlib.h>
// Imported libraries

int main(){
  //Main function
    printf("Hello World!\n");
    printf("I am learning C.\n");
  printf("And it is awesome!");// Hello comment
  /* Multi Line comments  are done with  "/* */ //"
  
  //*/

  // Creating variables 
  int prime = 2.0;
  float prime1 = 2.0;
  char* var="s";
  char* var1="String";
  printf("%d",prime);
  printf("\nVariable 1 character %s",var);
  printf("%s",var1);

  // Multiple output handling
  printf("My char is %s \nand my string is %s \nand my prime is %d \nand my prime1 is %d",var,var1,prime,1002);
    

  prime=0;
  prime1=1.0;
  var="a";
  var1="ab";
  printf("My char is %s \nand my string is %s \nand my prime is %d \nand my prime1 is %d",var,var1,prime,prime1);
  int x,y,z;
  x=y=z=3;
  printf("\n%d\n%d\n%d\n",x,y,z);
  return 0;
}
