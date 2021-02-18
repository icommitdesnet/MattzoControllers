/*
 * SBrickConst.h - definition of enum types and constants
 * 
 * (c) Copyright 2021 - Raymond Brink
 * Released under MIT License
 * 
*/

#ifndef SBrickConst_h
#define SBrickConst_h

#define SBRICK_REMOTECONTROL_SERVICE_UUID "4dc591b0-857c-41de-b5f1-15abda665b0c"
#define SBRICK_REMOTECONTROL_CHARACTERISTIC_UUID "02b8cbcc-0e25-4bda-8790-a15f53e6010f"
 
#define SBRICK_GENERICACCESS_SERVICE_UUID "1800"
#define SBRICK_GENERICACCESS_CHARACTERISTIC_DEVICE_NAME_UUID "2a00" /* SBrickY */
#define SBRICK_GENERICACCESS_CHARACTERISTIC_APPEARANCE_UUID "2a01" /* ⸮ */

#define SBRICK_DEVICEINFORMATION_SERVICE_UUID "180a"
#define SBRICK_DEVICEINFORMATION_CHARACTERISTIC_MODEL_NUMBER_UUID "2a24" /* 00 (SBrick and SBrick Plus) */
#define SBRICK_DEVICEINFORMATION_CHARACTERISTIC_FIRMWARE_REVISION_UUID "2a26" /* 5.25 */
#define SBRICK_DEVICEINFORMATION_CHARACTERISTIC_HARDWARE_REVISION_UUID "2a27" /* 5.0 */
#define SBRICK_DEVICEINFORMATION_CHARACTERISTIC_SOFTWARE_REVISION_UUID "2a28" /* 5.25 */
#define SBRICK_DEVICEINFORMATION_CHARACTERISTIC_MANUFACTURER_NAME_UUID "2a29" /* Vengit Ltd.*/


struct Version
{
  int HardwareVersionMajor;
  int HardwareVersionMinor;
  int FirmwareVersionMajor;
  int FirmwareVersionMinor;
};

enum struct BLEManufacturerData
{
  SBRICK_AND_SBRICK_PLUS_ID = 0x00,
  SBRICK_LIGHT_ID = 0x01
};

enum struct SBrickProduct
{
  SBRICK_AND_SBRICK_PLUS = 0,
  SBRICK_LIGHT = 1,
  UNKNOWN = 99
};

enum struct SBrickAndSBrickPlusHardwareVersion
{
  SBRICK_REV_1 = 4,
  SBRICK_REV_2 = 5,
  SBRICK_PLUS_REV_1 = 11,
  SBRICK_REV_3 = 12,
  SBRICK_PLUS_REV_2 = 13
};

enum struct SBrickLightHardwareVersion
{
  SBRICK_LIGHT_REV_1 = 1
};

//
//
//
//enum struct MessageHeader
//{
//  LENGTH = 0x00,
//  HUB_ID = 0x01,
//  MESSAGE_TYPE = 0x02
//};
//
//enum struct DeviceType
//{
//  UNKNOWNDEVICE = 0,
//  SIMPLE_MEDIUM_LINEAR_MOTOR = 1,
//  TRAIN_MOTOR = 2,
//  LIGHT = 8,
//  VOLTAGE_SENSOR = 20,
//  CURRENT_SENSOR = 21,
//  PIEZO_BUZZER = 22,
//  TILT_SENSOR = 34,
//  MOTION_SENSOR = 35,
//  COLOR_DISTANCE_SENSOR = 37,
//  MEDIUM_LINEAR_MOTOR = 38,
//  TECHNIC_LARGE_LINEAR_MOTOR = 46,   // Technic Control+
//  TECHNIC_XLARGE_LINEAR_MOTOR = 47,  // Technic Control+
//  TECHNIC_MEDIUM_ANGULAR_MOTOR = 48, // Spike Prime
//  TECHNIC_LARGE_ANGULAR_MOTOR = 49,  // Spike Prime
//  TECHNIC_MEDIUM_HUB_GEST_SENSOR = 54,
//  REMOTE_CONTROL_BUTTON = 55,
//  REMOTE_CONTROL_RSSI = 56,
//  TECHNIC_MEDIUM_HUB_ACCELEROMETER = 57,
//  TECHNIC_MEDIUM_HUB_GYRO_SENSOR = 58,
//  TECHNIC_MEDIUM_HUB_TILT_SENSOR = 59,
//  TECHNIC_MEDIUM_HUB_TEMPERATURE_SENSOR = 60,
//  TECHNIC_COLOR_SENSOR = 61,              // Spike Prime
//  TECHNIC_DISTANCE_SENSOR = 62,           // Spike Prime
//  TECHNIC_FORCE_SENSOR = 63,              // Spike Prime
//  TECHNIC_MEDIUM_ANGULAR_MOTOR_GREY = 75, // Mindstorms
//  TECHNIC_LARGE_ANGULAR_MOTOR_GREY = 76   // Mindstorms
//};
//
//enum struct MessageType
//{
//  HUB_PROPERTIES = 0x01,
//  HUB_ACTIONS = 0x02,
//  HUB_ALERTS = 0x03,
//  HUB_ATTACHED_IO = 0x04,
//  GENERIC_ERROR_MESSAGES = 0x05,
//  HW_NETWORK_COMMANDS = 0x08,
//  FW_UPDATE_GO_INTO_BOOT_MODE = 0x10,
//  FW_UPDATE_LOCK_MEMORY = 0x11,
//  FW_UPDATE_LOCK_STATUS_REQUEST = 0x12,
//  FW_LOCK_STATUS = 0x13,
//  PORT_INFORMATION_REQUEST = 0x21,
//  PORT_MODE_INFORMATION_REQUEST = 0x22,
//  PORT_INPUT_FORMAT_SETUP_SINGLE = 0x41,
//  PORT_INPUT_FORMAT_SETUP_COMBINEDMODE = 0x42,
//  PORT_INFORMATION = 0x43,
//  PORT_MODE_INFORMATION = 0x44,
//  PORT_VALUE_SINGLE = 0x45,
//  PORT_VALUE_COMBINEDMODE = 0x46,
//  PORT_INPUT_FORMAT_SINGLE = 0x47,
//  PORT_INPUT_FORMAT_COMBINEDMODE = 0x48,
//  VIRTUAL_PORT_SETUP = 0x61,
//  PORT_OUTPUT_COMMAND = 0x81,
//  PORT_OUTPUT_COMMAND_FEEDBACK = 0x82,
//};
//
//enum struct HubPropertyReference
//{
//  ADVERTISING_NAME = 0x01,
//  BUTTON = 0x02,
//  FW_VERSION = 0x03,
//  HW_VERSION = 0x04,
//  RSSI = 0x05,
//  BATTERY_VOLTAGE = 0x06,
//  BATTERY_TYPE = 0x07,
//  MANUFACTURER_NAME = 0x08,
//  RADIO_FIRMWARE_VERSION = 0x09,
//  LEGO_WIRELESS_PROTOCOL_VERSION = 0x0A,
//  SYSTEM_TYPE_ID = 0x0B,
//  HW_NETWORK_ID = 0x0C,
//  PRIMARY_MAC_ADDRESS = 0x0D,
//  SECONDARY_MAC_ADDRESS = 0x0E,
//  HARDWARE_NETWORK_FAMILY = 0x0F,
//};
//
//enum struct ButtonState
//{
//  PRESSED = 0x01,
//  RELEASED = 0x00,
//  UP = 0x01,
//  DOWN = 0xff,
//  STOP = 0x7f
//};
//
//enum struct HubPropertyOperation
//{
//  SET_DOWNSTREAM = 0x01,
//  ENABLE_UPDATES_DOWNSTREAM = 0x02,
//  DISABLE_UPDATES_DOWNSTREAM = 0x03,
//  RESET_DOWNSTREAM = 0x04,
//  REQUEST_UPDATE_DOWNSTREAM = 0x05,
//  UPDATE_UPSTREAM = 0x06,
//};
//
//enum struct BrakingStyle
//{
//  FLOAT = 0,
//  HOLD = 126,
//  BRAKE = 127
//};

#endif
