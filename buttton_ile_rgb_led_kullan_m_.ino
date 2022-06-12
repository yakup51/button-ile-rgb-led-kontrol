// BUTTON İLE  RGB Led Kontrol Programı
int kirmiziled = 2;
int yesilled =3;
int maviled =4;
 
int kirmizibuton = 8;
int yesilbuton = 9;
int mavibuton = 10;

int buton1 = 0;
int buton2 = 0;
int buton3 = 0;

void setup()
{
pinMode(kirmiziled, OUTPUT);
pinMode(yesilled, OUTPUT);
pinMode(maviled, OUTPUT);
 
pinMode(kirmizibuton, INPUT);
pinMode(yesilbuton, INPUT);
pinMode(mavibuton, INPUT);
}
void loop()
{
int buton1 = digitalRead(kirmizibuton);
int buton2 = digitalRead(yesilbuton);
int buton3 = digitalRead(mavibuton);
 
if (buton1==HIGH)
{
digitalWrite(kirmiziled,HIGH);
digitalWrite(yesilled, LOW);
digitalWrite(maviled, LOW);
}
else if (buton2==HIGH)
{
digitalWrite(yesilled,HIGH);
digitalWrite(kirmiziled, LOW);
digitalWrite(maviled, LOW);
}
else if (buton3==HIGH)
{
digitalWrite(maviled,HIGH);
digitalWrite(kirmiziled, LOW);
digitalWrite(yesilled, LOW);
}
else
{
digitalWrite(kirmiziled, LOW);
digitalWrite(yesilled, LOW);
digitalWrite(maviled, LOW);
}
}
 
