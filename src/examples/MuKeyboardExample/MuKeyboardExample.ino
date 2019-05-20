#include "MuKeyboard.h"

void setup()
{

  // Open the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  wait(500);

  Keyboard.print("Hello world!");

  wait(500);

  Keyboard.press(KEY_RETURN);
  wait(50);
  Keyboard.release(KEY_RETURN);
  
  // Closing stream
  Keyboard.end();
}

void loop() {
//We don't need to loop!
}
