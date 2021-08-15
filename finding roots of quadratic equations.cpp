#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	float root1,root2,imaginary;
	float disc;
	printf("enter roots of quadratic equation ax^2+bx+c\n");
	scanf("%f%f%f",&a,&b,&c);
	disc=(b*b)-(4*a*c);
	printf("%f is discriminant\n",disc);
	switch(disc>0)
	{
		case 1:
		root1=(-b+sqrt(disc))/(2*a);
		root2=(-b-sqrt(disc))/(2*a);
		printf("two real and distinct roots are %f and %f\n",root1,root2);
		break;
		case 0:	
	switch(disc<0){
    case 1:
		root1=root2=-b/(2*a);
		imaginary=(sqrt(-disc))/(2*a);
		printf("two distinct complex roots %.2f + i%.2f and %.2f - i%.2f",root1,imaginary,root2,imaginary);
		break;
	case 0:

				root1=root2=-b/(2*a);
				printf("two equal and real roots exists %.2f  and %.2f",root1,root2);
				break;
	}
	}
	return 0;
}
