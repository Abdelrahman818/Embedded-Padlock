
#include <LiquidCrystal.h>
#include <Keypad.h>
#include <string.h>

#define LED 0

LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

const uint8_t ROWS = 4;
const uint8_t COLS = 4;
uint8_t index = 0;
char password[5];
char keys[ROWS][COLS] = {
  { '1', '2', '3', 'A' },
  { '4', '5', '6', 'B' },
  { '7', '8', '9', 'C' },
  { '*', '0', '#', 'D' }
};

uint8_t xPins[ROWS] = {13, 6, 5, 4};
uint8_t yPins[COLS] = {3, 2, 1, 0};

Keypad keypad = Keypad(makeKeymap(keys), xPins, yPins, ROWS, COLS);

void setup() {
  pinMode(LED, OUTPUT);
  initScreen();
}

void loop() {
  char key = keypad.getKey();

    if (key != NO_KEY && index < 4)
    {
      password[index] = key;
      index++;

      password[index] = '\0';

      lcd.setCursor(0, 1);
      lcd.print(password);
    } else if (index >= 4) {
      delay(100);
      verifyKey(password);
      initScreen();
    }
  digitalWrite(LED, LOW);
}

void initScreen() {
  lcd.clear();
  index = 0;
  lcd.begin(16, 2);
  lcd.print("Password...");
}

void verifyKey(char key[5]) {
  char SECRET_KEY[5] = "0000";
  if (strcmp(SECRET_KEY, key)) {
    lcd.clear();
    lcd.print("Access denied!");
    blinkLed(LED);
  } else {
    lcd.clear();
    lcd.print("Access granted!");
    digitalWrite(LED, HIGH);
    delay(2000);
    digitalWrite(LED, LOW);
  }
}

void blinkLed(int led) {
  for (short i = 0; i <= 5; i++) {
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led, LOW);
    delay(200);
  }
}
