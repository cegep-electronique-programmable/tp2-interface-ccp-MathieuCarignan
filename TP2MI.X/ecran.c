#include "ecran.h"
#include "mcc_generated_files/eusart1.h"
#include"mcc_generated_files/eusart2.h"

void ecranAllume(void)
{
    EUSART2_Write(0xFE);
    EUSART2_Write(0x41);
}

void ecranEteint(void)
{
    EUSART2_Write(0xFE);
    EUSART2_Write(0x42);
}

void curseurPosition(int position)
{
    EUSART2_Write(0xFE);
    EUSART2_Write(0x45);
    EUSART2_Write(position);
}
void videEcran(void)
{
    EUSART2_Write(0xFE);
    EUSART2_Write(0x51);
}

void ecrireCaractere(char caractere)
{
    EUSART2_Write(caractere);
}

void BR (char BaudRate)
{
    EUSART2_Write(0xFE);
    EUSART2_Write(0x61);
    EUSART2_Write(BaudRate);
}