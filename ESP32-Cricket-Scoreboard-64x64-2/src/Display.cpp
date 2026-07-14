#include "Display.h"
#include <MD_MAX72xx.h>
#include <SPI.h>
#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 8
#define DATA_PIN 23
#define CLK_PIN 18
#define CS_PIN 5
static MD_Parola disp(HARDWARE_TYPE,DATA_PIN,CLK_PIN,CS_PIN,MAX_DEVICES);
void DisplayManager::begin(){disp.begin();disp.setIntensity(3);disp.displayClear();}
void DisplayManager::showStartup(){disp.displayText("ESP32 Cricket Scoreboard",PA_CENTER,50,0,PA_SCROLL_LEFT,PA_SCROLL_LEFT);}
