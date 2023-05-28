#include <stdio.h>

int main() {
    char dateipfad[] = "PP8datei";
    printf("Dateipfad: %s\n", dateipfad);
    
    FILE* datei = fopen(dateipfad, "r");
    char zeichen;

    while ((zeichen = fgetc(datei)) != EOF)
        printf("%c", zeichen);

    fclose(datei);

    return 0;
}



