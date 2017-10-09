int punkt = 2;
int bottom = 3;
int top = 4;
int middle = 5;
int righttop = 6;
int rightbottom = 7;
int lefttop = 8;
int leftbottom = 9;




void setup()
{
  // put your setup code here, to run once:
	pinMode(punkt, OUTPUT);

	pinMode(bottom, OUTPUT);
  	pinMode(top, OUTPUT);
  	pinMode(middle, OUTPUT);

  	pinMode(righttop, OUTPUT);
  	pinMode(rightbottom, OUTPUT);

  	pinMode(leftbottom, OUTPUT);
  	pinMode(lefttop, OUTPUT);

}

void loop()
{
	digitalWrite(bottom, LOW);
	delay(1000);
	digitalWrite(bottom, HIGH);
	delay(1000);
  	// put your main code here, to run repeatedly:
	//
}




