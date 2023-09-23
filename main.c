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
    // Hier muss der Code für die Getränke-Automat-Aufgabe geschrieben werden.
    float g, z, r =1.7, s=1.9, t=2.4; //g=Getränk, z=Zahlung, r,s,t = Getränkepreis Wasser, Cola, Bier
    printf( "Wahlen Sie ihr Getrank aus:\n");
    printf("1. Wasser \t%.2f\n", r);
    printf("2. Cola \t%.2f\n", s);
    printf("3. Bier \t%.2f\n\n", t);
    printf("Bitte geben sie 1,2 oder 3 ein\n");
    scanf("%f", &g);    //Auswahl einlesen
    if ( g == 1) { printf("Bitte %.2f Einwerfen\n", r);
    }
    else if ( g == 2 ) { printf( "Bitte %.2f Einwerfen\n\n", s);
    }
    else { printf( "Bitte %.2f Einwerfen\n", t);
    }
    scanf("%f", &z);    //Geld einwurf
    if ( z == r ) { printf("Ein Wasser wird ausgegeben");
    }
    else if ( z == s ) { printf( "Eine Cola wird ausgegeben");
    }
    else if ( z == t ) { printf( "Ein Bier wird ausgegeben");
    }
    else { printf( "Fehler");
    }

}