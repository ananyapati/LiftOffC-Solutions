# LiftOffC-Solutions
solutions for Lift Off C week 1

Q1)
#include <stdio.h>
int main()
{
int a,b;
printf("Enter first integer a: ");
scanf("%d", &a);
printf("Enter second integer b: ");
scanf("%d", &b);
printf("Sum of the integers %d and %d is %d\n",a ,b , a+b);
printf("Product of the integers %d and %d is %d\n",a ,b , a*b);
printf("Difference of the integers %d and %d is %d\n", a, b, a-b);
printf("Quotient of the integers %.2f and %.2f is %.2f\n",(float)x ,(float)y,
(float)a/b);
printf("The modulo of the integers %d and %d is %d\n",a ,b , a%b);
return 0;
}


Q2)
#include <stdio.h>
int main()
{
float tempc, far;
printf("Enter the temperature in degree Celsius: ");
scanf("%f", &tempc);
far = ((tempc*9)/5) + 32;//> formula to change celcius into fahrenheit is (0°C ×
9/5) + 32 = 32°F
printf("Temperature in fahrenheit is %.2f\n", far);
return 0;
}


Q3)
#include <stdio.h>
int main()
{
int r;
printf("Enter the radius of the circle: ");
scanf("%d", &r);
printf("The diameter of this circle is %d\n", 2*r);
printf("The circumference of this circle is %.2f\n", 2*3.14*(float)r);
printf("The area of this circle is %.2f\n", 3.14*(float)r*(float)r);
return 0;
}


Q4)
#include <stdio.h>
int main()
{
float physics,chemistry,biology,mathematics,computer;
float total = 500;
printf("Enter the marks obtained in physics: ");
scanf("%f", &physics);
printf("Enter the marks obtained in chemistry: ");
scanf("%f", &chemistry);
printf("Enter the marks obtained in biology: ");
scanf("%f", &biology);
printf("Enter the marks obtained in mathematics: ");
scanf("%f", &mathematics);
printf("Enter the marks obtained in computer: ");
scanf("%f", &computer);
float per = (physics+chemistry+biology+mathematics+computer)/total;
if(per >= 0.9)
{
printf("Grade A");
} else if(per >= 0.8)
{
printf("Grade B");
} else if(per >= 0.7)
{
printf("Grade C");
} else if(per >= 0.6)
{
printf("Grade D");
} else if(per >= 0.4)
{
printf("Grade E");
} else if(per < 0.4)
{
printf("Grade F");
}
return 0;
}



Q5)
#include <stdio.h>
int main()
{
char a;
printf("Enter an alphabet: ");
scanf("%c", &a);
switch (a) {
case 'A':
printf("Vowel");
break;
case 'a':
printf("Vowel");
break;
case 'E':
printf("Vowel");
break;
case 'e':
printf("Vowel");
break;
case 'I':
printf("Vowel");
break;
case 'i':
printf("Vowel");
break;
case 'O':
printf("Vowel");
break;
case 'o':
printf("Vowel");
break;
case 'U':
printf("Vowel");
break;
case 'u':
printf("Vowel");
break;
default:
printf("Consonant");
}
return 0;
}



