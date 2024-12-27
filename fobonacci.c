#include <stdio.h>

int main() {
    int n, i;
    long long first = 0, second = 1, next;

   
    printf("Enter Frefered Terms: ");
    scanf("%d", &n);

    
    printf("Fibonacci Sequence: \n");

    
    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld ", first); 
            continue;
        }
        if (i == 2) {
            printf("%lld ", second); 
            continue;
        }
        next = first + second; 
        first = second;        
        second = next; 
            printf("%lld ", next); 
    }

    printf("\n");

    return 0;
}


