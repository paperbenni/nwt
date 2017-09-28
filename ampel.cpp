////////////////////////////////////////////////////////////////
//////////////////////////AMPEL TEST////////////////////////////
////////////////////////////////////////////////////////////////

// Rote LED für die Auto-Ampel ist in Dock 2
int redCar = 2;
// Gelbe LED für die Auto-Ampel ist in Dock 3
int yellowCar = 3;
// Gruene LED für die Auto-Ampel ist in Dock 4
int greenCar = 4;
// Schalter fuer die Ampel ist in Dock 5
int schalterPin = 5;
// Rote LED für die Fussgaenger-Ampel ist in Dock 6
int redFoot = 6;
//LOOOOOOL
int greenFoot = 7;
//Schalterzustand
int schalter = 0;

int speaker = 11;


//Startup
void setup()
{
	// Betaetigt den Strom, der zu den LED`s geht
	pinMode(redCar, OUTPUT);
	pinMode(greenCar, OUTPUT);
	pinMode(yellowCar, OUTPUT);
	pinMode(greenFoot, OUTPUT);
	pinMode(redFoot, OUTPUT);
	// Signal, das vom Schalter kommt
	pinMode(schalterPin, INPUT);
}





//Schleife
void loop()
{
	schalter = digitalRead(schalterPin);
	if (schalter==LOW)
	{
		digitalWrite(redCar, LOW);
		digitalWrite(greenCar, HIGH);
		digitalWrite(yellowCar, LOW);


		digitalWrite(greenFoot, LOW);
		digitalWrite(redFoot, HIGH);

	}else{

		//delay(5000);
		digitalWrite(greenCar, LOW);
		digitalWrite(yellowCar, HIGH);
		delay(1000);


		digitalWrite(yellowCar, LOW);
		digitalWrite(redCar, HIGH);
		digitalWrite(greenFoot, HIGH);
		delay(2000);


		digitalWrite(yellowCar, HIGH);
		digitalWrite(redCar, LOW);
		delay(1000);


		digitalWrite(yellowCar, LOW);
		digitalWrite(greenCar, HIGH);
		digitalWrite(redFoot, HIGH);
		delay(1000);
	}
}


