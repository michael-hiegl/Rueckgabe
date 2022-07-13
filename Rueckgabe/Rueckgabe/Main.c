//**************************************************************************
//**************************************************************************
//**
//**	Projekt: Rueckgabe	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 11.01.2022 17:57:18
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************

double Maxvalue(double d_W1, double d_W2)
{
	if (d_W1 > d_W2)
	{
		return d_W1;
	}
	else
	{
		return d_W2;
	}
}


int main(void)
{
	//Variables
	double d_Wert1, d_Wert2;
	double d_Maxwert = 0;



	//Code
	scanf("&lf", &d_Wert1);
	scanf("&lf", &d_Wert2);

	d_Maxwert = Maxvalue(d_Wert1, d_Wert2);

	printf("Der maximale Wert ist %lf", d_Maxwert);


	getchar();
	fflush(stdin);
	getchar();
	return 0;
}