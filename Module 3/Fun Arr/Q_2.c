/*
2. WAP of Addition, Subtraction, Multiplication and Division using Switch
case.(Must Be Menu Driven)
*/
#include <stdio.h>

int main()
{
    int a,b,choice=0;
    
    do{
        printf("Press 1 For Addition\n");
        printf("Press 2 For Subtraction\n");
        printf("Press 3 For Multiplication\n");
        printf("Press 4 For Division\n");
        printf("Press 0 to Exit\n");
        scanf("%d",&choice);
        
        if(choice==0){
            printf("Exit");
            break;
        }
        
        printf("Enter Num 1 ");
        scanf("%d",&a);
        printf("Enter Num 2 ");
        scanf("%d",&b);
        
        switch(choice){
            case 1:
                printf("%d",a+b);
                break;
            case 2:
                printf("%d",a-b);
                break;
            case 3:
                printf("%d",a*b);
                break;
            case 4:
                printf("%d",a/b);
                break;
            default:
                printf("Invalid");
                break;
            
        }
        printf("\n");
    }while(choice);
    
    return 0;
}
