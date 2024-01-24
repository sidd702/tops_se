/******************************************************************************
1 Display This Information using printf
a. Your Name
b. Your Birth date
c. Your Age
d. Your Address
*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Siddharth\n28 11 1998\n 25\nBopal Ahmedabad");

    return 0;
}

/******************************************************************************
Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo
*******************************************************************************/
#include <stdio.h>
int main ()
{
  int op = 1;
  float v1, v2, res;
  printf ("Val1 ");
  scanf ("%f", &v1);
  printf ("Val2 ");
  scanf ("%f", &v2);
  printf ("1Add 2Sub 3Mul 4Div 5mod ");
  scanf ("%d", &op);
  if (op == 1)
    res = v1 + v2;
  if (op == 2)
    res = v1 - v2;
  if (op == 3)
    res = v1 * v2;
  if (op == 4)
    res = v1 / v2;
//  if (op == 5)
  //  res = v1 % v2;
  printf ("Result %f", res);
  return 0;
}

/******************************************************************************
WAP to Find Area And Circumference of Circle
*******************************************************************************/
#include <stdio.h>

int main()
{
    float r;
    printf("Enter Radius ");
    scanf("%f",&r);
    printf("Area %f Circumference %f",3.14*r*r,2*3.14*r);
    return 0;
}
/* Find Area of Square formula : a = a2
*/
#include <stdio.h>

int main() {
    float s;
    printf("Length ");
    scanf("%f",&s);
    printf("Area %f",s*s);
    return 0;
}y
/*
Find Area of Cube formula : a = 6a2
*/
#include <stdio.h>

int main() {
    float s;
    printf("Length ");
    scanf("%f",&s);
    printf("Area %f",6*s*s);
    return 0;
}
/*
Find area of Triangle Formula : A = 1/2 × b × h
*/
#include <stdio.h>

int main() {
    float b,h;
    printf("b ");
    scanf("%f",&b);
    printf("h ");
    scanf("%f",&h);
    printf("Area %f",0.5*b*h);
    return 0;
}
/*
Find area of Rectangle Formula : A=wl
*/
#include <stdio.h>

int main() {
    float w,l;
    printf("w ");
    scanf("%f",&w);
    printf("l ");
    scanf("%f",&l);
    printf("Area %f",w*l);
    return 0;
}
/*
Find circumference of Rectangle formula : C = 4 * a
*/
#include <stdio.h>

int main() {
    float a;
    printf("w ");
    scanf("%f",&a);
    printf("Area %f",4*a);
    return 0;
}
/*
10.find the area of a rectangular prism formula : A=2(wl+hl+hw)
*/
#include <stdio.h>

int main() {
    float w,l,h;
    printf("w ");
    scanf("%f",&w);
    printf("l ");
    scanf("%f",&l);
    printf("h ");
    scanf("%f",&h);
    printf("Area %f",2*(w*l+h*l+h*w));
    return 0;
}
/*
11.Find circumference of square formula : C = 4 * a
*/
#include <stdio.h>

int main() {
    float a;
    printf("a ");
    scanf("%f",&a);
    printf("Area %f",4*a);
    return 0;
}
/*
12. Accept number of students from user. I need to give 5 apples to each
student. How many apples are required?
*/
#include <stdio.h>

int main() {
    int a;
    printf("No of Students ");
    scanf("%d",&a);
    printf("Total Apple Req %d",a*5);
    return 0;
}

/*
13. Find character value from asci
*/
#include <stdio.h>
int main() {
    int i;
    printf("Enter ASCII ");
    scanf("%d",&i);
    printf("Char %c ASCII %d", i, i);
    return 0; 
}

/*
14.Find ascii value of given number
*/
#include <stdio.h>
int main() {
    char c;
    int i;
    printf("Enter Int ");
    scanf("%d",&i);
    printf("ASCII %c",i); 
    return 0; 
}

/*
15.Convert school’s name in abbreviated form
*/
#include <stdio.h>
int main() {
    char sch[3];
    printf("Enter Name ");
    scanf("%s",&sch);
    printf("Sch %s",sch); 
    return 0; 
}
/*
16.Convert country’s name in abbreviate form
*/
#include <stdio.h>
int main() {
    char c[30];
    printf("Enter Name ");
    scanf("%s",&c);
    printf("Country %c%c",c[0],c[1]); 
    return 0; 
}
/*
17. Calculate person’s insurance premium based on salary
*/
#include <stdio.h>
int main() {
    float s;
    printf("Enter Salary ");
    scanf("%f",&s);
    printf("Premium %f",s/10); 
    return 0; 
}
/*
18. Calculate person’s Annual salary
*/
#include <stdio.h>
int main() {
    float s;
    printf("Enter Monthly Salary ");
    scanf("%f",&s);
    printf("Annual salary %f",s*12); 
    return 0; 
}
/*
19.Calculate compound interest
CI = P(1 + r/n)- P
n is frequency or no. of  times the interest is compounded annually
t is the overall tenure
*/
#include <stdio.h>
#include <math.h>
int main() {
    int n=1,m;
    float r=5.5,s;
    printf("Enter Amt ");
    scanf("%f",&s);
    printf("Enter Months ");
    scanf("%d",&m);
    printf("Cmp Int of %d Months is %f",m,s*(1+(r/n))-s); 
    return 0; 
}
/*
20. Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary
*/
#include <stdio.h>
#include <math.h>
int main() {
    float s;
    printf("Enter Sal ");
    scanf("%f",&s);
    printf("Salary after ins pre %f\n",s=s-s/10);
    printf("Salary after loan pre %f",s=s-s/10);
    return 0; 
}
/*
21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable
*/
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter a ");
    scanf("%d",&a);
    printf("Enter b ");
    scanf("%d",&b);
    a=a+b;//1 = 1+2
    b=a-b;
    a=a-b;
    printf("a %d b %d",a,b);
    return 0; 
}
/*
22. Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P
*/
#include <stdio.h>
int main() {
    int t;
    float r=5.5,p;
    printf("Enter Amt ");
    scanf("%f",&p);
    printf("Enter ROI ");
    scanf("%f",&r);
   printf("Enter Months ");
    scanf("%d",&t);
    printf("Cmp Int of %f Amt is %f",p,p*(1+(r/100)*t)); 
    return 0; 
}
/*
23. WAP to calculate swap 2 numbers with using of multiplication and division.
*/
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter a ");
    scanf("%d",&a);
    printf("Enter b ");
    scanf("%d",&b);
    
    //3 = 3 * 4        12 4
    a = a * b;
    //4 = a12 / b4     12 3
    b = a / b;
    //a12 = 12 / b4    4 3
    a = a / b;
    printf("a %d b %d",a,b);
    return 0;
}
/*
24.Accept 5 employees name and salary and count average and total salary
*/
#include <stdio.h>
int main() {
    int i,c = 0;
    char empName[5][10];
    float tSal =0,aSal=0,sal[5];
    
    while(c<5){
        printf("Enter Emp Name ");
        scanf("%s",&empName[c][0]);
        printf("Enter Emp Sal ");
        scanf("%f",&sal[c]);
        c++;
    }

    for (i = 0; i < 5; i++) {
        printf("%s\t %f\n", empName[i],sal[i]);
        tSal+=sal[i];
    }
    aSal=tSal/5;
    printf("Total Sal %f Avg Sal %f",tSal,aSal);
    return 0;
}
/*
25.Accept 5 expense from user and find average of expense
*/
#include <stdio.h>
int main() {
    int i,c = 1;
    float tExp =0,aExp=0,exp[5];
    
    while(c<6){
        printf("Enter %d User exp ",c);
        scanf("%f",&exp[c]);
        tExp+=exp[c];
        c++;
    }
    aExp=tExp/5;
    printf("Total exp %f Avg exp %f",tExp,aExp);
    return 0;
}
/*
26.Convert temperature Fahrenheit to Celsius
F = °C × (9/5) + 32
*/
#include <stdio.h>
int main() {
    float f =0;

    printf("Enter F ");
    scanf("%f",&f);
    printf("\nC = %f", ((f- 32)*9)/5);
    return 0;
}
/*
27.Convert days into months
*/
#include <stdio.h>
int main() {
    int d=0,m;

    printf("Enter Days ");
    scanf("%d",&d);
    printf("\nDays %d Months %d",d,d/30);
    return 0;
}
/*
28.Convert years into days and months
*/
#include <stdio.h>
int main() {
    int y,d,m=0;

    printf("Enter Years ");
    scanf("%d",&y);
    
    printf("\nYears %d Days %d Months %d",y,y*12,y*12*30);
    return 0;
}
/*
29.Convert minutes into seconds and hours
*/
#include <stdio.h>
int main() {
    float h,s,m=0;

    printf("Enter Minutes ");
    scanf("%f",&m);
    printf("\nMins %f Hour %0.2f Sec %0.2f",m,m/60,m*60);
    return 0;
}
/*
30. WAP to convert years into days and days into years
*/
#include <stdio.h>
int main() {
    float y,d;

    printf("Enter Years ");
    scanf("%f",&y);
    printf("Years %f Days %f",y,y*365);
    
    printf("\nEnter Days ");
    scanf("%f",&d);
    printf("Days %f Years %.2f",d,d/365);
    return 0;
}
/*
31. Convert kilometers into meters
*/
#include <stdio.h>
int main() {
    float k,m;

    printf("Enter Kms ");
    scanf("%f",&k);
    printf("Km %f Met %f",k,k*1000);

    return 0;
}

/*
32. Accept 2 numbers and find out its sum check it size
*/
#include <stdio.h>
int main() {
    int a,b;

    printf("Enter a ");
    scanf("%d",&a);
    printf("\nEnter b ");
    scanf("%d",&b);
    
    printf("a %d b %d sum %d size %d",a,b,a+b, sizeof(a+b));

    return 0;
}
/*
33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
*/
#include <stdio.h>
#include<math.h>
int main() {
    int a;a
    printf("Enter a ");
    scanf("%d",&a);
    printf("N^1 %d, N^2 %d, N^3 %d",a,a*a,a*a*a);

    return 0;
}
/*
1. Write a C program to accept two integers and check whether they are equal or not
*/
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter a ");
    scanf("%d",&a);
    printf("Enter b ");
    scanf("%d",&b);
    if(a==b)
        printf("Eq");
    else
        printf("Not Eq");
    return 0;
}
/*
2. Write a C program to read the value of an integer m and display the value of
n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0
*/
#include <stdio.h>
int main() {
    int a;
    printf("Enter a ");
    scanf("%d",&a);
    if(a>0)
        printf("%d > 0",a);
    else if(a<0)
        printf("%d < 0",a);
    else
        printf("0");
    return 0;
}
/*
3 WAP to check if the given year is a leap year or not.
*/
#include <stdio.h>
int main() {
    int y;
    printf("Enter year ");
    scanf("%d",&y);
    if(y>0 && y%4==0)
        printf("Leap Year");
    else
        printf("Not Leap Year");
    return 0;
}
/*
5. Check Number Is Positive or Negative
*/
#include <stdio.h>
int main() {
    int a;
    printf("Enter a ");
    scanf("%d",&a);
    if(a>=0)
        printf("%d Positvie",a);
    else if(a<0)
        printf("%d Negative",a);

    return 0;
}

/*
6. Find the Character Is Vowel or Not
*/
#include <stdio.h>
int main() {
    int i = 0;
    char c,v[5]={'a','e','i','o','u'};
    printf("Enter char ");
    scanf("%c",&c);
    while(i < 5){
        if(c==v[i]){
            printf("Vowel");
            break;
        }else{
            i++;
        }
    }
    if(i==5)
        printf("Not Vowel");

    return 0;
}
/*
7. Accept marks from user and check pass or fail
*/
#include <stdio.h>

int main()
{
    int m;
    printf("Enter Marks ");
    scanf("%d",&m);
    if(m>0 && m<101){
        if(m>70){
            printf("Pass");
        }else{
            printf("Fail");
        }
    }else{
        printf("Invalid");
    }
    return 0;
}

/*
8. WAP to accept the height of a person in centimeters and categorize the
person according to their height.
*/
#include <stdio.h>
int main() {
    int h = 0;
    printf("Enter height ");
    scanf("%d",&h);
    if(h>180)
        printf("Tall");
    else if(h<=0)
        printf("Invalid");
    else
        printf("Short");
    return 0;
}

/*
9. C Program to Check Uppercase or Lowercase or Digit or Special
Character

32 to 47 Special
48 to 57 digit
58 to 64 Spec
65 to 90 ABC..Z
91 to 96 Spec
97 to 122 abc..z
123 to 127 spec
*/
#include <stdio.h>
int main() {
    char c;
    int i;
    printf("Enter Char ");
    scanf("%c",&c);
    printf("Char %c ASCII %d\n", c, c);
    i = (int)c;
    if(i>=32 && i<=47)
        printf("Spec Sym");
    else if(i>=48 && i<=57)
        printf("Digit Sym");
    else if(i>=65 && i<=90)
        printf("Cap Alpha");
    else if(i>=91 && i<=96)
        printf("Spec Sym");
    else if(i>=97 && i<=122)
        printf("Small Alpha");
    else if(i>=123 && i<=127)
        printf("Spec Sym");
    
    return 0;
}

/*
10. WAP to check whether a number is negative, positive or zero.
*/
#include <stdio.h>
int main() {
    int a;
    printf("Enter a ");
    scanf("%d",&a);
    if(a>=0)
        printf("%d Positvie",a);
    else if(a<0)
        printf("%d Negative",a);

    return 0;
}

/*
11. WAP to find number is even or odd using ternary operator
*/
#include <stdio.h>
int main() {
    int a;
    printf("Enter a ");
    scanf("%d",&a);
    
    a%2==0 ? printf("Even") : printf("Odd");
    return 0;
}

/* 12.WAP to find maximum number among 3 numbers using ternary operator
*/
#include <stdio.h>
int main() {
    int a,b,c,max;
    printf("Enter a ");
    scanf("%d",&a);
    printf("Enter b ");
    scanf("%d",&b);
    printf("Enter c ");
    scanf("%d",&c);

    max= (a>b) ? (a>c ? a : c) : (b>c ? b : c);
    
    printf("Max %d",max);
    return 0;
}
/* 13.WAP to find minimum number among 3 numbers using ternary operator
*/
#include <stdio.h>
int main() {
    int a,b,c,max;
    printf("Enter a ");
    scanf("%d",&a);
    printf("Enter b ");
    scanf("%d",&b);
    printf("Enter c ");
    scanf("%d",&c);

    max= (a<b) ? (a<c ? a : c) : (b<c ? b : c);
    
    printf("Max %d",max);
    return 0;
}
/* 14.WAP to find the largest of three numbers.
*/
#include <stdio.h>
int main() {
     int a,b,c,max;
    printf("Enter a ");
    scanf("%d",&a);
    printf("Enter b ");
    scanf("%d",&b);
    printf("Enter c ");
    scanf("%d",&c);

    max= (a>b) ? (a>c ? a : c) : (b>c ? b : c);
    
    printf("Max %d",max);
    return 0;
}
/* 15. Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible.
*/
#include <stdio.h>
int main() {
     int m,p,c,total,mp;
    printf("Enter Math Mark ");
    scanf("%d",&m);
    printf("Enter Phy Mark ");
    scanf("%d",&p);
    printf("Enter Chem MArk ");
    scanf("%d",&c);

    total = m+p+c;
    mp = m + p;
    
    if( (m>=65 && p>=55 && c>=50) && (total>=190 || mp>=140) ){
        printf("Eligble");
    }else
        printf( "Not Eligble");
    return 0;
}

/* 16. Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
*/
#include <stdio.h>
int main() {
    int t;
    printf("Enter Temp ");
    scanf("%d",&t);
    
    if(t<=0){
        printf("Freezing weather");
    }else if(t> 0 && t<10){
        printf( "Very Cold weather");
    }else if(t>= 10 && t<20){
        printf( "Cold weather");
    }else if(t>= 20 && t<30){
        printf( "Normal in Temp");
    }else if(t>= 30 && t<40){
        printf( "It is Hot");
    }else if(t>= 40){
        printf( "Very Hot");
    }
    return 0;
}
/* 17. Write a C program to check whether a triangle can be formed with the given
values for the angles.
*/
#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter a ");
    scanf("%d",&a);
    printf("Enter b ");
    scanf("%d",&b);
    printf("Enter c ");
    scanf("%d",&c);
    
    if((a+b > c) && (a+c>b) && (c+b>a))
        printf("Triangle can be formed");
    else
        printf("Triangle can NOT be formed");
    
    return 0;
}
/* 18. Write a C program to calculate profit and loss on a transaction
*/
#include <stdio.h>
int main() {
    int b,s;
    printf("Enter buy price ");
    scanf("%d",&b);
    printf("Enter sell price ");
    scanf("%d",&s);
    
    if(b>s)
        printf("Loss of %d",b-s);
    else
        printf("Profit of %d",s-b);
    
    return 0;
}
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
    
    if(bl>800)
        bl= bl*18/100;
    printf("Bill Amt %.2f",bl);
        
    
    return 0;
}
/*31 Write a program in C to read any Month Number in integer and display the
number of days for this month.
*/
#include <stdio.h>
int main() {
    int m;
    printf("Enter m ");
    scanf("%d",&m);
    if(m>12)
        printf("Invalid");
    else if(m%2==0){
        printf("30 Days");
    }else
        printf("31 Days");
    
    return 0;
}
/* 32. Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%\
*/
#include <stdio.h>
int main() {
    int s;
    printf("Enter s ");
    scanf("%d",&s);
    if(s<=10000)
        printf("Sal %d",s+(s*20*80/10000));
    else if(s>10000 && s<=20000){
        printf("Sal %d",s+(s*25*90/10000));
    }else if(s>20000)
        printf("Sal %d",s+(s*30*95/10000));
    return 0;
}

/* 33. WAP to input the week number and print week day
*/
#include <stdio.h>
int main() {
    int d;
    char * w = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
    printf("Enter Day ");
    scanf("%d",&d);
    if(d>0 && d<=7){
        printf("%s",w[d-1]);
    }else
        printf("Invalid");
    return 0;
}

/* 35. Accept the input month number and print number of days in that month.
*/
#include <stdio.h>
int main() {
    int m;
    printf("Enter m ");
    scanf("%d",&m);
    if(m>12)
        printf("Invalid");
    else if(m%2==0){
        printf("30 Days");
    }else
        printf("31 Days");
    return 0;
}

36Similar

/* 37. WAP to show
i. Monday to Sunday using switch case
*/
#include <stdio.h>

int
main ()
{
  int d = 0;
  printf ("Enter day ");
  scanf ("%d", &d);
  switch (d)
    {
    case 1:
      printf ("Monday");
      break;
    case 2:
      printf ("Tuesday");
      break;
    case 3:
      printf ("Wednesday");
      break;
    case 4:
      printf ("Thursday");
      break;
    case 5:
      printf ("Friday");
      break;
    case 6:
      printf ("Saturday");
      break;
    case 7:
      printf ("Sunday");
      break;
    }
  return 0;
}
