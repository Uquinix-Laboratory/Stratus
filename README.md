What is Stratus?
================

Stratus is a modern operating system with the objective of simplicity and performance.

Stratus is built upon a highly capability-focused micro-kernel, which is written totally in modern C - making it efficient and performant. We target numerous architectures ranging from x86_64, i686, RISC-V, and ARM. One of the main goals of Stratus is to keep a clean codebase and allow developers to truly harness the power of Stratus through clean APIs. A pivotal component of Stratus is that it features a modern C library with fibres, allocators, data structures and more.  

For security-related enquiries, please encrypt your email using our [GPG key](https://developer.uquinix.com/keys/signing-key.asc) and contact security@uquinix.com.

Basis of Stratus
================
Stratus is based on the original code of [BRUTAL](https://github.com/stratus-org/stratus); building on top of it with enhanced drivers, secured code, and an improved graphical user interface - all whilst remaining fully open source and keeping the initial values of the project intact.

Source Tree
===========
| Directory | Description |
| --------- | ----------- |
| .github | GitHub Actions for testing and building Stratus. |
| build | Build System & Toolchain for Stratus. |
| docs | Documentation regarding building Stratus. |
| sources | Main directory, the entire system. (see [sources/README.md](sources/README.md)) |
| sysroot | Boot management, user directories, and packages. |

Documentation
=============

Documentation, including build instructions, can be found in [building.md](docs/building.md)
