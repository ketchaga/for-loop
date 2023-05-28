#include <stdio.h>

int main() {
    char dateipfad[] = "PP8datei";
    printf("Dateipfad: %s\n", dateipfad);
    
    FILE* datei = fopen(dateipfad, "w");
    char zeichen;

    while ((zeichen = fgetc(datei)) != EOF)
        printf("%c", zeichen);
    char text[1000];
fseek(datei, 0, SEEK_SET);
fgets(text, sizeof(text), datei);
printf("%s", text);

char text[1000];
fseek(datei, 0, SEEK_SET);
fgets(text, sizeof(text), datei);
printf("%s", text);


    fclose(datei);

    return 0;
}



