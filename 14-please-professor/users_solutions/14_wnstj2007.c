#include <stdio.h>

int main()
{
float n;
scanf("%f", &n);
if(n>=0 && n<1)
{
printf("F");
}
else if(n<1.5)
{
printf("D0");
}
else if(n<2)
{
printf("D+");
}
else if(n<2.5)
{
printf("C0");
}
else if(n<3)
{
printf("C+");
}
else if(n<3.5)
{
printf("B0");
}
else if(n<4)
{
printf("B+");
}
else if(n<4.5)
{
printf("A0");
}
else
{
printf("A+");
}
}