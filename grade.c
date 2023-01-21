#include<stdio.h>
int main(void) 
{
 int grade1, grade2; 
printf("Enter a numerical grade: "); 
scanf("%d%d", &grade1, &grade2); 
printf("Letter Grade:  ", grade1); 
switch (grade1) 
{ 
case 0: 
case 1: 
case 2: 
case 3: 
case 4: 
case 5: printf("F"); 
break; 
case 6: printf("D"); 
break; 
case 7: printf("C"); 
break; 
case 8: printf("B"); 
break; 
case 9: 
case 10: printf("A"); 
break; 
default: printf("Illegal Grade"); 
break; 
} 
return 0; 
} 