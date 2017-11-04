#include <stdio.h>  
#include <math.h>  
#define EXP 0.00000001  
int main()  
{  
	double a = 0.0;  
	double b = 0.0;  
	double c = 0.0;  
	scanf("%lf%lf%lf",&a,&b,&c);  
	if ((a>=-EXP)&&(a<=EXP))  
	{
		printf("不是一元二次方程\n");  
	}  
	else  
	{  
		double disc = b*b-4*a*c;  

		if(( disc >= -EXP)&&( disc <= EXP))  
		{  
			printf("x = %lf\n",-b/(2*a));  
		}  
		else if ( disc > 0.0)  
		{  
			printf("x1 = x2 %lf, x2 = %lf\n",(-b+sqrt(disc))/(2*a),(-b-sqrt(disc))/(2*a));  
		}  
		else  
		{  
			printf("有两个共轭的复根\n");  
		}  
	}  
	return 0;  
}  
