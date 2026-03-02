# Student Admission Management System (C)

This is a two-part C programming project developed to manage student admission records. It demonstrates core C fundamentals including dynamic memory allocation, struct manipulation, binary/text File I/O, and sorting algorithms.

### How It Works
* **Part 1 (`2534470642_1.c`):** Dynamically allocates memory for $n$ candidates, takes user input (Name, Pass Number, Phone), and securely writes the data to a binary file (`admission-253.dat`).
* **Part 2 (`2534470642_2.c`):** Reads the binary file, prompts the user to input the marks for each candidate, sorts the candidates in descending order using a bubble sort algorithm, and outputs the final ranked results to a text file (`results-253.txt`).

### Technical Concepts Applied
* `struct` implementations
* `malloc()` and `free()` memory management
* Binary and standard File I/O (`fread`, `fwrite`, `fprintf`)
