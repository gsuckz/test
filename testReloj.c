#include <unity.h>
#include <stdbool.h>
#include "reloj.h"

#define HORAS 10
#define MINUTOS 20
#define TICKS TICKS_SEG*60*(HORAS*60+MINUTOS)

bool alarma(bool estado_n,bool change){
    static bool estado = 0;
    if (change) estado = estado_n;
    return estado;
}

void test_reloj_corriendo(){
    uint8_t ESPERADO[6] = {1,0,2,0,0,0};
    uint8_t RESULTADO[6];
    Reloj * reloj = relojInit(alarma);
    for (double i=0; i<=TICKS; i++) relojTick(reloj);
    relojTime(reloj,RESULTADO);
    TEST_ASSERT_EQUAL_UINT8_ARRAY(ESPERADO,RESULTADO,6);
    relojKill(reloj);
}


void test_alarm_set(){
    Reloj * reloj
    uint8_t ESPERADO[6] = {1,0,2,0,0,0};
    uint8_t RESULTADO[6];
    Reloj * reloj = relojInit(alarma);
}   