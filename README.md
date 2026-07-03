# Zoo Management System

Zoo Management System is a C++ console application for managing a small zoo inventory. The program uses a menu-driven interface to view and update animal records, simulate basic animal actions, and support reporting-related workflows.

## Features

- Console-based, menu-driven interface
- Animal inventory management
- Basic reporting and animal attribute workflows
- Object-oriented design with separate classes for each animal type

## Build and Run

This project has no external dependencies. Build it with any modern C++ compiler.

### Example with g++

```bash
g++ *.cpp -std=c++17 -o ZooManagementSystem
./ZooManagementSystem
```

### Visual Studio

Open the folder in Visual Studio, set `ZooManagementSystem.cpp` as the startup file, and build the solution.

## Notes

- The application is intended for local, interactive use in a terminal.
- Source files are organized by animal type and supporting zoo logic.