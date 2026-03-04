# Cosine Series Approximation

## Description
A mathematical implementation that calculates the value of the cosine function for a given angle using the Taylor series expansion: `cos(x) = 1 - x^2/2! + x^4/4! - ...`
The program takes an angle in degrees, converts it to radians, and uses nested loops to handle the alternating signs and factorials.

## Concepts Covered
* Mathematical algorithms and Taylor series
* Degree to radian conversion
* Nested `for` loops
* Utilizing the `<math.h>` library (`pow`)

## How to Run
Compile with the math library flag (`-lm`) and run:
gcc "cosine series.c" -o cos_series -lm
./cos_series
