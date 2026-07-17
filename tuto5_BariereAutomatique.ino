// Ici on déclare les variables global et on indique le nom des librairies utilisées

#include<Servo.h>               // Inclue la librairie Servo.h dans ce programme pour qu'on puisse utiliser les mots-clés qui permettent d'utiliser les servo-moteurs

const int seuil = 10;           // Déclare seuil comme une valeur entière égale à 10
long duree, distance;           // Déclaration des variables duration et distance comme étant des entiers long
int pos = 0;                    // On déclare la variable pos comme un entier. Cette variable servira pour le boucle for
Servo MonServo;                 // On déclare MonServo comme étant un servo       

void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);              // Initialisation le trigger(déclencheur) du capteur ultrason qui est connecté au pin 2
pinMode(4, INPUT);              // Initialisation du pin du capteur ultrason qui est connecté au pin 2
MonServo.attach(9);             // Le Servo MonServo est relié à la pin 9
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(2, LOW);
delayMicroseconds(2);
digitalWrite(2, HIGH);
delayMicroseconds(2);

duree = pulseIn(4, HIGH);           // Lecture du temps écoulé avant que la pin 4 recoive un signal
distance = duree * 340/(2*100000);     // Transforme le temps en distance(cm)

if(distance <= seuil){                    // Si ladistance mesurée est inférieure au seuil déterminée, alors on règles lapostion pos 
                                          // pos du servomoateur
  pos = 90;
} else{                                    // Sinon, on règle la postion pos du servp sur 0  degré(On ferme la barière)
  pos = 0;
}

MonServo.write(pos);                      // Actionne le servo sur la positiondéterminée par le if.else
delay(1000);                              // On attend u e seconde

}
