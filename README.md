# Simple Calculator 🧮

A basic command-line calculator written in C that performs common mathematical operations.

## Features ✨

- **Basic Operations**: Addition, subtraction, multiplication, division
- **Advanced Operations**: Exponentiation and square root
- **Input Validation**: Handles invalid input gracefully
- **Error Prevention**: Checks for division by zero and negative square roots
- **User-Friendly**: Clear prompts and error messages

## Supported Operations 🔢

| Operator | Symbol | Example |
|----------|--------|---------|
| Addition | `+` | `5 + 3` |
| Subtraction | `-` | `10 - 4` |
| Multiplication | `*` | `6 * 7` |
| Division | `/` | `15 / 3` |
| Exponentiation | `^` | `2 ^ 3` |
| Square Root | `s` | `25 s 0` |

## How to Use 🚀

1. **Compile the program:**
   ```bash
   gcc calculator.c -o calculator -lm
   ```

2. **Run the program:**
   ```bash
   ./calculator
   ```

3. **Enter calculations in the format:**
   ```
   number operator number
   ```

4. **Examples:**
   - `5 + 3` → Result: 8
   - `10 / 2` → Result: 5
   - `2 ^ 4` → Result: 16
   - `25 s 0` → Result: 5 (square root of 25)

## Error Handling ⚠️

The calculator handles common errors:
- **Division by zero**: Shows error message and asks for new input
- **Negative square root**: Prevents calculation of imaginary numbers
- **Invalid format**: Prompts user to enter correct format
- **Invalid operators**: Shows supported operators list

## Notes 📝

- For square root operation, only the first number is used (the second number is ignored)
- The program will continue asking for calculations until you type 'n' when asked to continue
- All calculations use floating-point numbers for precision

## Requirements 🛠️

- C compiler (GCC recommended)
- Math library (`-lm` flag needed for compilation)
- Standard C libraries: `stdio.h`, `stdlib.h`, `string.h`, `math.h`, `ctype.h`

---

*Happy calculating! 🎯*
