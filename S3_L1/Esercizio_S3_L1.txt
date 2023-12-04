import math
import sys

while (1<2):
    print ("Questo programma ti permette di calcolare l'area di alcune figure geometiche.")
    print ("Digita il numero corrispondente per effettuare la scelta.")
    print ("1 - Quadrato")
    print ("2 - Rettangolo")
    print ("3 - Circonferenza")
    print ("4 - Chiudi programma")

    while (1<2):
        try:
            user_input = int(input("Inserisci numero: "))

            if (user_input<1 or user_input>4):
                raise ValueError

            break
        except: 
            ValueError
            print("Input non valido, prova inserendo un numero compreso tra 1 e 4.")

    if user_input == 1:
        print ("Hai selezionato la funzione di calcolo del perimetro di un quadrato.")

        while (1<2):
            try:
                latoQ = float(input("Inserisci la dimensione del lato: "))
                break

            except:
                ValueError
                print("Input non valido, prova inserendo un valore numerico")
        result = 4*latoQ
        print ("Il perimetro del quadrato di lato" ,latoQ  ,"equivale a" ,result)

    elif user_input == 2:
        print ("Hai selezionato la funzione del calcolo del perimetro di un rettangolo.")

        while (1<2):
            try:
                lato1 = float(input("Inserisci la dimensione di un lato: "))
                break

            except:
                ValueError
                print("Input non valido, prova inserendo un valore numerico")
        
        while (1<2):
            try:
                lato2 = float(input("Inserisci la dimensione dell' altro lato: "))
                break

            except:
                ValueError
                print("Input non valido, prova inserendo un valore numerico")

        result = 2*lato1 + 2*lato2
        print("Il perimetro di un rettangolo che ha come lati" ,lato1 ,"e" ,lato2 ,"equivale a" ,result)

    elif user_input == 3:
        print ("Hai selezionato la funzione di calcolo del perimetro di una circonferenza.")

        while (1<2):
            try:
                raggio = float(input("Inserisci il valore del raggio della circonferenza: "))
                break

            except:
                ValueError
                print("Input non valido, prova inserendo un valore numerico")

        result = 2*math.pi*raggio
        print("Il perimetro di una circonferenza di raggio" ,raggio ,"equivale a" ,result)

    elif user_input == 4:
        sys.exit()