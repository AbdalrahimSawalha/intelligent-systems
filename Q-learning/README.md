# Q-Learning Algorithm (C++ Implementation) 🤖

---

## 1. Overview 📘

- This project implements the Q-Learning reinforcement learning algorithm from scratch using C++.
- The system learns optimal state-action values through repeated interactions with an environment.
- The implementation uses a predefined reward matrix and updates a Q-Table iteratively.
- No external machine learning libraries were used.

---

## 2. Problem Description 🎯

- The environment consists of 6 states.
- Each state allows transitions to other states.
- Some transitions are invalid (represented by -1 in the Reward table).
- The goal is to learn optimal transitions that maximize reward.

---

## 3. Core Concepts 🧠

- State
- Action
- Reward
- Q-Table
- Discount Factor (Gamma)

---

## 4. Bellman Equation Used 📐

The Q-value is updated using:

```id="q_formula_clean"
Q(s, a) = R(s, a) + γ * max Q(a, a')
```

Where:

- Q(s, a) = value of taking action a in state s
- R(s, a) = immediate reward
- γ = discount factor
- max Q(a, a') = maximum expected future reward

---

## 5. Reward Table 📊

The reward matrix defines valid and invalid transitions:

- -1 → invalid move
- 0 → valid move
- 100 → goal state

The agent learns by exploring random valid transitions.

---

## 6. Implementation Details ⚙️

The project includes:

- Random state and action selection
- Q-Table update using Bellman equation
- Reward matrix representation
- Matrix display functions
- Episode-based learning loop

---

## 7. Program Flow 🔄

- Initialize Q-Table with zeros.
- Define Reward matrix.
- Ask user for number of episodes.
- Randomly choose valid state-action pairs.
- Update Q-Table.
- Display final learned Q-Table.

---

## 8. Parameters 📌

- Discount Factor (Gamma) = 0.8
- Number of Episodes = user input

---

## 9. Concepts Demonstrated 📚

- Reinforcement Learning fundamentals
- Q-Learning algorithm
- Bellman Equation
- Value iteration concept
- Matrix-based environment modeling

---

## 10. Tools Used 🛠️

- C++
- Standard Library
- Console-based simulation

---


##  Author 👨‍💻

Abdalrahim Sawalha

---

##  Course

Intelligent Systems (AI & ML)
