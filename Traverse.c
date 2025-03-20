#include <stdio.h>

int main() {
    int la[] = {2, 4, 5, 6, 7};
    int size = sizeof(la) / sizeof(la[0]); 

    printf("Here are the elements of the array:\n");

    for (size_t i = 0; i < size; i++) {
        printf("The value of la[%zu] = %d\n", i, la[i]); 
    }

    return 0;
}

