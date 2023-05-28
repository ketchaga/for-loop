#include <stdio.h>

int main() {
    // Initialisieren Sie einen Array-Identifier und weisen Sie ihm eine beliebige Zeichenkette zu
    char myArray[] = "Hallo Welt!";
    
    // Schreiben Sie hier Ihren Code für die for-Schleife
    for (int i = 0; myArray[i] != '\0'; i++) {
        printf("%c\n", myArray[i]);
    }
    
    return 0;
}

