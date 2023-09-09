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
   float grosse2;
   float gewicht;
   float bmi;
   printf("Gewicht:\n");
   scanf("%f",gewicht);
    printf("%f",gewicht);
   printf("Grosse:\n");
   scanf("%f",grosse);
   grosse2 = grosse * grosse;
   bmi = gewicht/grosse2;
   printf("\nBMI: %f",bmi);

}

void automat() {
    // Hier muss der Code für die Getränke-Automat-Aufgabe geschrieben werden.
}