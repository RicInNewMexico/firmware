// #define BUTTON_NEED_PULLUP // if set we need to turn on the internal CPU pullup during sleep

#define I2C_SDA 21
#define I2C_SCL 22
#define SPI_INTERFACES_COUNT 1
// #define BUTTON_PIN 39 // 38, 37
// #define BUTTON_PIN 0
#define BUTTON_NEED_PULLUP
// #define EXT_NOTIFY_OUT 13 // Default pin to use for Ext Notify Plugin.

#define BUTTON_PIN 38

#define PIN_BUZZER 25

#undef LORA_SCK
#undef LORA_MISO
#undef LORA_MOSI
#undef LORA_CS

#define LORA_SCK 18
#define LORA_MISO 19
#define LORA_MOSI 23
#define LORA_CS 12

#define USE_RF95
#define LORA_DIO0 35 // a No connect on the SX1262 module
#define LORA_RESET 25
#define LORA_DIO1 RADIOLIB_NC // Not really used
#define LORA_DIO2 RADIOLIB_NC // Not really used

// M5Stack LAN PoE V12 base configuration - comment out if not using ethernet
#define HAS_ETHERNET 1
#define HAS_WIFI 0
#define PIN_ETHERNET_RESET 13
#define PIN_ETHERNET_SS 26
#define ETH_SPI_PORT SPI

// This board has different GPS pins than all other boards
#undef GPS_RX_PIN
#undef GPS_TX_PIN
// #define GPS_RX_PIN 16
// #define GPS_TX_PIN 17

#define TFT_HEIGHT 240
#define TFT_WIDTH 320
#define TFT_OFFSET_X 0
#define TFT_OFFSET_Y 0
#define TFT_BUSY -1

// LCD screens are slow, so slowdown the wipe so it looks better
#define SCREEN_TRANSITION_FRAMERATE 1 // fps

#define ILI9341_SPI_HOST VSPI_HOST // VSPI_HOST or HSPI_HOST