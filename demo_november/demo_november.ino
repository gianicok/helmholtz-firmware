#define DAC1 25
#define HI_BUT 39 //A3
#define MI_BUT 36 //A4
#define LO_BUT 4 //A5

int high = 255; // 25.0 V
int mid = 128;  // 12.5 V
int low = 0;    // 0.00 V

int value = low;

void setup() {
  pinMode(HI_BUT, INPUT);
  pinMode(MI_BUT, INPUT);
  pinMode(LO_BUT, INPUT);
  pinMode(DAC1, OUTPUT);
  Serial.begin(115200);
}

void loop() { // Generate a Sine wave

  if(digitalRead(HI_BUT)==HIGH){
    value = high;
    Serial.println("high");
  }
  
  if(digitalRead(MI_BUT)==HIGH){
    value = mid;
    Serial.println("mid");
  }
  
  if(digitalRead(LO_BUT)==HIGH){
    value = low;
    Serial.println("low");
  }
  
  dacWrite(DAC1, value);
  delay(50);
}
