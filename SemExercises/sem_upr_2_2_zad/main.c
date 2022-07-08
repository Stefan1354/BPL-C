
#include <stdio.h>
#include <stdlib.h>

//2.Напишете програма, която отпечатва триъгълник от 55 звездички:
//*
//
//**
//
//***
//
//****
//
//*****
//
//******
//
//*******
//
//********
//
//*********
//
//**********

int main()
{
    int row = 0;
    int col = 0;
    int totalRows = 10;

    for (row=1; row<=totalRows; row++)
    {
        for (col=1; col<=row; col++)
        {
            printf("* ");
        }
    }   printf("\n");
    return 0;
}
