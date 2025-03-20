#include<stdio.h>
struct employee
{
 int id;
 char name[50];
 float weight;
 float height;  
};
int main(){
    struct employee emp;
    printf("enter your id");
    scanf("%d",&emp.id);
    
    printf("Enter your name");
    
    scanf("%s",&emp.name);
    printf("Enter your weight");
    scanf("%f",&emp.weight);
    printf("Enter your height");
    scanf("%f",&emp.height);

    printf("Your Employee details are:");
    printf("Your id is: %d\n" ,emp.id );
    printf("your name is : %s\n",emp.name);
    printf("your weight is: % f\n",emp.weight);
    printf("your height is: %f\n",emp.height);
    
    return 0;

    
}
