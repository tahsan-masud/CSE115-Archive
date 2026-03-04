# Exponential Series Approximation

## Description
This program computes the value of Euler's number `e` raised to the power of `x` using the Maclaurin series expansion: `e^x = 1 + x + x^2/2! + x^3/3! + ...`
It asks the user for the value of `x` and the number of terms `n` to dictate the precision of the approximation.

## Concepts Covered
* Maclaurin series implementation
* Floating-point arithmetic (`double`)
* Iterative factorial calculation
* The `<math.h>` library (`pow`)

## How to Run
Compile with the math library flag (`-lm`) and run:
gcc "e^x series.c" -o exp_series -lm
./exp_series
