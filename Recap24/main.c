#include <stdio.h>

int main(){
    int array[] = {0, 1, 2, 3, 4};
    
    int *p = array;
    
    for (int i = 0; i <5;i++){
        printf("Element %d: Värde = %d, Adress = %p\n", i, *(p + i), (p + 4));
    }
    return 0;
}
