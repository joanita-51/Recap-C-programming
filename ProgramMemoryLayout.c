#include <stdlib.h>
#include <stdio.h>
int x =100; //This is allocated in the data segment
int main(){
    //data stored on stack
    int a = 2;
    float b = 2.5;
    static int y; //This value is also allocated in the BSS segment

    //Allocate memory on heap
    int *ptr = (int *) malloc(2*sizeof(int));

    //values 5 and 6 stored on heap
    ptr[0]=5;
    ptr[1]=6;

    printf("%p and %p are stored in the heap segment \n",(void *)&ptr[0], (void *)&ptr[1]);

    //dellocate memory on heap
    free(ptr);

    printf("%d", *ptr);

    return 1;
}