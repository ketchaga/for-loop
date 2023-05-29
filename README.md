## Arbeitsumgebung

- Editor: Vim
- Compiler: GCC (GNU Compiler Collection)
## Beschreibung des zuletzt hinzugefügten Ausdrucks in schritt 13

Der zuletzt hinzugefügte Ausdruck in der Datei "while_loop.c" dient dazu, den Inhalt einer geöffneten Datei Zeichen für Zeichen zu lesen und zu drucken

Der Ausdruck verwendet die Funktion fgetc() aus der Standardbibliothek <stdio.h>, um das nächste Zeichen aus der Datei zu lesen. Die Schleife wird so lange wiederholt, bis das Ende der Datei (EOF - End-of-File) erreicht ist.

Bei jedem Schleifendurchlauf wird ein Zeichen gelesen und mit printf() gedruckt. Dadurch wird der gesamte Inhalt der Datei Zeichen für Zeichen auf dem Bildschirm angezeigt.

Dieser Ausdruck ermöglicht es, den Inhalt einer Datei zu durchlaufen und damit bestimmte Operationen oder Analysen durchzuführen, während das Programm ausgeführt wird.


## Beobachtungen und Fehlschläge  schritt 16

Bei der Durchführung der Aufgaben sind mir folgende Beobachtungen aufgefallen:

- Schritt 11: Das Drucken jedes Zeichens der Datei mithilfe der `while`-Schleife hat gut funktioniert. Es wurden alle Zeichen der Datei erfolgreich angezeigt.
- Schritt 13: Der zuletzt hinzugefügte Ausdruck `printf("%c", zeichen)` in der `while`-Schleife dient dazu, jedes gelesene Zeichen aus der Datei auf dem Bildschirm auszugeben. Dadurch wird der Inhalt der Datei Zeichen für Zeichen angezeigt.
- Schritt 15: Das Einlesen der geöffneten Datei in ein Char-Array mit `fgets()` hat funktioniert, solange die Größe des Char-Arrays ausreichend war, um den gesamten Inhalt der Datei aufzunehmen.
- Fehlschlag: Beim Öffnen der Datei mit dem Modus "w" anstelle von "r" in Schritt 9 wurde eine leere Datei erstellt, da der Modus "w" für das Schreiben in die Datei verwendet wird, nicht für das Lesen.


