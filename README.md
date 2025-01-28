# Agent1 Project

## Introduction to CMake

CMake is a powerful open-source tool that helps in managing the build process of software projects. It is widely used to configure, compile, and build multi-platform software in an efficient and organized way. With CMake, you can define project requirements, specify dependencies, and manage builds across various environments (Linux, Windows, macOS) seamlessly. This project uses CMake to configure and build a modular C++ project.

---

## Repository Structure

```plaintext
.
├── CMakeLists.txt          # Main CMake configuration file
├── main.cpp                # Main application file
├── library1/               # Static library directory
│   ├── first.cpp           # Implementation file for the library
│   └── first.h             # Header file for the library
├── SubProject/             # Subdirectory for additional modules
│   ├── CMakeLists.txt      # Subproject-specific CMake configuration
│   ├── ...                 # (Subproject files)
├── .gitignore              # gitignore file
└── README.md               # Project documentation