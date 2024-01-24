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