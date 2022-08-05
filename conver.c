/*
    Conversion de grados Fahrenheit a celcius y viceversa
    date 04/08/2022
    Axel Sanchez 
*/
#include <stdio.h>

int main (){
    float celcius;
    float fahrenheit;
    float tfar;
    float tcel;

    printf ("Inserta tus grados celcius:");
    scanf ("%f",&celcius);
    printf ("Inserte  tus grados en Fahrenheit:");
    scanf ("%f",&tfar);
    fahrenheit = celcius * 1.8 + 32;
    tcel = (tfar-32) / 1.8;

    printf ("%.2f Grados Fahrenheit\n",fahrenheit);
    printf ("%.2f Grados Celcius \n",tcel);
    
    return 0;
}