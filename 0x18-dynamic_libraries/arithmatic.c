#include <stdio.h>
#include <stdlib.h>
#include "list.h"
 
void connect()
{
    printf("Connected to C extension...\n");
}
 
//return modules of ta numbers
int mod(int a, int b)
{
    int nMod = a % b; 
    return nMod;
}

//divide two numbers and return value
int divM(int a, int b)
{
	int nDiv = a / b;
	return nDiv;
}

//multiply two numbers
int mul(int a, int b)
{
	int nMul = a * b;
	return nMul;
}
 
//add two number and return value
int add(int a, int b)
{
    int nAdd = a + b;
    return nAdd;
}

//subtract two numbers
int sub(int a, int b)
{
	int nSub = a - b;
	return nSub;
}
