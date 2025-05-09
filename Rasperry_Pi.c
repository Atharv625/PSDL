// Blinking LED

import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BOARD)    # Use physical pin numbering
GPIO.setup(3, GPIO.OUT)     # Set pin 3 as output

try:
    while True:
        GPIO.output(3, True)   # Turn LED ON
        time.sleep(1)          # Wait 1 second
        GPIO.output(3, False)  # Turn LED OFF
        time.sleep(1)          # Wait 1 second
except KeyboardInterrupt:
    GPIO.cleanup()            # Reset GPIO settings on Ctrl+C



// Fixed State - LED Always ON
import RPi.GPIO as GPIO

GPIO.setmode(GPIO.BOARD)
GPIO.setup(3, GPIO.OUT)

GPIO.output(3, True)  # LED is turned ON

// Fixed State - LED Always OFF

import RPi.GPIO as GPIO

GPIO.setmode(GPIO.BOARD)
GPIO.setup(3, GPIO.OUT)

GPIO.output(3, False)  # LED is turned OFF
