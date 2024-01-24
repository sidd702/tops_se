//Loops
/* 1 WAP to print 972 to 897 using for loop
*/
#include <stdio.h>

int main ()
{
    int i;
    for(i=972;i>=897;i--)
        printf("%d ",i);
  return 0;
}

/* 2. WAP to accept 5 numbers from user and display all numbers
*/
#include <stdio.h>

int main ()
{
    int i[5],c;
    for(c=0;c<5;c++){
        printf("Enter value ");
        scanf("%d",&i[c]);
    }
    for(c=0;c<5;c++){
        printf("%d ",i[c]);
    }
  return 0;
}

/*
3. WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers
*/
#include <stdio.h>
int main() {
    int i[10],c,ec,oc,es,os=0;
    for(c=0;c<10;c++){
        printf("Enter value ");
        scanf("%d",&i[c]);
        
        if(i[c]%2==0){
            ec++;
            es+=i[c];
        }else{
            oc++;
            os+=i[c];
        }
    }
    printf("#odd %d #even %d #sumeven %d #sumodd %d",oc,ec,es,os);
    
    return 0; 
}

/* 4 WAP to print table up to given numbers
*/
#include <stdio.h>

int main() {
    int i,c,n;
    printf("Give num for table ");
    scanf("%d",&i);
    
    if(i>0){
        for(c=1;c<=i;c++){
            for(n=1;n<11;n++){
                printf("%d * %d = %d\n",c,n,c*n);
            }
            printf("\n");
        }
    }else printf("Invalid");

    return 0;
}

/*
5. WAP to print factorial of given number
*/
#include <stdio.h>

int main() {
    int c,i;
    int fact=1;
    printf("Give num ");
    scanf("%d",&i);
    
    if(i>0){
        for(c=i;c>0;c--){
            fact*=c;
        }
        printf("Fact %d",fact);
    }else{
        printf("Invalid");
    }
    return 0;
}

/*
6. WAP to print Fibonacci series up to given numbers
*/
#include <stdio.h>

int main() {
    int t1,t2,nt,c,i;
    
    printf("Enter count ");
    scanf("%d",&c);
    
    t1=0;
    t2=1;
    nt=t1+t2;
    
    if(c<=0){
        printf("Invalid");
        return 0;
    }
    if(c==1){
        printf("%d ",t1);
        return 0;
    }if(c==2){
        printf("%d %d ",t1,t2);
        return 0;
    }
    printf("%d %d ",t1,t2);
    for(i=3;i<=c;++i){
        printf("%d ",nt);
        t1=t2;
        t2=nt;
        nt=t1+t2;
    }
    
    return 0;
}

/*
7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
82746
*/
#include <stdio.h>

int main() {
    int n,n1;
    
    printf("Enter num ");
    scanf("%d",&n);
    
    n1=n;
    while(n1!=0){
        printf("%d",n1%10);
        n1/=10;
    }
    return 0;
}

/*
8. Write a program to find out the max from given number (E.g., No: -1562
Max number is 6)
*/
#include <stdio.h>

int main() {
    int i,n,n1,d,max;
    d=10;
    printf("Enter num ");
    scanf("%d",&n);
    
    if(n<0){
        n*=-1;
    }
    
    n1=n;
    max=n1%d;
    while(n1!=0){
        i=n1%d;
        // printf("i %d\n",i);
        max = i>max ? i : max;
        // printf("in max %d\n",max);
        n1/=10;
    }
    printf("\nmax is %d",max);
    return 0;
}

/*
9. Write a program make a summation of given number (E.g., 1523 Ans:11)
*/
#include <stdio.h>

int main() {
    int i,n,n1,d,sum;
    d=10;
    printf("Enter num ");
    scanf("%d",&n);
    
    if(n<0){
        n*=-1;
    }
    
    n1=n;
    sum=0;
    while(n1!=0){
        i=n1%d;
        sum+=i;
        n1/=10;
    }
    printf("\nsum is %d",sum);
    return 0;
}

/*
10.Write a program you have to make a summation of first and last Digit. (E.g.,
1234 Ans: 5)
*/
#include <stdio.h>

int main() {
    int n,n1,x1,x2;
    printf("Enter num ");
    scanf("%d",&n);
    
    n1=n;
    x1=n1%10;
    while(n1!=0){
        if(n1<10){
            // printf("In");
            x2=n1;
        }
        n1/=10;
    }
    printf("\nsum is %d",x1+x2);
    return 0;
}

/*
11. Accept 5 names from user at run time
*/
#include <stdio.h>

int main() {
    int i,n=5;
    char name[5][10];
    
    for(i=0;i<5;i++){
        printf("Enter %d name ",i+1);
        scanf("%s",&name[i][0]);
    }
    for(i=0;i<5;i++){
        printf("%d %s \n",i,name[i]);
    }
    
    return 0;
}

/*
12. Program of Armstrong Number in C Using For Loop & While Loop
*/
#include <stdio.h>

int main()
{
    int count,c,n=153,temp=1,d=0,x,v;
    int sum=0;
    
    printf("Enter positive num to check Armstrong ");
    scanf("%d",&n);
    
    c=n;
    while(c!=0)  
       {  
           c=c/10;  
           count++;  
       }
    printf("Count %d\t",count);
    
    c=n;
    while(c!=0){
        d=c%10;
        printf("d %d\t",d);
        c/=10;
        
        v=d;
        for(x=count;x>1;x--){
            d=d*v;
        }
        printf("d %d\t",d);    
        sum+=d;
    }
    
    if(n==sum){
        printf(" %d is Armstrong",n);
    }else{
        printf(" %d is NOT Armstrong",n);
    }
    
    return 0;
}

/*
13.calculate the Factorial of a Given Number using while loop
*/
#include <stdio.h>

int main()
{
    int n,fact=1,c;
    
    printf("Enter positive num to cal Factorial ");
    scanf("%d",&n);
    
    if(n>0){
        c=n;
        while(c!=0){
            fact*=c;
            --c;
        }
    }else{
        printf("Invalid");
    }
    
    printf("Factorial %d",fact);
    
    
    return 0;
}

/*
14.Accept 5 numbers from user and find those numbers factorials
*/
#include <stdio.h>

int main()
{
    int c,n,fact=1,x=1;
    
    do{
        printf("\nEnter %d num ",x);
        scanf("%d",&n);
        
        if(n>0){
            x++;
            c=n;
            fact=1;
            while(c!=0){
                fact*=c;
                --c;
            }
            printf("\nFactorial %d",fact);
        }else{
            printf("\nInvalid");
        }
        
    }while(x<6);
    
    return 0;
}
/*
15.Calculate sum of 10 numbers using of while loop
*/
#include <stdio.h>

int main() {
    int n,count=1,sum=0;
    
    do{
        printf("\nEnter %d num ",count);
        scanf("%d",&n);
        count++;
        sum+=n;
    }while(count<11);
    printf("Sum is %d",sum);
    return 0;
}

/*
16. Calculate the Sum of Natural Numbers Using the While Loop
*/
#include <stdio.h>

int main() {
    int count=1,sum=0;
    
    printf("\nEnter num ");
    scanf("%d",&count);
    
    while(count>0){
        sum+=count;
        count--;
    }
    
    printf("Sum is %d",sum);
    return 0;
}

/*
17. Calculate 5 numbers from user and calculate number of even and odd using of while loop
*/
#include <stdio.h>

int main() {
    int n,c=1,ec=0,oc=0;
    
    do{
        printf("\nEnter %d num ",c);
        scanf("%d",&n);
        
        n%2==0 ? ec++ : oc++;
        c++;
    }while(c<6);
    
    printf("EC %d OC %d",ec,oc);
    return 0;
}

/*
18. Write a C Program to Print the Multiplication Table of N
i. E.g. 5 * 1 = 5
ii. 5 * 2 = 10
*/
#include <stdio.h>
int main() {
    int i,c,n;
    printf("Give num for table ");
    scanf("%d",&i);
    
    if(i>0){
        for(n=1;n<11;n++){
            printf("%d * %d = %d\n",i,n,i*n);
        }
        printf("\n");
    }else printf("Invalid");

    return 0;
}

/*
19_1 Patterns
1
1 0
1 0 1
1 0 1 0
*/
#include <stdio.h>

int main() {
    int i,j,n=1;
    
    for(i=1;i<6;i++){
        for(j=1;j<=i;j++){
            if(j%2!=0){
                printf("1 ");
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}
/*
19_2 Patterns
A
B C
D E F
*/
#include <stdio.h>

int main() {
    int j,i,a=65,c=4;
    
    //printf("Enter count ");
    //scanf("%d",c);
    
    for(i=1;i<=c;i++){
        for(j=1;j<=i;j++,a++){
            printf("%c ",a);
        }
        printf("\n");
    }
    
    return 0;
}

/*
19_3 Odd Patterns
    *
  * * *
* * * * *
*/
#include <stdio.h>

int main ()
{
  int i, j, rows = 9;

  for (int i = 1; i <= rows; i++)
    {
        if(i%2!=0){
          for (int j = rows - i; j > 1; j--){
    	  printf(" ");
    	    }
          for (int j = 1; j <= i; j++){
    	  printf("* ");
    	    }
          printf("\n");
        }
    }
}

/*
19_4 Patterns
*
* *
* * *
* *
*
*/
#include <stdio.h>
int main (){
    int i,j,rows;
    printf("rows count ");
    scanf("%d",&rows);

    if(rows%2==0){
        rows++;
    }
    
    for(i=1;i<=rows/2;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=rows/2-1;i>0;i--){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}

/*
19_5 Patterns
1
2 3
4 5 6
*/
#include <stdio.h>
int main (){
    int i,j,rows,num=1;
    printf("rows count ");
    scanf("%d",&rows);
    
    for(i=0;i<rows;i++){
        for(j=0;j<i;j++,num++){
            printf("%d ",num);
        }
        printf("\n");
    }
}

/*
19_6 Patterns
A
A B C
A B C D
A B C D E
*/
#include <stdio.h>

int main() {
    int i,j,a=65;
    
    for(i=1;i<=26;i++){
        for(j=1,a=65;j<=i;j++,a++){
            printf("%c ",a);
        }
        printf("\n");
    }

    return 0;
}
/*
20. WAP program to print below output using for loop
01 02 03 04 05 06 07 08 09 10
11 12 13 14 15 16 17 18 19 20
..............
..............
41 42 43 44 45 46 47 48 49 50
*/
#include <stdio.h>
int main (){
    int num=1;
    for(num=1;num<51;num++){
        if(num%10==0){
            printf("\n");
        }else{
            num<10 ? printf("0%d ",num) : printf("%d ",num);
        }
    }
}

/*
22. Accept 3 numbers from user using while loop and check each numbers
palindrome
*/
#include <stdio.h>

void chkPalin(int n){
    int rev=0,rem=0,origional;
    origional=n;
    while(origional!=0){
        rem = origional % 10;
        //printf("\nrem %d",rem);
        rev = rev * 10 + rem;
        //printf("\nrev %d",rev);
        origional /= 10;
    }
    
    if(n == rev){
        printf("%d is palindrome",n);
    }else{
        printf("%d is NOT palindrome",n);
    }
}
int main (){
    int c=1,n;
    do{
        printf("\nEnter %d num ",c);
        scanf("%d",&n);
        
        chkPalin(n);
        c++;
    }while(c<4);
}

/*
23. C Program to Reverse a Number Using FOR Loop
*/
#include <stdio.h>
int main (){
    int n,origional,rev,rem;
    printf("\nEnter num ");
    scanf("%d",&origional);
    
    for(n=origional;n!=0;n/=10){
        rem = n % 10;
        rev = rev * 10 + rem;
    }
    printf("Reverse %d",rev);
    
    return 0;
}

/*
24. 1 + 2 + 3 + 4 + 5 + ... + n
*/
#include <stdio.h>
int main()
{
    int num,sum=0,i;
    printf("\nEnter count ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++){
        sum+=i;
    }

    printf("%d",sum);
    return 0;
}

/*
25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
*/
#include <stdio.h>
int main()
{
    int num,sum=0,i;
    printf("\nEnter count ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++){
        sum += (i*i);
    }

    printf("%d",sum);
    return 0;
}

/*
26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
*/
#include <stdio.h>
int main()
{
    int num,tsum=0,sum=0,i,j;
    printf("\nEnter count ");
    scanf("%d",&num);
    
    for(i=num;i>0;i--){
        for(j=1;j<=i;j++){
            tsum+=j;
        }
    }

    printf("%d",tsum);
    return 0;
}

/*
27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 .......... n
*/
#include <stdio.h>
int main()
{
    int i,num;
    float sum=0;
    printf("\nEnter count ");
    scanf("%d",&num);
    
    if(num>0){
        for(i=1;i<=num;i++){
            if(i%2 != 0){
                //printf("%f",i/(i+1));
                sum =sum + (float)(i/(i+1));
                printf("\ne%.2f",sum);
            }else{
                sum -= (i/(i+1));
                printf("\no%.2f",sum);
            }
        }
    }

    printf("\n%.2f",sum);
    return 0;
}

/*
28. 1 2 3 6 9 18 27 54...
Nth term = [2 * (N-1)th term], if N is even
           [3/2 * (N-1)th term], if N is odd
*/
#include <stdio.h>

int main()
{
    int i,n,prev;
    printf("\nEnter count ");
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid");
    }
    
    for(i=1;i<=n;i++){
        if(i==1){
        printf("1 ");
        prev=1;
        continue;
        }
        if(i%2==0){
            printf("%d ",2 * prev);
            prev *= 2;
        }else{
            printf("%d ",3 * (prev / 2));
            prev = 3 * (prev / 2);
        }
    }

    return 0;
}
