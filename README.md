# CPP_Study_Project

This is the Project that studying about how to program `CPP` and 
the basic stuff of `CPP`.

## How to install `C++` in `VS-Code`

### Open `VS-Code Extension` to download `C++`

- Use `Ctrl + Shift + X` to open the `VSCode-Extension`
- Install `C/C++` extension

### Install Compiler

#### Check if you have a complier installed

- [`g++ --version`]
- [`clang --version`]

#### Install `MinGW-x64`

- (`Download Link`)[https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/installer/mingw-w64-install.exe/download]
- Select `x86_64` for `Architecture` in `MinGW-W64` installation windows
- Select `Next` to start the installation

#### Add the `MinGW` complier to your path

- Open `Edit environment variables for your account` from your `settings` menu of `Windows`
- Choose your `Path` variable and then select `Edit`
- Copy & Paste this `Path` into your `Path` Variable 
`C:\Program Files\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin.`
- Select `OK` and re-open `VSCode`

#### Check your `MinGW` Installation
- `g++ --version`
- `gdb -- version`

### Print `Hello World`

- make the folder in `VSCode` and open `VSCode` in that folder
- To open it, type this `code .`

### Build `Hello World`

- Use `Ctrl + Shift + B` key to open `Run Build Task` menu
- Select `C/C++: g++.exe build active file`
- And use `.\yourFilename` or `Ctrl + f5` to build your project

## For more information

- (`Install C/C++ Extension`)[https://code.visualstudio.com/docs/languages/cpp]
