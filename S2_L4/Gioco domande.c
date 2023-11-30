#include <stdio.h>

short risposta=0, punteggio=0;
char nome[20];

int main()
{
   printf(" Hai avviato Gioco domande, rispondi correttamente alle domande per ottenere il punteggio più alto!\n\n");

   while(1<2)
   {
    do
   {
       punteggio=0;
    printf(" 1 - Avvia Gioco\n 2 - Chiudi programma\n\n");
   scanf("%hd" , &risposta);
   printf("\n");

   switch (risposta)
        {
    case 1 :
    break;

    case 2 :
    return 0;
        break;

    default:
        printf(" Il valore inserito non è valido, inserisci 1 oppure 2.\n\n");
        }
   } while (risposta!=1);

   risposta=0;
printf(" Inserire un nome giocatore\n\n");
scanf("%s" , nome);
printf("\n Benissimo %s, ecco a te la prima domanda.\n\n Domanda 1: 15 + 18 quanto fà?\n\n", nome);

    do
    {
     printf(" 1 - 32\n 2 - 36\n 3 - 33\n 4 - 34\n\n");
     scanf("%hd", &risposta);
     printf("\n");

     switch (risposta){

 case 1:
    printf(" Risposta errata");
    break;

 case 2:
    printf(" Risposta errata");
    break;

 case 3:
    printf(" Risposta corretta!");
    punteggio++;
    break;

 case 4:
    printf(" Risposta errata");
    break;

 default:
    printf(" Il valore inserito non è valido, inserisci 1 - 2 - 3 - 4.\n\n");
     }
    } while (risposta!=1 && risposta!=2 && risposta!=3 && risposta!=4);

    risposta=0;
    printf("\n\n Domanda 2: Quali tra i seguenti non fa parte dei colori primari?\n\n");

    do
    {
     printf(" 1 - Rosso\n 2 - Blu\n 3 - Giallo\n 4 - Verde\n\n");
     scanf("%hd", &risposta);
     printf("\n");

     switch (risposta){

 case 1:
    printf(" Risposta errata");
    break;

 case 2:
    printf(" Risposta errata");
    break;

 case 3:
    printf(" Risposta errata");
    break;

 case 4:
    printf(" Risposta corretta!");
    punteggio++;
    break;

 default:
    printf(" Il valore inserito non è valido, inserisci 1 - 2 - 3 - 4.\n\n");
     }
    } while (risposta!=1 && risposta!=2 && risposta!=3 && risposta!=4);

    risposta=0;
    printf("\n\n Domanda 3: Quali tra le seguenti figure solide non fa parte dei poliedri regolari?\n\n");

    do
    {
     printf(" 1 - Prisma\n 2 - Dodecaedro\n 3 - Cubo\n 4 - Icosaedro\n\n");
     scanf("%hd", &risposta);
     printf("\n");

     switch (risposta){

 case 1:
    printf(" Risposta corretta!");
    punteggio++;
    break;

 case 2:
    printf(" Risposta errata");
    break;

 case 3:
    printf(" Risposta errata");
    break;

 case 4:
    printf(" Risposta errata");
    break;

 default:
    printf(" Il valore inserito non è valido, inserisci 1 - 2 - 3 - 4.\n\n");
     }
    } while (risposta!=1 && risposta!=2 && risposta!=3 && risposta!=4);

    risposta=0;
    printf("\n\n Domanda 4: Quanti stati fanno parte degli Stati Uniti D'America?\n\n");

    do
    {
     printf(" 1 - 48\n 2 - 49\n 3 - 50\n 4 - 52\n\n");
     scanf("%hd", &risposta);
     printf("\n");

     switch (risposta){

 case 1:
    printf(" Risposta errata");
    break;

 case 2:
    printf(" Risposta errata");
    break;

 case 3:
    printf(" Risposta corretta!");
    punteggio++;
    break;

 case 4:
    printf(" Risposta errata");
    break;

 default:
    printf(" Il valore inserito non è valido, inserisci 1 - 2 - 3 - 4.\n\n");
     }
    } while (risposta!=1 && risposta!=2 && risposta!=3 && risposta!=4);

    risposta=0;
    printf("\n\n Ultima domanda: Quali fra questi non fa parte dei numeri primi?\n\n");

    do
    {
     printf(" 1 - 17\n 2 - 53\n 3 - 61\n 4 - 57\n\n");
     scanf("%hd", &risposta);
     printf("\n");

     switch (risposta){

 case 1:
    printf(" Risposta errata");
    break;

 case 2:
    printf(" Risposta errata");
    break;

 case 3:
    printf(" Risposta errata");
    break;

 case 4:
    printf(" Risposta corretta!");
    punteggio++;
    break;

 default:
    printf(" Il valore inserito non è valido, inserisci 1 - 2 - 3 - 4.\n\n");
     }
    } while (risposta!=1 && risposta!=2 && risposta!=3 && risposta!=4);

    printf("\n\n Il gioco è terminato. Hai risposto correttamente a %hd domande.\n\n", punteggio);
   }



}
