#include<stdio.h>
int main(){
    int array[100],position, i, n;
    printf("Enter the number of elements in the array: ");
    scanf("%d" ,&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i < n;i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the position of the element to delete (1 to %d):",n);
    scanf("%d", &position);
    if(position < 1 || position >n) {
        printf("invalid position");
    }
    
}