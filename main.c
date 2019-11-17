#include "myMath.h"
#include <stdio.h>
int main(){
double input=0;
float func1=0,func2=0,func3=0;

printf("please enter a real number: ");
scanf( "%lf",&input);
func1=sub((float) add(Exp((int)input),(float)Pow(input,3)),(float)2);
func2=add((float)mul((float)3,(float)input),(float)mul((float)2,(float)Pow(input,2)));
func3=sub((float)(div((float)mul((float)4,(float)Pow(input,3)),(float)5)),(float)(mul((float)2,(float)input)));
printf("The value of f(x) = 'e^x+x^3-2' at the point: %.4lf is: %.4f\n",input,func1);
printf("The value of f(x) = '3x+2x^2' at the point: %.4lf is: %.4f\n",input,func2);
printf("The value of f(x) = '(4x^3)/5-2x' at the point: %.4lf is: %.4f\n",input,func3);

}
