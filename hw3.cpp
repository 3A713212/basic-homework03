#include<stdio.h>
#include<stdlib.h>
int main()
{ 
double h;
double w;
printf("�п�J�A������(cm): ");
scanf("%lf",&h);

printf("�п�J�A���魫(kg): ");
scanf("%lf",&w);

double hm=h/100;
double BMI=w/(hm*hm);
printf("BMI=%lf\n",BMI);


system("PAUSE");
return 0;
}

