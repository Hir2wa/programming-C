#include <stdio.h>

int main() {
    int end;

    
    printf("Enter the limit for the multiplication table: ");
    scanf("%d", &end);

    
    printf("\nMultiplication Table up to %d:\n\n", end);

   
    for (int i = 1; i <= end; i++) {
        
        for (int j = 1; j <= end; j++) {
            printf("%d\t", i * j);  
        }
        printf("\n"); 
    }


}