/************************************************************************************
 *  Created By: Tauseef Ahmad
 *  Created On: 10 October, 2021
 *  
 *  Tutorial Video: https://youtu.be/yem5EysVloc
 *  My Channel: https://www.youtube.com/channel/UCOXYfOHgu-C-UfGyDcu5sYw/
 *  
 *  *********************************************************************************
 *  Preferences--> Aditional boards Manager URLs : 
 *  For STM32:
 *  http://dan.drown.org/stm32duino/package_STM32duino_index.json
 *  
 *  STM32 Flasher Tool:
 *  https://www.st.com/en/development-tools/flasher-stm32.html
 *  
 *  STM32 bin File: (generic_boot20_PC13.bin)
 *  https://github.com/rogerclarkmelbourne/STM32duino-bootloader/tree/master/binaries
 *  
 *  STM32 Maple Driver:
 *  https://github.com/rogerclarkmelbourne/Arduino_STM32
 **********************************************************************************/

#define LED_BUILTIN PC13

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
