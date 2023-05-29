#include <stdio.h>

int main() {
    char dateipfad[] = "PP8datei.txt";
    printf("Dateipfad: %s\n", dateipfad);

    FILE* datei = fopen(dateipfad, "w");
    if (datei == NULL) {
        printf("Fehler beim Öffnen der Datei.\n");
        return 1;
    }

    char zeichen;
    printf("Inhalt der Datei: ");
    while ((zeichen = fgetc(datei)) != EOF)
        printf("%c", zeichen);
    printf("\n");

    fseek(datei, 0, SEEK_SET);

    char text[1000];
    fgets(text, sizeof(text), datei);
    printf("Inhalt der Datei als Char-Array: %s\n", text);

    fclose(datei);

    return 0;
}




