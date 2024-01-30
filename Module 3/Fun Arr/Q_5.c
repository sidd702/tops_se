/*
5. WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice
*/
#include <stdio.h>
void asc(int arr[5]);
void dsc(int arr[5]);
int main()
{
    int arr[5];
    int i,choice;
    
    for(i=0;i<5;++i){
        printf("Enter %d val ",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("1:ascending 2:descending\n");
    scanf("%d",&choice);
    
    if(choice==1){
        asc(arr);
    }else if(choice==2){
        dsc(arr);
    }else{
        printf("\nInvalid");
        return 0;
    }
    
    for(i=0;i<5;++i){
        printf("\n %d ",arr[i]);
    }
    
    return 0;
}

void asc(int arr[5]){
    int i,j,temp;
    for(i=0;i<5;++i){
        for(j=i+1;j<5;++j){
            if(arr[j]<arr[i]){
                temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
void dsc(int arr[5]){
    int i,j,temp;
    for(i=0;i<5;++i){
        for(j=i+1;j<5;++j){
            if(arr[j]>arr[i]){
                temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
