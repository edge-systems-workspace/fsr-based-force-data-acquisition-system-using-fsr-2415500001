#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Force Measurement System using FSR
 * @author AANYA
 * @date 2026-02-06
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */
int value=0;
/**
 * @brief Initialize Serial communication and any required peripherals.
 *
 * This function configures the Serial port at 9600 baud and prints
 * an initialization banner to the Serial Monitor.
 *
 * @return void
 */
void setup() {
    Serial.begin(9600);
    pinMode(A0, INPUT);
}
/**
 * @brief Main loop to read FSR sensor data and output results.
 *
 * This function continuously reads the analog value from the FSR sensor
 * connected to pin A0, formats the output, and prints it to the Serial Monitor.
 *
 * @return void
 */
void loop(){
    value=analogRead(A0);
