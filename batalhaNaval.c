#include <stdio.h>

#define linha 11
#define coluna 11

int main (){

    //Variável da matriz de linha e coluna com valor 0
    int matriz [linha][coluna] = {0};

    //Impressão dos návios em linha e coluna
    matriz [2][4] =3 ;
    matriz [2][5] =3 ;
    matriz [2][6] =3 ;

    matriz [5][8] =3 ;
    matriz [6][8] =3 ;
    matriz [7][8] =3 ;


    //Impressão do rodapé de A à J
    char linha1 [11] = {'X','A','B','C','D','E','F','G','H','I','J'};
    
    for (int i = 0; i < 11; i++)
    {
        printf("%2c" , linha1[i]);

    }
    printf("\n");

    //Impressão da coluna de 1 à 10
    for (int i = 0; i < 10; i++)
    {
        matriz[i][0] = i + 1 ;
    }
    
    //Lógica para imprimir os návios em diagonal
    for (int i = 4; i < 7; i++)
    {
        for (int j = 8; j > 5; j--)
        {
            matriz[j][9 - j] = 3;
        }
        matriz [i][i] = 3;
    }


    //Lógica da cruz

    for (int i = 5; i < 10; i++)
    {
        for (int j = 5; j < 10; j++)
        { 
            if (i == 6 && ( j == 6 || j == 7 || j == 8 || j==9)){
                matriz [i][j] = 5;
            }
            else if (i ==7 && (j == 6 || j == 7 || j == 8 || j == 9 )){
                matriz[i] [j] = 5;
            }
            else if (j ==7 && (i == 5 || i == 6 || i == 7 || i == 8 )){
                matriz[i] [j] = 5;}
            else if (j ==8 && (i == 5 || i == 6 || i == 7 || i == 8 )){
                matriz[i] [j] = 5;}  
        
         }
                         
        }


    //Lógica da impressão do cone
    for (int i = 2; i < 5; i++)
    {
        for (int j = 1; j < 6; j++)
        { 
         if (i == 2 && j == 3){
            matriz[i][j] = 5;
        }
            else if (i == 3 && ( j == 2 || j == 3 || j == 4)){
                matriz [i][j] = 5;
            }
            else if (i ==4 && (j == 1 || j == 2 || j == 3 || j == 4 || j == 5 )){
                matriz[i] [j] = 5;
            }
         }
                         
        }
    
    //Lógica para impressão do tabuleito
    for (int i = 0; i < 10 ; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            printf("%2d", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
