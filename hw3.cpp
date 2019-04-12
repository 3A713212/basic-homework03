#include<stdio.h>
#include<stdlib.h>
int main()
{ 
double h;
double w;
printf("請輸入你的身高(cm): ");
scanf("%lf",&h);

printf("請輸入你的體重(kg): ");
scanf("%lf",&w);

double hm=h/100;
double BMI=w/(hm*hm);
printf("BMI=%lf\n",BMI);


system("PAUSE");
return 0;
}

