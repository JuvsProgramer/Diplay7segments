#define A 0
#define B 1
#define C 2
#define D 3
#define E 4
#define F 5
#define G 6
int delaytime = 1000; 

void setup() {
  // put your setup code here, to run once:
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 counter();
}
void counter(){
  cero();
  delay(delaytime);
    uno();
  delay(delaytime);
  dos();
  delay(delaytime);
  tres(); 
  delay(delaytime);
  cuatro();
  delay(delaytime);
  cinco();
  delay(delaytime);
  seis();
  delay(delaytime);
  siete();
  delay(delaytime);
  ocho();
  delay(delaytime); 
  nueve(); 
  delay(delaytime);
  a();
  delay(delaytime);
  b();
  delay(delaytime);
  c();
  delay(delaytime);
  d();
  delay(delaytime);
  e();
  delay(delaytime);
  f();
  delay(delaytime);}
void uno(){
  digitalWrite(F, LOW);
  digitalWrite(E, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(G, HIGH);
}
void dos(){
 digitalWrite(A, LOW);
 digitalWrite(B, LOW);
 digitalWrite(G, LOW);
 digitalWrite(E, LOW);
 digitalWrite(D, LOW);
 digitalWrite(F, HIGH);
 digitalWrite(C, HIGH);
 }
 void tres(){
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(G, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);}
void cuatro(){
digitalWrite(F, LOW);
digitalWrite(G, LOW);
digitalWrite(B, LOW);
digitalWrite(C, LOW);
digitalWrite(E, HIGH);
digitalWrite(D, HIGH);
digitalWrite(A, HIGH);}         
void cinco(){
digitalWrite(A, LOW);
digitalWrite(F, LOW);
digitalWrite(G, LOW);
digitalWrite(C, LOW);
digitalWrite(D, LOW);
digitalWrite(E, HIGH);
digitalWrite(B, HIGH);}
void seis(){
digitalWrite(A, LOW);
digitalWrite(F, LOW);
digitalWrite(G, LOW);
digitalWrite(C, LOW);
digitalWrite(E, LOW);
digitalWrite(D, LOW);
digitalWrite(B, HIGH);}
void siete(){
digitalWrite(A, LOW);
digitalWrite(B, LOW);
digitalWrite(G, LOW);
digitalWrite(C, LOW);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(F, HIGH);}
void ocho(){
digitalWrite(A, LOW);
digitalWrite(B, LOW);
digitalWrite(C, LOW);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(F, LOW);
digitalWrite(G, LOW);}
void nueve(){
digitalWrite(A, LOW);
digitalWrite(B, LOW);
digitalWrite(C, LOW);
digitalWrite(G, LOW);
digitalWrite(F, LOW);
digitalWrite(E, HIGH);
digitalWrite(D, HIGH);}
void cero(){
digitalWrite(A, LOW);
digitalWrite(B, LOW);
digitalWrite(C, LOW);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(F, LOW);
digitalWrite(G, HIGH);}
void a(){
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(D, HIGH);}
void b(){
   digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(D, LOW);}
void c(){
   digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(D, LOW);}
void d(){
   digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(D, LOW);}
void e(){
   digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(D, LOW);}
void f(){
   digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(D, HIGH);}                                             
