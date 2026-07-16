# Simple Text Editor in C++

**INTERN ID - CITS6602**

## Description

This simple, console-based C++ text editor provides an intuitive interface for fundamental file operations. Users can effortlessly create new text files, append data to existing ones, read file contents directly in the terminal, and securely delete files, ensuring a streamlined writing experience.

## Features

- **Write Mode**: Create a completely new file and write multi-line text into it. (Type `:q` on a new line to save).
- **Append Mode**: Open an existing file and safely add new text to the bottom without overwriting the previous contents.
- **Read Mode**: Instantly fetch and display the contents of any text file directly in the console.
- **Delete Mode**: Securely delete any text file from your system.
- **Error Handling**: Gracefully warns the user if a file doesn't exist when trying to read or delete it.

## Prerequisites

To run this text editor, you will need:
- A standard C++ compiler (like `g++`, `clang++`, or MSVC)

## How to Build and Run

1. **Clone the repository**:
   ```bash
   git clone <your-repository-url>
   cd <repository-directory>
   ```

2. **Compile the code**:
   Using `g++`:
   ```bash
   g++ -o text_editor main.cpp
   ```

3. **Run the executable**:
   - On Windows:
     ```bash
     .\text_editor.exe
     ```
   - On Linux/macOS:
     ```bash
     ./text_editor
     ```

## License

This project is open-source and available under the [MIT License](LICENSE).
