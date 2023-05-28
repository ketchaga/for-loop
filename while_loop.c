#include <stdio.h>

int main() {
    char dateipfad[] = "PP8datei";
    printf("Dateipfad: %s\n", dateipfad);

    FILE* datei = fopen(dateipfad, "r");
    if (datei == NULL) {
        printf("Fehler beim Öffnen der Datei.\n");
        return 1;
    }

    char zeichen;
    while ((zeichen = fgetc(datei)) != EOF)
        printf("%c", zeichen);

    fseek(datei, 0, SEEK_SET);

    char text[1000];
    fgets(text, sizeof(text), datei);
    printf("\nInhalt der Datei: %s", text);

    fclose(datei);

    return 0;
}




