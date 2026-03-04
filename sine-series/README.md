# Sine Series Approximation

## Description
Calculates the value of the sine function using its Taylor series expansion: `sin(x) = x - x^3/3! + x^5/5! - ...`
This specific implementation is hardcoded to find the value of `sin(30 degrees)` to demonstrate the logic using odd powers and alternating signs via a `while` loop.

## Concepts Covered
* Taylor series implementation for odd functions
* `while` loops vs. `for` loops
* Alternating mathematical signs
* `<math.h>` library (`pow`)

## How to Run
Compile with the math library flag (`-lm`) and run:
gcc "sine series.c" -o sin_series -lm
./sin_series
