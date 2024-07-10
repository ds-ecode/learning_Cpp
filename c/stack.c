# include <stdio.h>
# include <stdlib.h>


typedef struct myarray {
    int total_size;
    int used_size;
    int *ptr ;
    };

void createArray(struct myarray *a, int array_size, int array_maxsize){
    a->total_size = array_maxsize;
    a->used_size = array_size;
    a->ptr = (int *)malloc(array_maxsize * sizeof(int));

};

void setarray( struct myarray *a){
    int n;
    for (int i =0;i< a ->used_size;i++){
        printf("enter the element %d \n->",i+1);
        scanf("%d",&n);
        (a->ptr)[i] = n;

};
};
void show(struct myarray *a){
    for (int i = 0; i < a->used_size;i++){
        printf("%d ", (a->ptr)[i]);
    };

};

int main(){
    struct myarray marks;
    createArray(&marks,2,10);
    setarray(&marks);
    show(&marks);
    return 0;

};
