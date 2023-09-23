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
    // Hier muss der Code für die BMI-Aufgabe geschrieben werden.
    float grosse;
    float gewicht;
    float bmi;
    printf("Gewicht:\n");
    scanf("%f", &gewicht);
    printf("Groesse:\n");
    scanf("%f", &grosse);
    bmi = gewicht / (grosse * grosse);
    if (bmi < 18.5) {
        printf("Untergewicht");

    } else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("Normalgewicht");
    } else {
        printf("Ubergewicht");
    }
    printf("\nBMI: %f", bmi);

}

void automat() {
    // Hier muss der Code für die Getränke-Automat-Aufgabe geschrieben werden.
    float getrank;
    float geld;
    printf("Waehlen Sie ihr Getraenk aus:\n1) Wasser (0,50 Euro)\n2) Limonade (1,00 Euro)\n3) Bier (2,00 Euro)\n\nGeben Sie 1,2 oder 3 ein:");
    scanf("%f", &getrank);
    if (getrank == 1) {
        printf("Bitte werfen Sie 0,50 Euro ein:");
        scanf("%f", &geld);

        if (geld == 0.50) {
            printf("Vielen Dank, bitte entnehmen Sie Ihr Getränk.");
        } else {
            printf("Falsche Geldmenge!");
        }
    } else if (getrank == 2) {
        printf("Bitte werfen Sie 1,00 Euro ein:");
        scanf("%f", &geld);

        if (geld == 1.00) {
            printf("Vielen Dank, bitte entnehmen Sie Ihr Getränk.");
        } else {
            printf("Falsche Geldmenge!");
        }
    } else if (getrank == 3) {
        printf("Bitte werfen Sie 2,00 Euro ein:");
        scanf("%f", &geld);

        if (geld == 2.00) {
            printf("Vielen Dank, bitte entnehmen Sie Ihr Getränk.");
        } else {
            printf("Falsche Geldmenge!");
        }
    } else {
        printf("Error");
    }

}