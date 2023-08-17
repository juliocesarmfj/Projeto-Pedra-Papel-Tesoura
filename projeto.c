#include <stdio.h>
#include <string.h>
#include <time.h>

void delay(int number_of_seconds)
{
    
    int milli_seconds = 10 * number_of_seconds;
 
    
    clock_t start_time = clock();
 
    
    while (clock() < start_time + milli_seconds)
        ;
}

animation(i){
for(i=0;i<4;i++){

    delay(1);
    printf(" \n");
    printf("     _______                _______    \n");
    printf(" ---'   ____)              (____   '---\n");
    printf("       (_____)            (_____)      \n");
    printf("       (_____)            (_____)      \n");
    printf("       (____)              (____)      \n");
    printf(" ---.__(___)                (___)__.---\n");
    printf(" \n");
    system("cls");
    delay(1);
    printf(" \n");
    printf(" \n");
    printf("     _______                _______    \n");
    printf(" ---'   ____)              (____   '---\n");
    printf("       (_____)            (_____)      \n");
    printf("       (_____)            (_____)      \n");
    printf("       (____)              (____)      \n");
    printf(" ---.__(___)                (___)__.---\n");
    printf("""""                              """"\n");
    printf(" \n");
    system("cls");
    delay(1);
    printf(" \n");
    printf("     _______                _______    \n");
    printf(" ---'   ____)              (____   '---\n");
    printf("       (_____)            (_____)      \n");
    printf("       (_____)            (_____)      \n");
    printf("       (____)              (____)      \n");
    printf(" ---.__(___)                (___)__.---\n");
    printf(" \n");
    system("cls");
    delay(1);
    printf(" \n");
    printf(" \n");
    printf("     _______                _______    \n");
    printf(" ---'   ____)              (____   '---\n");
    printf("       (_____)            (_____)      \n");
    printf("       (_____)            (_____)      \n");
    printf("       (____)              (____)      \n");
    printf(" ---.__(___)                (___)__.---\n");
    printf("""""                              """"\n");
    printf(" \n");
    system("cls");
    


}



}

int main(){
    int escolha,computador,usuario=1,pc=1;
    
    printf("Bem vindo ao jogo de Pedra,papel ou tesoura!");
    while (escolha != 4)
    {
     
    computador = ("%d",rand()%3);
   
    
    printf("\n\n1-Pedra\n2-tesoura\n3-papel\n4-fechar\n");
    scanf("%i",&escolha);

    animation();



    
    if(computador==0){
        
        printf("Computador escolheu Pedra\n");
        
    }

    else if(computador==1){

        printf("Computador escolheu Tesoura\n");
    }

    else if(computador==2){

        printf("Computador escolheu Papel\n");
    }

    switch (escolha){

        case 1: 

        if(computador == 0){
            
            printf("\n");
            printf(" \n");
            printf("     _______                _______    \n");
            printf(" ---'   ____)              (____   '---\n");
            printf("       (_____)            (_____)      \n");
            printf("       (_____)            (_____)      \n");
            printf("       (____)              (____)      \n");
            printf(" ---.__(___)                (___)__.---\n");
            printf("\n");
            


            printf("\nEmpate!");
            
            break;
        }
        
        else if(computador==1){

            printf("\n");
            printf("\n");
            printf("    _______                _______    \n");
            printf("---'   ____)         _____(____   '---\n");
            printf("      (_____)       (_______          \n");
            printf("      (_____)       (__________       \n");
            printf("      (____)              (____)      \n");
            printf("---.__(___)                (___)__.---\n");
            printf("\n");

            printf("Pedra ganha de tesoura\nGANHOU!");
            printf("\nUsuario:%i",usuario++);
            break;
            

        }


        else if(computador==2){

            printf("\n");
            printf("\n");
            printf("    _______               ________    \n");
            printf("---'   ____)         ____(____    '---\n");
            printf("      (_____)       (______           \n");
            printf("      (_____)       (_______          \n");
            printf("      (____)         (_______         \n");
            printf("---.__(___)            (__________.---\n");
            printf("\n");
            

            printf("Pedra perde para papel\nPERDEU!");
            printf("\ncomputador:%i",pc++);
            break;
        }

        case 2:
        if(computador == 0){
            
            printf("\n");
            printf("\n");
            printf("    ________               _______    \n");
            printf("---'    ____)____         (____   '---\n");
            printf("           ______)       (_____)      \n");
            printf("       __________)       (_____)      \n");
            printf("      (____)              (____)      \n");
            printf("---.__(___)                (___)__.---\n");
            printf("\n");

            printf("Tesoura perde para pedra\nPERDEU!");
            printf("\ncomputador:%i",pc++);
            break;
        }
        else if(computador==1){

            printf("\n");
            printf("\n");
            printf("    ________               _______    \n");
            printf("---'    ____)____    _____(____   '---\n");
            printf("           ______)  (_______          \n");
            printf("       __________)  (__________       \n");
            printf("      (____)              (____)      \n");
            printf("---.__(___)                (___)__.---\n");
            printf("\n");
            

            printf("Empate!");
            break;

        }


        else if(computador==2){

            printf("\n");
            printf("\n");
            printf("    ________              ________    \n");
            printf("---'    ____)____    ____(____    '---\n");
            printf("           ______)  (______           \n");
            printf("       __________)  (_______          \n");
            printf("      (____)         (_______         \n");
            printf("---.__(___)            (__________.---\n");
            printf("\n");

            printf("tesoura ganha de papel\nGANHOU!");
            printf("\nUsuario:%i",usuario++);
            break;
        }

        case 3:
        if(computador == 0){

            printf("\n");
            printf("\n");
            printf("    ________               _______    \n");
            printf("---'    ____)____         (____   '---\n");
            printf("           ______)       (_____)      \n");
            printf("           ______)       (_____)      \n");
            printf("         _______)         (____)      \n");
            printf("---.__________)            (___)__.---\n");
            printf("\n");

            printf("Papel ganha de pedra\nGANHOU!");
            printf("\nUsuario:%i",usuario++);
            break;
        }
        else if(computador==1){

            printf("\n");
            printf("\n");
            printf("    ________               _______    \n");
            printf("---'    ____)____    _____(____   '---\n");
            printf("           ______)  (_______          \n");
            printf("           ______)  (__________       \n");
            printf("         _______)         (____)      \n");
            printf("---.__________)            (___)__.---\n");
            printf("\n");

            printf("Papel perde para tesoura\nPERDEU!");
            printf("\ncomputador:%i",pc++);

            break;

        }


        else if(computador==2){

            printf("\n");
            printf("\n");
            printf("    ________              ________    \n");
            printf("---'    ____)____    ____(____    '---\n");
            printf("           ______)  (______           \n");
            printf("           ______)  (_______          \n");
            printf("         _______)    (_______         \n");
            printf("---.__________)        (__________.---\n");
            printf("\n");

            printf("Empate!");
            break;
        }




      
    }
   
    

        
    } 

}






    
  



    
