// Ici on déclare les variables globales et on indique les noms des librairies que l'on va utiliser

  long duree, distance;     // Déclaration des variables duree et distance comme étant des entiers long

// La partie setup() s'effectue qu'une seule fois
void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);     // Initialisation de la broche "trigger" déclenchement qui est connecté à la pin 4
  pinMode(2, INPUT);      // Initialisation de la broche "echo" capteur qui est connecté à la pin 2
  Serial.begin(9600);     // Initialisation du moniteur serie avec une vitesse de transmission de 9600 baud
}

// La partie loop s'effectue indefinement
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(4,LOW);   ///////////////////////////////////////////////////////////////////////////////////
  delayMicroseconds(2);    //                                                                               //
  digitalWrite(4, HIGH);    // Envoi d'un signal carré à la pin 2(déclencheur) afin de déclencher la mesure  //
  delayMicroseconds(2);    //                                                                               //
  digitalWrite(4, LOW);    ///////////////////////////////////////////////////////////////////////////////////

  duree = pulseIn(2,HIGH);          // lecture du tempsécoulé avant que le pin recoive un signal
  distance = duree*340/(2*1000);    // Transforme le temps en distance (cm) 340 = vitesse du son en m/s duration = temps

  Serial.print("la distance est: ");    // Affiche le message entre guillement sur le moniteur série
  Serial.print(distance);               // Affiche la valeur de la variable distance sur le moniteur série
  Serial.println( " cm");               // Affiche le message entre guillement sur le moniteur série
  delay(1000);

}
