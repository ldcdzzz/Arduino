int vd0=8;
int a0=9;
int v0=10;
int vd1=5;
int a1=6;
int v1=7;
void setup() {
pinMode (vd0, OUTPUT);
pinMode (a0, OUTPUT); 
pinMode (v0, OUTPUT);
pinMode (vd1, OUTPUT);
pinMode (a1, OUTPUT);
pinMode (v1, OUTPUT);
}
void loop() {
digitalWrite (vd0,1);
digitalWrite (a0,0);
digitalWrite (v0,0);
digitalWrite (vd1,0);
digitalWrite (a1,0);
digitalWrite (v1,1);
delay (2000);
digitalWrite (vd0,0);
digitalWrite (a0,1);
digitalWrite (v0,0);
digitalWrite (vd1,0);
digitalWrite (a1,0);
digitalWrite (v1,1);
delay (1000);
digitalWrite (vd0,0);
digitalWrite (a0,0);
digitalWrite (v0,1);
digitalWrite (vd1,1);
digitalWrite (a1,0);
digitalWrite (v1,0);
delay (2000);
digitalWrite (vd0,0);
digitalWrite (a0,0);
digitalWrite (v0,1);
digitalWrite (vd1,0);
digitalWrite (a1,1);
digitalWrite (v1,0);
delay (1000);
digitalWrite (vd0,1);
digitalWrite (a0,0);
digitalWrite (v0,0);
digitalWrite (vd1,0);
digitalWrite (a1,0);
digitalWrite (v1,1);
delay (2000);
}
