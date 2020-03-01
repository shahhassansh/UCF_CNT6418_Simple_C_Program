#include <stdio.h>
int main()
{
    float age;
    printf("Please enter age in years: ");
	scanf("%f", &age);  
	float height;
    printf("Please enter height in inches: ");
    scanf("%f", &height); 
	float weight;
    printf("Please enter weight: ");
    scanf("%f", &weight); 	
	
	if (age < 0)
		printf("Age value is incorrect\n");
	else if (age >= 0){
	float agem = age * 12;
	printf("Age in Month  = %f\n",agem);
	}
	
	if (height <= 0)
	printf("Height value is incorrect\n");
	else if (height > 0) {
    float heightf = height * 0.0833333;
	printf("Height in feet = %f\n",heightf);
	}
	
	if (height <= 0 && weight <= 0)
	printf("Incorrect Weight Value\n");
	else if (weight <= 0) 
		printf("Incorrect Weight Value\n");
	else if (height > 0 && weight >0){
	float BMI = (703 * weight) / (height * height);
	printf("BMI = %f\n",BMI);	
	}
    return 0;
}