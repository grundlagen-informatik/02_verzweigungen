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
   // Hier muss der Code für die BMI-Aufgabe geschrieben werden. a=Körpergrösse, b=Gewicht, c=BMI
   float a = 0, b = 0, c ;
    printf("Deine Koerpergroesse in Meter:\n");
    scanf("%f", &a);
    printf("Deine Gewicht in kg:\n");
    scanf("%f", &b);
    c = (b / (a * a));
    if ( c <= 18.5) { printf("Dein BMI ist %.0f, du bist untergewichtig", c);
    }
    else if ( c > 18.5 && c < 25 ) { printf( "Dein BMI ist %.0f, du bist normalgewichtig", c);
    }
    else { printf( "Dein BMI ist %.0f, du bist uebergewichtig", c);
    }
}

void automat() {
    // Hier muss der Code für die Getränke-Automat-Aufgabe geschrieben werden. g=Getränk, z=Zahlung
    int g, z ;
    printf( "Wahlen Sie ihr Getrank aus:\n");
    printf("1. Wasser \t2.-\n2. Cola \t2.-\n3. Bier \t3.-\n\n");
    printf("Bitte geben sie 1,2 oder 3 ein\n");
    scanf("%d", &g);    //Auswahl einlesen
    if ( g == 1) { printf("Bitte 2.- Einwerfen\n");
    }
    else if ( g == 2 ) { printf( "Bitte 2.- Einwerfen\n");
    }
    else { printf( "Bitte 3.- Einwerfen\n");
    }
    scanf("%d", &z);    //Geld einwurf
    if ( z == 1) { printf("Ein Wasser wird ausgegeben");
    }
    else if ( z == 2 ) { printf( "Eine Cola wird ausgegeben");
    }
    else { printf( "Ein Bier wird ausgegeben");
    }

}