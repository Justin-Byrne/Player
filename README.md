# Player

![issues](https://img.shields.io/github/issues/Justin-Byrne/Player)
![forks](https://img.shields.io/github/forks/Justin-Byrne/Player)
![stars](https://img.shields.io/github/stars/Justin-Byrne/Player)
![license](https://img.shields.io/github/license/Justin-Byrne/Player)

Player is a basic program designed as the basis of an RPG-like character generator developed in C++ for educational and extracurricular purposes.

## Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [Model](#model)
- [Support](#support)
- [Structure](#structure)
- [Copyright](#copyright)

## Installation

Migrate to your desired download location on your local machine using your (either) your console or terminal, and download this repository to your system using git clone:

```sh
git clone https://github.com/Justin-Byrne/Player.git
```

Utilize the Makefile within the Player subdirectory immediately under the root directory, and utilize the following command(s) for the platform that you are using:

### Windows 

```sh
> make win32
> make clean
```

### Linux

```sh
# make linux
# make clean
```

**Note:** Your compiled binary output will be generated under the *bin* directory, inside the *release* directory. It's from this directory that you can execute your compiled file.

## Usage

Usage for this application can be found by using the `--help` flag, at the prompt:

```sh
> Player --help

Usage:  Player <[option]||[no]> [name] [class] <[max]||[int] [str] [vit] [dex] [lck]>

        Options:
                --help          Display this help and exit
                --version       Output version information and exit

        Params:
                [no]            Number associated with the generated character
                [name]          Name of the generated character
                [class]         Class of the generated character
                [max]           Max boundary to couple with a minimum boundary of 1
                                for a random number generator generating values for
                                all 5 attributes: <int> <str> <vit> <dex> <lck>
                [int]           Set the value for the intelligence attribute
                [str]           Set the value for the strength attribute
                [vit]           Set the value for the vitality attribute
                [dex]           Set the value for the dexterity attribute
                [lck]           Set the value for the luck attribute

```

Presently, there are two primary methods of generating a character with this program:

1. `# Player 1 Bob Hunter 20`
2. `# Player 2 Bob Hunter 8 10 17 12 7`

## Model

Basic Model of classes, class inheritance, and interface implementations.

![Model](https://raw.githubusercontent.com/Justin-Byrne/Player/master/Player/Player/doc/models/UML%20Basic%20Diagram.svg)

## Support

Please [open an issue](https://github.com/Justin-Byrne/Player/issues/new) for support.

## Structure

    . (master)
    │
    │
    ├── Player
    │   │
    │   ├── Player
    │   │   │
    │   │   ├── bin
    │   │   │   │
    │   │   │   ├── debug
    │   │   │   └── release
    │   │   │
    │   │   ├── doc
    │   │   │   │
    │   │   │   ├── Doxygen (API Documentation)
    │   │   │   │   │
    │   │   │   │   ├── html
    │   │   │   │   │   │
    │   │   │   │   │   ├── index.html (Index to API HTML Documentation)
    │   │   │   │   │   ├── ...
    │   │   │   │   │   └── search
    │   │   │   │   │       │
    │   │   │   │   │       └── ...
    │   │   │   │   │
    │   │   │   │   ├── latex (LATEX Graphics for Documentation)
    │   │   │   │   │   │
    │   │   │   │   │   └── ...
    │   │   │   │   │
    │   │   │   │   ├── rtf (Rich Text Formatting Reference Material)
    │   │   │   │   │   │
    │   │   │   │   │   ├── refman.rtf (API Reference Manual)
    │   │   │   │   │   └── ...
    │   │   │   │   │
    │   │   │   │   └── Doxygen (Save File)
    │   │   │   │
    │   │   │   ├── models
    │   │   │   │   │
    │   │   │   │   ├── UML Basic Diagram.svg
    │   │   │   │   ├── UML Detailed Diagram.svg
    │   │   │   │   ├── READEME.md
    │   │   │   │   └── ... (Extra files)
    │   │   │   │
    │   │   │   ├── CHANGELOG.md
    │   │   │   └── LICENSE.txt
    │   │   │
    │   │   ├── include
    │   │   │   ├── ATTRIBUTES.h
    │   │   │   ├── CHARACTER.h
    │   │   │   └── MACRO.h
    │   │   │
    │   │   ├── src
    │   │   │   ├── ATTRIBUTES.cpp
    │   │   │   └── CHARACTER.cpp
    │   │   │
    │   │   ├── Main.cpp
    │   │   ├── Makefile
    │   │   ├── Player.vcxproj
    │   │   ├── Player.vcxproj.filters
    │   │   └── Player.vcxproj.user
    │   │
    │   └── Player.sln
    │
    ├── .gitignore
    ├── LICENSE
    └── READEME.md

## Copyright

![Byrne-Systems](http://byrne-systems.com/content/static/cube_sm.png)

== Byrne-Systems © 2019 - All rights reserved. ==