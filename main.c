#include <stdio.h>

// Funktionsprototyp für BMI-Aufgabe
void bmi();

// Funktionsprototyp für Getränke-Automat-Aufgabe
void automat();

// Am Hauptteil muss nichts geändert werden. Der Code kann in die zwei Funktionen geschrieben werden.
int main() {
    int aufgabe;

    printf("Fuer BMI-Aufgabe druecke 1 und fuer Getraenke-Automat druecke 2:\n");
    scanf("%d", &aufgabe);

    if (aufgabe == 1) {
        bmi();
    } else if (aufgabe == 2) {
        automat();
    } else {
        printf("Ungueltige Eingabe, Programm muss neu gestartet werden.\n");
    }
    return 0;
}

void bmi() {
    float groesse;
    float gewicht;
    float bmi;

    printf("Bitte geben Sie das Gewicht in kg ein: ");
    scanf_s("%f", &gewicht);
    printf("Bitte geben Sie die Koerpergroesse in m ein: ");
    scanf_s("%f", &groesse);

    bmi = gewicht / (groesse * groesse);

    if (bmi < 18.5) {
        printf("Der BMI ist %f \n", bmi);
        printf("Untergewicht");
    } else if (bmi >= 18.5 && bmi < 25.0) {
        printf("Der BMI ist %f \n", bmi);
        printf("Normalgewicht");
    } else {
        printf("Der BMI ist %f \n", bmi);
        printf("Uebergewicht");
    }
}

void automat() {

    int getraenk;
    float geld;

    printf("Waelen Sie ihr Getraenk aus: \n 1) Wasser (0,50 Euro)\n 2) Limonade (1,00 Euro) \n 3) Bier (2,00 Euro)\n\n Geben sie 1, 2 oder 3 ein: ");

    scanf_s("%d", &getraenk);

    if (getraenk == 1) {
        printf("Bitte werfen Sie 0.50 Euro ein: ");
        scanf_s("%f", &geld);
        if (geld == 0.5) {
            printf("Vielen Dank, bitte entnehmen Sie das Getraenk.");
        } else {
            printf("Bitte werfen Sie den Betrag passend ein.");
        }
    } else if (getraenk == 2) {
        printf("Bitte werfen Sie 1.0 Euro ein: ");
        scanf_s("%f", &geld);
        if (geld == 1.0) {
            printf("Vielen Dank, bitte entnehmen Sie das Getraenk.");
        } else {
            printf("Bitte werfen Sie den Betrag passend ein.");
        }
    } else if (getraenk == 3) {
        printf("Bitte werfen Sie 2.00 Euro ein: ");
        scanf_s("%f", &geld);
        if (geld == 2.0) {
            printf("Vielen Dank, bitte entnehmen Sie das Getraenk.");
        } else {
            printf("Bitte werfen Sie den Betrag passend ein.");
        }
    } else {
        printf("Bitte wählen Sie eine gültige Nummer.");
    }
}