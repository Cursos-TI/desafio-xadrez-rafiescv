#include <stdio.h>

int main() {
    // Desafio de Xadrez - MateCheck

    //Peças do jogo
    int torre = 5; 
    int bispo = 5;  int passoBispo = 0;
    int rainha = 8; int passoRainha = 0; 
    int cavalo = 1; int passoVCavalo = 0;

    //Movimento da Torre: A Torre se move em linha reta 
    printf("Movimento Torre:\n");
    for (int i = 1; i <= torre; i++)
    {
        printf("Direita\n");
    }
    
    //Movimento do Bispo: O Bispo se move na diagonal
    printf("Movimento do Pispo:\n");
    while (passoBispo < bispo)
    {
        printf("Cima direita\n");
        passoBispo++;
    }

    //Movimento da Rainha: A Rainha se move em todas as direções
    printf("Movimento da Rainha:\n");
    do
    {
        printf("8 casas para a esquerda\n");
        passoRainha++;
    } while (rainha < passoRainha);

    //Movimento do Cavalo: O Cavalo se movimenta em L
    printf("Movimento do Cavalo:\n");
    for (int i = 1; i <= cavalo; i++)
    {
        passoVCavalo = 0;

        while (passoVCavalo < 2) 
        {
          printf("Baixo\n");
          passoVCavalo++;
        }
        printf("Esquerda\n");

    }
    


    return 0;
}
