#include <stdio.h>

int main() {
    int choice;
    float num1, num2;
    float result;

    do {
        printf("\n<<<<<<<<<<<<WELCOME>>>>>>>>>>> \n");
        printf("\n Bellow  Are Allowed Option\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter Prefered choice(1-5): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {

            printf("Enter 1st Num: ");
            scanf("%f", &num1);
            printf("Enter 2nd Num: ");
            scanf("%f", &num2);
        }


        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf("OOPs: Division with O.\n");
                }
                break;
            case 5:
                printf("Exiting the program...\n");
                break;
            default:
                printf("please Invalid Option \n");
        }



    } while (choice != 5);


}
