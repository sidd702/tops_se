/* 19. Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :
20. Unit 21. Charge/unit
22. upto 350 23. @1.20
24. 350 and above but less than 600 25. @1.50
26. 600 and above but less than 800 27. @1.80
28. 800 and above 29. @2.00
*/
#include <stdio.h>
int main() {
    int cid,unit=0;
    float bl=0;
    char name[10];
    printf("Enter Cust id ");
    scanf("%d",&cid);
    printf("Enter name ");
    scanf("%s",&name);
    printf("Enter units ");
    scanf("%d",&unit);
    
    if(unit<=350)
        bl=unit*1.20;
    else if(unit>350 && unit<=600)
        bl=unit*1.50;
    else if(unit>600 && unit<=800)
        bl=unit*1.80;
    else if(unit>800)
        bl=unit*2.0;
    
    if(bl>800){
		bl= bl*18/100;
		printf("Bill Amt %.2f",bl);
    }
    return 0;
}