#include<reg51.h>

sbit led = P2 ^ 0; // led en PORT 2 pin 0

void Delay(void); // funcion para retrasar titilar

void main() 
{
  led = 0; //Salida PORT pin

  while (1) // loop
  {
    led = 1; // Encendido
    Delay();
    led = 0; // Apagado
    Delay();
  }
}

void Delay(void) // el retraso del encendido del led y apagado
{
  int j;
  int i;

  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 10000; j++)
    {
    }
  }
}
