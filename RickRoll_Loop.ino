#include "DigiKeyboard.h"

void setup() 
{
    DigiKeyboard.sendKeyStroke(0); // Initialize keyboard
    delay(1000); // Wait 1 sec
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Windows + R (Opens Run box)
    delay(500);
    DigiKeyboard.print("chrome https://www.youtube.com/watch?v=dQw4w9WgXcQ"); // Open URL
    DigiKeyboard.sendKeyStroke(KEY_ENTER); // Press Enter
}

void loop() 

    DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT); // Open new tab
    delay(500);
    DigiKeyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    delay(5000); // Wait 5 seconds before opening another
}
