// On inclut ici la librairie qui va permettre d'utiliser les servo moteurs
#include <Servo.h> // Inclusion de la librairie qui permet d'utiliser les mot-clés
int pos;    // Déclaration de la variable pos comme un entier, cette variable servira pour la boucle for
Servo MonServo;   //  On déclare Monservo comme étant un Servo

void setup() {
  // put your setup code here, to run once:
MonServo.attach(9); // On indique que le Servo Monservo est relié à la pin 9
}

void loop() {
  // put your main code here, to run repeatedly:
for( pos = 0; pos <=180; pos += 1){  // On crée un boucle qui va aller de pos = 0, jusqu'à pos=180 en augmentant de 1 à chaque tour
  MonServo.write(pos);              // Indique au Servo de se rendre à la position qui vaut (0, 1, 3, jusqu'à 180).
  delay(15);                        // On attend 15 millisecondes
}

for(pos = 180; pos>= 0; pos -= 1){ //On crée un boucle qui va aller de pos = 180, jusqu'à pos = 0 en diminuant de 1 à chaque tour
  MonServo.write(pos);              // Indsique au Servo Monservo de rendre à la position qui vaut(189,188, 187 jusqu'à 0)
  delay(15);                        // On attend 15 millisecondes
}

}
