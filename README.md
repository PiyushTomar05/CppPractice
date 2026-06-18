# PracticeDSA

This repository contains C++ data structures and algorithms practice problems organized by day. Each file is a standalone program focused on one concept or problem, which makes it easy to compile and run individually while revising core DSA topics.

## Repository Layout

- `Day1/` - basic C++ programs such as factorial, prime checking, function examples, and binomial coefficient
- `Day2/` - number system conversion practice
- `Day3/` - array basics, pointers, linear search, binary search, reverse array, and argument passing
- `Day4/` - array subarray problems, Kadane's algorithm, stock profit, and trapping rain water
- `Day5/` - advanced array problems and sorting algorithms

Some folders also contain assignment-based practice questions.

## How to Run

Compile any file with a C++ compiler such as `g++`.

```bash
g++ Day5/SearchInRotatedArray.cpp -o search
./search
```

On Windows PowerShell, you can run the generated executable directly:

```powershell
g++ Day5/SearchInRotatedArray.cpp -o search.exe
.\search.exe
```

## Notes

- The programs are intentionally written as small, independent examples for practice.
- Some files print prompts and read input from the console.
- Build outputs such as `.exe` files are local artifacts and should not be committed.