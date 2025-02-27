#include "DigiKeyboard.h"

void setup() 
{
    DigiKeyboard.sendKeyStroke(0); // Initialize keyboard
    delay(1000); // Wait 1 second for system recognition

    // Open Run dialog
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    delay(500);

    // Open a full-screen fake Windows Update website
    DigiKeyboard.print("chrome --kiosk https://fakeupdate.net/win10/");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    delay(2000); // Wait for Chrome to open

    // Full screen (F11 key)
    DigiKeyboard.sendKeyStroke(KEY_F11);
}

void loop() 
{
    DigiKeyboard.sendKeyStroke(0); // Keeps keyboard disabled
    delay(500);
}
