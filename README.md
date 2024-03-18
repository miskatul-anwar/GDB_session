# GDB_session

CSE116

# GDB Commands Cheat Sheet

## Starting and Stopping GDB

- `gdb`: Start GDB.
- `gdb program`: Start GDB and load the specified program.
- `quit` or `q`: Exit GDB.

## Setting Breakpoints

- `break function_name`: Set a breakpoint at the beginning of a function.
- `break filename:line_number`: Set a breakpoint at a specific line in a file.
- `break *address`: Set a breakpoint at a specific memory address.
- `delete breakpoints`: Delete all breakpoints.
- `delete breakpoint n`: Delete breakpoint number n.
- `disable breakpoint n`: Disable breakpoint number n.
- `enable breakpoint n`: Enable breakpoint number n.

## Running and Controlling Execution

- `run` or `r`: Start running the program.
- `continue` or `c`: Continue running until the next breakpoint.
- `next` or `n`: Execute the next line of code, stepping over function calls.
- `step` or `s`: Execute the next line of code, stepping into function calls.
- `finish`: Execute until the current function returns.
- `until`: Continue execution until a specified line is reached.
- `jump location`: Jump to a specified line or address in the code.
- `set args arg1 arg2 ...`: Set command-line arguments for the program.

## Viewing Source Code and Variables

- `list`: Show the source code around the current line.
- `print expression`: Print the value of an expression.
- `info locals`: Show the values of local variables.
- `info args`: Show the values of function arguments.
- `display expression`: Print the value of an expression after each step.
- `whatis name`: Display the data type of a variable or expression.

## Examining Memory and Registers

- `x/nfu address`: Examine memory at the specified address.
  - `n`: Number of units to display.
  - `f`: Format specifier (e.g., x for hexadecimal).
  - `u`: Unit size specifier (e.g., b for bytes, w for words).
- `info registers`: Display the contents of CPU registers.
- `info frame`: Display information about the current stack frame.
- `backtrace` or `bt`: Display the current stack trace.
- `info threads`: Show information about all threads.
- `thread thread_id`: Switch to a specific thread.

## Debugging Multi-Threaded Programs

- `info threads`: Show information about all threads.
- `thread thread_id`: Switch to a specific thread.
- `thread apply all command`: Apply a command to all threads.
- `break thread thread_id function_name`: Set a breakpoint in a specific thread.
- `set scheduler-locking on`: Enable scheduler locking.
- `set scheduler-locking off`: Disable scheduler locking.

## Miscellaneous Commands

- `help command`: Display help for a specific command.
- `set variable value`: Set the value of a variable.
- `show variable`: Show the value of a variable.
- `attach process_id`: Attach GDB to a running process.
- `detach`: Detach GDB from the currently attached process.
- `record`: Start recording execution.
- `replay`: Replay recorded execution.
- `info sharedlibrary`: Show information about shared libraries.
