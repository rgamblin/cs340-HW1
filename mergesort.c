/************************************************
 * Author: Rodger L. Gamblin
 * File Name: mergesort.c
 * Description: This is a program that takes an 
 * array of numbers from a file called data.txt
 * and sorts the numbers therein using mergesort 
 *
 *
 *
 * 
 ************************************************/ 



#include <stdio.h>


int main()
{
	int num;
	int num2;
	FILE * data;
	FILE * merge;

	merge = fopen ("merge.txt","w");
	data = fopen ("data.txt","r");
	
	fscanf (data, "%d", &num);
	printf ("%d\n", num);
	fprintf (merge, "%d", num);
	fclose (merge);
	merge = fopen ("merge.txt","r");
	fscanf (merge, "%d", &num2);
	printf ("%d\n", num2);

	fclose(data);
	fclose(merge);
	
	return 0;
}


