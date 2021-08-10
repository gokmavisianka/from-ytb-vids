int durum = 0;
int sayac = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(GPKEY, INPUT);
  pinMode(LEDG, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(GPKEY) == 0){sayac = sayac + 1;}
  else{sayac = 0;}

  if (sayac == 1){
    if (durum == 0){durum = 1; digitalWrite(LEDG, HIGH);}
    else{durum = 0; digitalWrite(LEDG, LOW);}
  }
}
