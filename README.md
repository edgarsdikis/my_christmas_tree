# Welcome to My Christmas Tree
***

## Task
```markdown
Create a terminal-based program that generates and displays a Christmas tree. 
The size of the tree is determined by a command-line argument.

Challenges:
- Calculating the width of each tree level to ensure proper alignment.
- Maintaining symmetry for both the tree levels and the trunk.
- Dynamically adapting the tree's appearance based on the given size.

```

## Description
```markdown
The program solves the problem by breaking the tree generation into modular steps:

1. Base Calculation:
The width of the largest level is calculated using an incremental formula that adjusts after every two levels.

2. Top Alignment:
The top width of each level narrows progressively to create the tree shape. Adjustments ensure that the tree remains symmetric.

3. Trunk Rendering:
The trunk width is based on the input size, with adjustments for odd and even sizes. It is centered relative to the tree base.

4. Dynamic Printing:
Each level is printed row by row, with stars (*) representing the tree and spaces ensuring alignment.

By combining these steps, the program dynamically creates a well-aligned Christmas tree based on the provided size.
```


## Installation
1. Clone the repository or copy the ```my_christmas_tree.c``` file into your working directory.
2. Compile the program using GCC or another C compiler:
```bash
gcc -o my_christmas_tree my_christmas_tree.c
```


## Usage
Run the program from the terminal with a single positive integer as the argument, representing the size of the tree.

Example:
```bash
./my_christmas_tree 5
```
**Sample Outputs8**
Input: ```./my_christmas_tree 1```
```markdown
   *
  ***
 *****
*******
   |
```

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
