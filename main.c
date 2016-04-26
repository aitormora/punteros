//
//  main.c
//  Ejer_punteros_13042016
//
//  Created by MDM IOS DEV  on 13/04/16.
//  Copyright (c) 2016 AEG. All rights reserved.
//

#include <stdio.h>
//********* Variables Globales*******
int op;
//********* Variables Globales*******
void menu();
void suma_dos();
//int datos();
int hola(int x, float y, char c);
void pro17();

void Ejer1()
{
    int *punt;
    int x=7;
    int y=5;
    punt=&x;
    *punt=4;
    printf("%d,%d\n",x,y); //¿Qué imprime este printf?
    printf("Asigna a x el valor de punt y muestra cuanto vale x e y\n");
    
   
}

void Ejer2()
{
    int *punt;
    int x=7;
    int y=5;
    punt=&x;
    x=4;
    printf("%d,%d\n",*punt,y);// ¿qué imprime este printf?
    printf("Va al lugar de la memoria y lo asigna a punt e imprime el valor de y\n");
    
    
}

void Ejer3()
{
    int *punt;
    int x=7;
    int y=5;
    punt=&x;
    // printf("%d\n",*punt);
    x=4;
    punt=&y;
    printf("%d, %d\n",*punt,x); //¿Qué imprime este printf?
    printf("Asigna a *punt el valor que esta en la memoria de y muestra el valor de x\n ");
    
}

void Ejer4()
{
    int *punt;
    int x=7;
    int y=5;
    punt=&x;
    // printf("%d\n",*punt);
    *punt=3;
    punt=&y;
    //printf("%d\n",*punt);
    *punt=x;
    //printf("%d\n",*punt);
    x=9;
    printf("%d, %d\n",*punt,x); //¿Qué imprime este printf?
    printf("Asigna a *punt el valor 3( a x le asigna el valor de 3) y a x el valor 9\n");
    
}

void Ejer5()
{
    int *punta, *puntb;
    int x=7;
    int y=5;
    punta=&x;
    *punta=3;
    puntb=&y;
    // printf("%d\n",*puntb);
    *puntb=x;
    x=9;
    printf("%d, %d\n",*puntb,x); //¿Qué imprime este printf?
    printf("Asigna a puntb el valor de 'y' y luego lo sustituye por el valor de x; a x da el valor 9\n");
   
    
}

void Ejer6()
{
    int *punta, *puntb;
    int x=7;
    int y=5;
    punta=&x;
    *punta=3;
    //printf("%d\n",y);
    puntb=&y;
    
    *puntb=x;
    x=9;
    printf("%d, %d\n",*puntb, *punta); // ¿qué imprime?
    printf("Muestra el valor de *puntb segun vale A(habia sido asignado por punta que valia 3;Muestra el valor de *punta segun lo que valga x(coge el valor desde su memoria)\n");
    printf("aa");
   
    
}

void Ejer7()
{
    int *punta, *puntb;
    int x=7;
    int y=5;
    punta=&x;
    *punta=3;
    puntb=&y;
    *puntb=x;
    x=9;
    puntb=punta;
    printf("%d, %d\n",*puntb, y); // ¿qué imprime?
    printf("Asigna a puntb el valor de X; Asigna a 'y' el valor de *punta\n");
    
    
}

void Ejer8()
{
    int *punt,i;
    int x[5]={1,2,3,4,5};
    punt=x;
    *punt=9;
    for(i=0;i<5;i++)
        printf("%d,\n",x[i]); // ¿qué imprime?
    printf("Asigna a la posicion 0 del array el valor de *punt, y muestra los 5 numeros");
    
    
}

void Ejer9()
{
    int *punt,i;
    int x[5]={1,2,3,4,5};
    punt=&x[0];
    *punt=9;
    punt[3]=7;
    for(i=0;i<5;i++)
        printf("%d,\n",x[i]); // ¿qué imprime?
    printf("Asigna a la posición 0 el valor 9 y a la posicion 3 el valor 7");
   
    
}
void Ejer10()
{
    int *punt,i;
    int x[5]={1,2,3,4,5};
    punt=x;
    *x=11;
    *(punt+3)=9 ;
    for(i=0;i<5;i++)
        printf("%d,\n",x[i]); // ¿qué imprime?
    printf("Asigna a punt el valor de x y a x asigna en la posicion 0 el valor 11 y asigna a x en la posicion 3 el valor 9\n");

    
}

void Ejer11()
{
    int *punt,i;
    int x[5]={1,2,3,4,5};
    punt=x;
    *(punt+2)=9;
    *(x+3)=7 ;
    punt[1]=11 ;
    for(i=0;i<5;i++)
        printf("%d\n",*(punt+i));//¿Qué imprime?
    printf("Asigna a punt el valor de x y a punt asigna en la posicion 2 el valor 9 y asigna a x en la posicion 3 el valor 7; Asigna a punt en la posicion 1 el valor 11\n");

    
}

void Ejer12()
{
    int *punt,i;
    int x[5]={1,2,3,4,5};
    punt=x+4;
    //printf("%d\n",*punt);
    *(punt-2)=9;
    punt--;
    *(punt)=7 ;
    punt[1]=11 ;
    for(i=0;i<5;i++)
        printf("%d,\n",*(x+i)); // ¿qué imprime?
    printf("Le dice a punt que empiece en x+4; asigna en la posicion 3 el valor 9, resta una posicion y asigna el 7,asigna a la posicion 5 del puntero el valor 11\n");
    
    
}

void Ejer13()
{
    int *punt,i;
    int x[5]={1,2,3,4,5};
    punt=&x[0]+3;
    *(punt-2)=9;
    punt--;
    *(punt)=7 ;
    punt[1]=11 ;
    punt=x;
    for(i=0;i<5;i++)
        printf("%d,\n",punt[i]); // ¿qué imprime?
    printf("Asigna a punt los valores que esta en X y empieza a operar desde la posicion 3\n");

    
}

void Ejer14()
{
    
    int x,y,z;
    x=3;
    y=10;
    z=15;
    suma_dos(&x, &y, &z);
    printf("%d %d %d\n",x, y, z);// qué imprimirá??
    printf("Suma a dos a los valores que hay en la memoria de las variables\n");
    
    
}
void datos15(int *x, float *y, char *c)
{
    *x=8;
    *y=4.2;
    *c='g';
}
void Ejer15()
{
    int x=9;
    float y=44.6;
    char c='a';
    datos15 (&x, &y, &c);
    printf("%d %.2f %c\n",x, y, c);// qué imprimirá??
    printf("Asigna a los variables x y c,los valores que manda por función.\n");
    
    
}
void datos16(int *x, float *y, char *c)
{
    printf("%d %f %c\n",x, y, c);
    *x=8;
    *y=4.2;
    *c='g';
}

void Ejer16()
{
    int x=9;
    float y=44.6;
    char c='a';
    datos16(&x, &y, &c);
    printf("%d %.2f %c\n",x, y, c);// qué imprimirá??
    printf("Asigna a los variables x y c,los valores que manda por función.\n");
   
    
}
void datos17(int x, float y, char c)
{
    printf("(Funcion datos) %d %.2f %c\n",x, y, c);
    x=8;
    y=4.2;
    c='g';
    //printf("(Funcion datos) %d %.2f %c\n",x, y, c);
}

void Ejer17(void)
{
    
        int x=9;
        float y=44.6;
        char c='a';
        datos17 (x, y, c);
        printf("%d %.2f %c\n",x, y, c);// qué imprimirá??
    printf("Asigna los varoles a x, y ,c; Pasa por parametros a la funcion y los muestra por pantalla\n");

}
int datos18(int x, float y, char c)
{
    printf("Funcion datos: %d %f %c\n",x, y, c);
    x=8;
    y=4.2;
    c='g';
    return x;
}

void Ejer18(void)
{
        int x=9;
        float y=44.6;
        char c='a';
        x=datos18 (x, y, c);
        printf("%d %.2f %c\n",x, y, c);// qué imprimirá??
    printf("Asigna valores a las variables, y llama a la funcion mediante la variable x y los muestra por pantalla");
    
  
    
}

char datos19(int *x, float *y, char *c)
{
    
    *x=8;
    *y=4.2;
    *c='g';
    printf("%d %d%s\n",x, y, c);
    return 'h';
}

void Ejer19()
{
    int x=9;
    float y=44.6;
    char c='a';
    c=datos19 (&x, &y, &c);
    printf("%d %f %c\n",x, y, c);// qué imprimirá??
    printf("Imprime los valores de la funcion datos19, y en la variable c imprime el return");
 

}

void suma_dos(int *x,int *y,int *z)
 {
 *x=*x+2;
 *y=*y+2;
 *z=*z+2;
 }

int hola (int x, float y, char c)
{
    printf("%d %f %c\n",x, y, c);
    x=8;
    y=4.2;
    c='g';
    return x;
}



void menu()
{
    do
    {
        printf("Elige del 1 al 19 el ejercicio que quieres ver\n");
        scanf("%i",&op);
        switch (op) {
            case 1:
                Ejer1();
                break;
            case 2:
                Ejer2();
                break;
            case 3:
                Ejer3();
                break;
            case 4:
                Ejer4();
                break;
            case 5:
                Ejer5();
                break;
            case 6:
                Ejer6();
                break;
            case 7:
                Ejer7();
                break;
            case 8:
                Ejer8();
                break;
            case 9:
                Ejer9();
                break;
            case 10:
                Ejer10();
                break;
            case 11:
                Ejer11();
                break;
            case 12:
                Ejer12();
                break;
            case 13:
                Ejer13();
                break;
            case 14:
                Ejer14();
                break;
            case 15:
                Ejer15();
                break;
            case 16:
                Ejer16();
                break;
            case 17:
                Ejer17();
                break;
            case 18:
                Ejer18();
                break;
            case 19:
                Ejer19();
                break;
                
                
            default:
                printf("Seleciona un opcion correcta\n");
                break;
        }
        
    }while(( op != 3));
    
    
}

int main(int argc, const char * argv[])
{
    menu();
    return  0;
    
}

