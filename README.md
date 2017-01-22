# Zerda C++ Orientation Exam Retake

## Content Counter
Create a command line application that read files and counts their lines, words and characters 

### Arguments
The file names are just listed as arguments like:
```
a.out input.txt input2.txt input3.txt
```
If the program has run without any other argument it should list the line, word and character numbers aggregated from all files like:
```
12 523 7815
```

If no filename is provided it should print an error message like:
```
No file provided.
```

#### Flags
The first argument optionally can filter the output:

##### -l
If the first argument is `-l` like:
```
a.out -l input.txt
```
Then it should only print the line count

##### -w
If the first argument is `-w` like:
```
a.out -w input.txt
```
Then it should only print the word count

##### -c
If the first argument is `-c` like:
```
a.out -c input.txt
```
Then it should only print the character count

### File handling

If the program can't open any of the files, then it should print an error message like:
```
Can't open file: input.txt
```
It should print the name of the file it could not open first.


### Counting 
It should read the `\n` or the `\n\r` characters as line separators.
It should read any whitespace character as line separator. It should count each character.
The counter logic must covered by unit tests.

### Separate concerns 
Try to separate the argument handling, the file operations and the counting.
