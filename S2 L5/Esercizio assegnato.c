#include <stdio.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();

int main()
{
    int scelta;

    printf("Questo programma ti da la possibilita' di effettuare tre operazioni.\n");

    while (1<2)
    {
            do {
        menu ();

        if (scanf("%d", &scelta) != 1 || scelta < 1 || scelta > 4)
            {
            while (getchar() != '\n');
            printf("\nInput non valido, per favore inserire un numero intero fra 1 e 4.\n\n");
            } else  {
            break;
                    }
        } while (1<2);

    switch (scelta)
        {
        case 1:
            moltiplica();
            break;
        case 2:
            dividi();
            break;
        case 3:
            ins_string();
            break;
        case 4:
            return 0;
            break;
        }

    }

}

void menu ()
{
    printf("Digita il numero corrispondente per effettuare la scelta:\n\n");
    printf("1. Moltiplica due numeri\n");
    printf("2. Dividi due numeri\n");
    printf("3. Inserisci una stringa\n");
    printf("4. Esci dal programma\n");
    printf("\nInserisci la tua scelta (1-4): ");
}

void moltiplica ()
{
	float  a=0 , b=0;
	printf ("\nInserisci il primo valore da moltiplicare: ");

	do {
        if (scanf("%f", &a) != 1)
            {
            while (getchar() != '\n');
            printf("\nInput non valido, per favore inserire un valore numerico.\n");
            printf ("\nInserisci il primo valore da moltiplicare: ");
            } else  {
            break;
                    }
        } while (1<2);

    printf("\nInserisci il secondo valore da moltiplicare: ");

	do {
        if (scanf("%f", &b) != 1)
            {
            while (getchar() != '\n');
            printf("\nInput non valido, per favore inserire un valore numerico.\n");
            printf("\nInserisci il secondo valore da moltiplicare: ");
            } else  {
            break;
                    }
        } while (1<2);

	float prodotto = a * b;

	printf ("\nIl prodotto tra %f e %f e': %f\n\n", a,b,prodotto);
}

void dividi ()
{
    float  a=0 ,b=0;
    printf ("\nInserisci il numeratore: ");

    do {
        if (scanf("%f", &a) != 1)
            {
            while (getchar() != '\n');
            printf("\nInput non valido, per favore inserire un valore numerico.\n");
            printf ("\nInserisci il numeratore: ");
            } else  {
            break;
                    }
        } while (1<2);

    printf ("\nInserisci il denumeratore: ");

    do {
        if (scanf("%f", &b) != 1 || b==0)
            {
            while (getchar() != '\n');
            printf("\nInput non valido, per favore inserire un valore numerico diverso da 0.\n");
            printf ("\nInserisci il denumeratore: ");
            } else  {
            break;
                    }
        } while (1<2);

    float divisione = a / b;

    printf ("\nLa divisione tra %f e %f e': %f\n\n", a,b,divisione);
}

void ins_string ()
{
    char stringa[100];
    printf ("\nInserisci una stringa: ");
    scanf("%s", &stringa);
    printf("\nLa stringa inserita e': %s\n\n", stringa);
}
