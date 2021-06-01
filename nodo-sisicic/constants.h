/**
    Header que contiene constantes relevantes para el accionar del programa principal.
    @file constants.h
    @author Franco Abosso
    @author Julio Donadello
    @version 1.0 29/03/2021
*/

/// Comunicación serial.
#define DEBUG_LEVEL 1				// Nivel de debug (0 inhabilita el puerto serial).
#define SERIAL_BPS 9600				// Bitrate de las comunicaciones por puerto serial (físico).
#define GPS_BPS 9600                // Bitrate de las comunicaciones por puerto serial del GPS (virtual).

/// LoRa.
#define LORA_FREQ 433175000 		// Frecuencia de la transmisión LoRa (en Hz).
#define DEVICE_ID 20009 			// Identificador de este nodo.
#define BROADCAST_ID (DEVICE_ID - DEVICE_ID % 10000 + 9999)   // ID broadcast para este tipo de nodo.
#define DEVICE_ID_MAX_SIZE 6           // Tamaño máximo que se espera para cada DEVICE_ID entrante.
#define INCOMING_PAYLOAD_MAX_SIZE 50   // Tamaño máximo esperado del payload LoRa entrante.
#define INCOMING_FULL_MAX_SIZE (INCOMING_PAYLOAD_MAX_SIZE + DEVICE_ID_MAX_SIZE + 2) // Tamaño máximo esperado del mensaje entrante.
#define MAX_SIZE_OUTCOMING_LORA_REPORT 200      // Tamaño máximo esperado del payload LoRa saliente.
#define KNOWN_COMMANDS_SIZE 1       // Cantidad de comandos LoRa conocidos.
#define LORA_TIMEOUT 20			    // Tiempo entre cada mensaje LoRa.
#define LORA_SYNC_WORD 0x34			// Palabra de sincronización LoRa.

/// Arrays.
#define SENSORS_QTY 2               // Cantidad de sensores conectados.
#define TIMEOUT_READ_SENSORS 2      // Tiempo entre mediciones.
#define ARRAY_SIZE (LORA_TIMEOUT / TIMEOUT_READ_SENSORS + 3)
#define TIMING_SLOTS 4 				// Cantidad de slots necesarios de timing (ver timing_helpers.h)

// Sensores.
#define MAX_DISTANCE 50             // Distancia al fondo del tanque [F].
#define MIN_DISTANCE 5              // Distancia al borde del tanque [B].
#define CAPACIDAD_COMBUSTIBLE 150   // Capacidad del tanque (en L).
#define PI_TIMES_R_SQUARED (CAPACIDAD_COMBUSTIBLE) / (MAX_DISTANCE - MIN_DISTANCE)
#define PING_SAMPLES 5              // Cantidad de muestras ultrasónicos.
#define EMON_CROSSINGS 20           // Cantidad de semi-ondas muestreadas para medir tensión y/o corriente.
#define EMON_TIMEOUT 1000           // timeout de la rutina calcVI (en ms).

/// Valores mock.
// #define CORRIENTE_MOCK 0.26        // Corriente falsa.
// #define RAINDROP_MOCK 0            // Lluvia falsa.
// #define NAFTA_MOCK 128.22          // Nafta falsa.
// #define GPS_MOCK (const float[]){-34.57475, -58.43552, 15} // GPS falso.
