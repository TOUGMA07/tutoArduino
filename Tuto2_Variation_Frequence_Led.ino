// Ici on déclare les variables globales et on indique le nom des librairies que l'on va utiliser
int led = 8; // Je déclare la variable led comme un entier et je lui donne la valeur de 8
int Duree ; // Je déclare la variable Duree comme entier et je lui donne la valeur de 1000

// La partie setup ne s'effectue qu'une seule fois
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT); // initialise la pin 8 comme étant une variable de sortie(Donc comme pin qui va transmettre une information)
  pinMode(A5, INPUT); // initialise la pin A5 comme étant une variable d'entrée( Donc comme un pin qui va recevoir une information)
}

// La partie loop s'effectue indefinement
void loop() {
  // put your main code here, to run repeatedly:
  Duree = analogRead(A5); // Je lis la valeur reçu sur la pin analogique est comprise entre 0 et 1023)
  Duree = map(Duree, 0, 1023,100, 1000); // Avec la fonction MAP, je fais en sorte que la valeur comprise entre
  0 et 1023, soit comprise entre 100 et 1000
  digitalWrite(led, HIGH); // Ordonne de mettre à la valeur haute(1) le potentiel du pin 8 donc on allume,
  delay(Duree); Ordonne d'attendre 1000 milliseconde (soit une seconde), 
  digital(led, LOW);// Ordonne de à la valeur basse(0) le potentiel, donc det mettre LED
  delay(Dures);
}
