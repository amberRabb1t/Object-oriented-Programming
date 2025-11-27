# Battleship‑Game

A first‑year engineering project: a console implementation of the classic Battleship game in C++.  

## Table of Contents

- [Description](#description)  
- [Features](#features)  
- [Requirements](#requirements)  
- [Compilation & Running](#compilation--running)  
- [How to Play](#how-to-play)  
- [License / Credits](#license--credits)  

---

## Description

Battleship‑Game is a simple C++ console application that allows two players (or one player vs basic AI / random setup — depending on how you extend it) to play a game of Battleship.  
The project was created as an educational exercise to:  
- practice C++ including object‑oriented design, classes, and header/source separation,  
- implement game logic including ships, grid management, player turns, and hit/miss detection,  
- get familiar with building small multi‑file C++ projects.  

---

## Features

- Representation of a grid (sea) and ship placement.  
- Ship and player abstractions (classes) for modular game logic.  
- Turn‑based gameplay: players take turns guessing coordinates to hit opponent ships.  
- Basic validation for hits, misses, and sinking ships.  

---

## Requirements

- A working C++ compiler (e.g. `g++`, `clang++`, or similar) supporting C++11 or newer.  
- A command‑line / terminal environment to compile and run.  

---

## Compilation & Running

To compile the project, from the root directory run something like:

```bash
g++ -std=c++11 main.cpp game.cpp grid.cpp ship.cpp player.cpp square.cpp deck.cpp card.cpp -o battleship
```
Depending on your system and which files you actually use, adjust accordingly.

Then run:
```bash
./battleship
```
to start the game in console / terminal.

## How to Play

The game initializes a sea grid and places ships (manually or randomly).

Players take turns selecting coordinates (e.g. row and column) to “shoot” at the opponent’s grid.

After each shot, the game informs whether it was a hit, miss, or if a ship was sunk.

The game continues until one player sinks all opponent’s ships.

## License / Credits

This project was developed by Athanasios Konstantis as a first‑year engineering exercise. Feel free to use, modify or extend it for educational purposes.