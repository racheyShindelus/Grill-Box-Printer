# Grill Box Printer

This C program prints a grill box with a specified height and width based on user input.

## How it Works

1. The program prompts the user to enter the width and height of the grill box.
2. It reads the input width and height.
3. It checks if the entered width and height are within the specified range (2-30 for width, 2-12 for height).
4. If the entered dimensions are valid, it prints the dimensions of the grill box and calls the `printBox` function to print the grill box.
5. If the entered dimensions are invalid, it prints error messages indicating the specific issue with the dimensions.

## Notes

- The program checks if the entered dimensions are within the specified range and prints error messages if not.
- It prints the grill box using asterisks (*) for corners, hyphens (-) for top and bottom lines, and vertical bars (|) for side lines.
- It demonstrates the use of conditionals, loops, and user input processing.
