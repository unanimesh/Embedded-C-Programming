/*
 * main.c
 *
 *  Created on: 21-Jun-2026
 *      Author: animesh
 */

#include<stdio.h>

int main()
{
	double charge, chargeElectrons;

	printf("Enter the value of charge: \n");
	scanf("%lf",&charge);

	printf("Enter the value of charge Electrons: \n");
	scanf("%le", &chargeElectrons);

	printf("Total numbers of electrons is = %le\n",(charge/chargeElectrons)-1);
	printf("Total numbers of electrons is = %lf\n",(charge/chargeElectrons)-1);

	return 0;

}
