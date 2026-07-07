// Ici on déclare les variables globales et on indique le nom des librairies 
// que l'on va utilisser

int led = 8; // Je déclare la variable led comme un entier et je la donne la valeur 8 

// La partie setup ne s'effectue qu'une seule fois
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT); // Initialise la pin 8 = led comme étant une variable de sortie( Donc comme pin
  // qui va transmettre une information)
}
// La partie loop s'éffectue indefinement
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);  // Ordonne de mettre à la valeur (1) le potentiel du pin 8, donc allume la led
  delay(1000);              // Ordonne d'attendre 1000 milliseconde (soit 1 seconde)
  digitalWrite(led, LOW);   // Ordonne de mettre à la valeur basse (0) le potentiel du pin 8, donc éteint la led
  delay(1000);              // Ordonne d'attendre 1000 milliseconde(soit une seconde),

}
