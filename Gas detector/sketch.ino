#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// LCD Address
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Pin Definitions
#define GAS_SENSOR A0
#define GREEN_LED 2
#define RED_LED 3
#define BUZZER 4
#define FAN_LED 5

// Gas Threshold
int threshold = 500;

void setup() {

  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(FAN_LED, OUTPUT);

  Serial.begin(9600);

  // LCD Initialization
  lcd.init();
  lcd.backlight();

  // Welcome Message
  lcd.setCursor(0, 0);
  lcd.print("SMART GAS");
  lcd.setCursor(0, 1);
  lcd.print("DETECTOR SYS");
  delay(3000);

  lcd.clear();
}

void loop() {

  int gasValue = analogRead(GAS_SENSOR);

  Serial.print("Gas Value = ");
  Serial.println(gasValue);

  // GAS LEAK CONDITION
  if (gasValue > threshold) {

    digitalWrite(GREEN_LED, LOW);
    digitalWrite(RED_LED, HIGH);

    tone(4, 1000);   // buzzer ON
    delay(400);
    noTone(4);       // buzzer OFF
    delay(400);
    digitalWrite(FAN_LED, HIGH);

    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print("WARNING!");

    lcd.setCursor(0, 1);
    lcd.print("GAS LEAK!");

    delay(2000);

    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print("Gas:");
    lcd.print(gasValue);

    lcd.setCursor(0, 1);
    lcd.print("Fan_LED ON");

    delay(1000);
  }

  // SAFE CONDITION
  else {

    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(RED_LED, LOW);

    digitalWrite(BUZZER, LOW);
    digitalWrite(FAN_LED, LOW);

    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print("SAFE");

    lcd.setCursor(0, 1);
    lcd.print("System Normal");

    delay(2000);

    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print("Gas:");
    lcd.print(gasValue);

    lcd.setCursor(0, 1);
    lcd.print("Fan_LED OFF");

    delay(1000);
  }
}