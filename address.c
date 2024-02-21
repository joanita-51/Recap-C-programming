#include <stdio.h>
#include <stdint.h> // header of uintptr_t
void func(int* a1)
{
    printf(" :: a1’s address is 0x%lx \n", (uintptr_t) &a1);
}
int main(){
    int x=3;
    func (&x);
    return 1;
}