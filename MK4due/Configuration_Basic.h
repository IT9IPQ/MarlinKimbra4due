#ifndef CONFIGURATION_BASIC_H
#define CONFIGURATION_BASIC_H
/*
 * This configuration file contains basic settings.
 *
 * - Serial comunication type
 * - Board type
 * - Mechanism type
 * - Extruders number
 * - Thermistor type
 * - Temperature limits
 * - UI Language
 *
 * Mechanisms-settings can be found in Configuration_Xxxxxx.h (where Xxxxxx can be: Cartesian - Delta - Core - Scara)
 * Feature-settings can be found in Configuration_Feature.h
 * Pins-settings can be found in "Configuration_Pins.h"
 */

/***********************************************************************
 ********************** Serial comunication type ***********************
 ***********************************************************************/
// SERIAL PORT selects which serial port should be used for communication with the host.
// This allows the connection of wireless adapters (for instance) to non-default port pins.
// Serial port 0 is still used by the Arduino bootloader regardless of this setting.
#define SERIAL_PORT 0

// This determines the communication speed of the printer
// 2400,9600,19200,38400,57600,115200,250000
#define BAUDRATE 115200

// Enable the Bluetooth serial interface
//#define BLUETOOTH
#define BLUETOOTH_PORT 1
#define BLUETOOTH_BAUD 115200

// User-specified version info of this build to display in [Pronterface, etc] terminal window during
// startup. Implementation of an idea by Prof Braino to inform user that any changes made to this
// build by the user have been successfully uploaded into firmware.
#define STRING_CONFIG_H_AUTHOR "(none, default config)"   // Who made the changes.

// Define this to set a unique identifier for this printer, (Used by some programs to differentiate between machines)
// You can use an online service to generate a random UUID. (eg http://www.uuidgenerator.net/version4)
#define MACHINE_UUID "00000000-0000-0000-0000-000000000000"

// Kill Method
// 0 - Disable heaters, wait forever
// 1 - Reset controller. Will not reset separate communication chips!
#define KILL_METHOD 0

// If you want test the firmware uncomment below. Use Serial arduino monitor...
// ONLY BAUDRATE 115200
//#define FIRMWARE_TEST

// Some particular clients re-start sending commands only after receiving a 'wait' when there is a bad serial-connection.
//#define NO_TIMEOUTS
// Uncomment to include more info in ok command
//#define ADVANCED_OK
/***********************************************************************/


/*****************************************************************************************
 *************************************** Board type **************************************
 *****************************************************************************************
 *                                                                                       *
 * Either an numeric ID or name defined in boards.h is valid.                            *
 * See: https://github.com/MagoKimbra/MarlinKimbra/blob/master/Documentation/Hardware.md *
 *                                                                                       *
 *****************************************************************************************/
#define MOTHERBOARD BOARD_ALLIGATOR
/*****************************************************************************************/


/***********************************************************************
 *************************** Mechanism type ****************************
 ***********************************************************************
 *                                                                     *
 * CARTESIAN  - Prusa, Mendel, etc                                     *
 * COREXY     - H-Bot/Core XY (x_motor = x+y, y_motor = x-y)           *
 * COREYX     - H-Bot/Core XY (x_motor = y+x, y_motor = y-x)           *
 * COREXZ     - H-Bot/Core XZ (x_motor = x+z, z_motor = x-z)           *
 * COREZX     - H-Bot/Core XZ (x_motor = z+x, z_motor = z-x)           *
 * DELTA      - Rostock, Kossel, RostockMax, Cerberus, etc             *
 * SCARA      - SCARA                                                  *
 *                                                                     *
 ***********************************************************************/
#define MECHANISM MECH_CARTESIAN
//#define MECHANISM MECH_COREXY
//#define MECHANISM MECH_COREYX
//#define MECHANISM MECH_COREXZ
//#define MECHANISM MECH_COREZX
//#define MECHANISM MECH_DELTA
//#define MECHANISM MECH_SCARA
/***********************************************************************/


/*************************************************************************************
 ************************************ Power supply ***********************************
 *************************************************************************************
 *                                                                                   *
 * The following define selects which power supply you have.                         *
 * Please choose the one that matches your setup and set to POWER_SUPPLY:            *
 * 0 Normal power                                                                    *
 * 1 ATX                                                                             *
 * 2 X-Box 360 203 Watts (the blue wire connected to PS_ON and the red wire to VCC)  *
 *                                                                                   *
 *************************************************************************************/
#define POWER_SUPPLY 0
// Define this to have the electronics keep the power supply off on startup. If you don't know what this is leave it.
//#define PS_DEFAULT_OFF
/*************************************************************************************/


/***********************************************************************
 ************************** Extruders number ***************************
 ***********************************************************************/
// This defines the number of extruder real or virtual
#define EXTRUDERS 1

// This defines the number of Driver extruder you have and use
#define DRIVER_EXTRUDERS 1
/***********************************************************************/


/***********************************************************************
 *************************** UI Language  ******************************
 ***********************************************************************
 *                                                                     *
 * Select the language that you prefer and change LANGUAGE_CHOICE      *
 *                                                                     *
 * 1  English                                                          *
 * 2  Polish                                                           *
 * 3  French                                                           *
 * 4  German                                                           *
 * 5  Spanish                                                          *
 * 6  Russian                                                          *
 * 7  Italian                                                          *
 * 8  Portuguese                                                       *
 * 9  Finnish                                                          *
 * 10 Aragonese                                                        *
 * 11 Dutch                                                            *
 * 12 Danish                                                           *
 * 13 Catalan                                                          *
 * 14 Basque-Euskera                                                   *
 * 15 Portuguese (Brazil)                                              *
 * 16 Bulgarian                                                        *
 * 17 Japanese                                                         *
 * 18 Japanese utf                                                     *
 * 19 Chinese                                                          *
 *                                                                     *
 ***********************************************************************/
#define LANGUAGE_CHOICE 1
/***********************************************************************/
#endif
