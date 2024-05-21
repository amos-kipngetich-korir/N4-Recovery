#ifndef DEFS_H
#define DEFS_H

/* debug parameters for use during testing - disable before launch */
#define DEBUG 1

#if DEBUG

#define debug(x) Serial.print(x)
#define debugln(x) Serial.println(x)
#define debugf(x, y) Serial.printf(x, y)

#else

#define debug(x)
#define debugln(x)
#define debugf(x, y)

#endif

/* end of debug parameters */

/* timing constant */
#define SETUP_DELAY 300
#define TASK_DELAY 10

/* flight constants */
#define EJECTION_HEIGHT 1000 // eject at 1000m AGL
#define SEA_LEVEL_PRESSURE 101325 // Assume the sea level pressure is 101325 Pascals - this can change with weather
#define BASE_ALTITUDE 1417 /* this value is the altitude at rocket launch site */

/* tasks constants */
#define STACK_SIZE 2048
#define ALTIMETER_QUEUE_LENGTH 10 // todo: change to 2 items
#define GYROSCOPE_QUEUE_LENGTH 10
#define GPS_QUEUE_LENGTH 24
#define ALL_TELEMETRY_DATA_QUEUE_LENGTH  10
#define FILTERED_DATA_QUEUE_LENGTH 10
#define FLIGHT_STATES_QUEUE_LENGTH 1

/* MQTT constants */
#define MQTT_SERVER "192.168.78.19"
#define MQTT_PORT 1882

/* WIFI credentials */
const char* SSID = "Galaxy";
const char* PASSWORD = "luwa2131";

/* ROCKET FLIGHT STATES */
#define PRE_FLIGHT          0
#define POWERED_FLIGHT      1
#define COASTING            2
#define APOGEE              3
#define BALLISTIC_DESCENT   4
#define PARACHUTE_DESCENT   5
#define POST_FLIGHT         6
#define UNDEFINED_STATE         7

#define EJECTION_PIN 12
/* LEDs for testing - remove on production */
#define PRE_FLIGHT_LED 4
int counter = 0;


// MPU6050 addresses definitions 
#define MPU6050_ADDRESS         0x68
#define GYRO_CONFIG             0x1B
#define ACCEL_CONFIG            0x1C
#define PWR_MNGMT_1             0x6B
#define RESET                   0x00
#define SET_GYRO_FS_1000        0x10
#define SET_ACCEL_FS_2G         0x00
#define ACCEL_XOUT_H            0x3B
#define ACCEL_XOUT_L            0x3C
#define ACCEL_YOUT_H            0x3D
#define ACCEL_YOUT_L            0x3E
#define ACCEL_ZOUT_H            0x3F
#define ACCEL_ZOUT_L            0x40
#define GYRO_XOUT_H             0x43
#define GYRO_XOUT_L             0x44
#define GYRO_YOUT_H             0x45
#define GYRO_YOUT_L             0x46
#define GYRO_ZOUT_H             0x47
#define GYRO_ZOUT_L             0x48
#define TEMP_OUT_H              0x41
#define TEMP_OUT_L              0x42

#endif
#define TX 17
#define RX 16