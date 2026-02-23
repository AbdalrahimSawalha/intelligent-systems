# Pacman Heuristic Evaluation (C++) 👾

---

## Overview 📘

- In this project, I implemented a simple Pacman-like grid environment using C++.

- The main goal of the project is to calculate heuristic values that can help evaluate the current state of the game.

- The program focuses on two main heuristic measurements:

- The number of remaining pills in the grid.

- The shortest distance between Pacman and the nearest ghost.

- This project demonstrates how heuristic functions can be used in game AI and search-based decision systems.

---

## Game Representation 🗺️

- The environment is represented using a fixed 11 × 20 matrix.

- Each number inside the matrix represents a specific element in the game:

- 1 → Wall

- 0 → Empty path

- 2 → Pill

- 3 → Ghost

- 4 → Pacman

- The grid is manually initialized in the program to simulate a predefined game state.

---

## Heuristic Functions 🧠

### 1. Pill Heuristic 🍬

- I implemented a function that scans the entire grid and counts how many pills (value 2) are still available.

- This value represents how much reward is still left in the environment.

### 2. Ghost Distance Heuristic 👻

- To evaluate danger, I calculate the Manhattan Distance between Pacman and each ghost:

- Distance = |x1 - x2| + |y1 - y2|

- Then I select the shortest distance among all ghosts.

- This value indicates how close the nearest threat is.

---

## Program Flow 🔄

- Initialize the game state.

- Print the grid.

- Count remaining pills.

- Compute the shortest distance to a ghost.

- Display both heuristic values.

---

## Concepts Demonstrated 📚

- Grid-based environment modeling

- Manhattan distance calculation

- Heuristic evaluation functions

- Basic AI evaluation logic

---

## Tools Used 🛠️

- C++

- Standard Library

- Console-based output

---

## Purpose of the Project 🎯

- The purpose of this project is to understand how heuristic functions can evaluate a game state without implementing a full search algorithm.

- It is a foundational step toward building AI systems such as:

- Minimax

- A*

- Game tree evaluation

---

## Author 👨‍💻

Abdalrahim Sawalha

---
## Course 

Intelligent Systems (AI & ML)
