#include <stdio.h>
#include <math.h>

void main (void)
{

float durationOfCycle = 14;
float durationOfJupiterCycle = 4330; // entspricht ca 11,7 Erdenjahren
float monthOnMoon;
int durationOfGreatBigCycle;

printf("Ein Umlauf des Mondes um den Gasriesen wird \"Zyklus\" genannt.\n");
printf("Ein Zyklus beginnt im Tiefsten Winter, wenn innerer und aeusserer Längengrad exakt in der Mitte ihrer jeweiligen Kernschattendurchlaufes hinter dem Gasriesen stehen.\n");
printf("Obwohl ein Zyklus eher einem \"Tag\" entspricht, verlaufen die Hell- und Dunkelphasen sehr unterschiedlich und gleichen eher Jahreszeiten.\n\n");
printf("Die Dauer eines Zyklus enspricht genau %.5f Tagen auf der Erde und nur die Tiefdunkelphase findet auf innerer und aeusser Längengrad gleichzeigtig statt.\n\n", durationOfCycle);
printf("Der Umlauf des umkreisten Gasriesen wiederum dauert %.5f Tage.\n", durationOfJupiterCycle);
printf("Daraus ergibt sich eine Art \"Jahr\", das Grosser Zyklus genannt wird.\n\n");

printf("Die Zeitrechnung begann in einem Jahr mit einer Tiefdunkelphase, an dem Datum, dem der 1.1.1970, 00:00 Uhr im Computer entspricht.\n");
monthOnMoon = (durationOfJupiterCycle / durationOfCycle);
printf("Waehrend einer Umrundung des Gasrtiesen um die Sonne kann der Mond ihn %.5lf mal umrunden.\n", monthOnMoon);
durationOfGreatBigCycle = (int)durationOfJupiterCycle % (int)durationOfCycle;
printf("Da die Umlaufzeit des Gasriesen kein Vielfaches des Umlaufzeit des Mondes ist, wiederholt sich dieses Ereignis nur alle %d Grosse Zyklen. Diese Zeitspanne wird als \"Aeon\n bezeichnet.\n\n", durationOfGreatBigCycle);

printf("Zur Spielzeitberechnung dient die Unix-Zeit, die seit dem Beginn der Zeitrechung in Sekunden auf der Erde vergangen ist.\n");
printf("Seitdem Beginn dieser Zeitrechung auf dem imaginaeren Jupitermond, der uns als Spielwelt dient, sind XY Aeonen und YZ Große Zyklen und xz Zyklen vergangen. Wir befinden uns im X-ten Erdentag des aktuellen Zyklus.\n\n");

}
