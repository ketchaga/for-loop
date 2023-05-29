#include <stdio.h>

int main() {
  

    // Schritt 7: Dateipfad übergeben und anzeigen
    char dateipfad[] = "PP8datei.txt";
    printf("Dateipfad: %s\n", dateipfad);

    // Schritt 9: Datei öffnen
    FILE* datei = fopen(dateipfad, "w");
    if (datei == NULL) {
        printf("Fehler beim Öffnen der Datei.\n");
        return 1;
    }


    // Schritt 11: Jedes Zeichen der Datei drucken
    char zeichen;
    printf("Inhalt der Datei: ");
    while ((zeichen = fgetc(datei)) != EOF) {
        printf("%c", zeichen);
    }
    printf("\n");


    // Schritt 15: Datei in ein Char-Array einlesen

    char text[1000];
    fseek(datei, 0, SEEK_SET);
    if (fgets(text, sizeof(text), datei) != NULL) {
        printf("Inhalt der Datei als Char-Array: %s\n", text);
    } else {
        printf("Fehler beim Lesen der Datei.\n");
    }

   

    fclose(datei);

    return 0;
}




