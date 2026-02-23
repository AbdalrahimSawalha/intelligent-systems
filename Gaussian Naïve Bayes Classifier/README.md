# Gaussian Naïve Bayes Classifier (C++ Implementation) 🤖

---

## 1. Overview 📘

- This project implements a Gaussian Naïve Bayes classifier from scratch using C++.

- The classifier predicts gender (Male / Female) based on physical measurements.

- The model uses probability theory and Gaussian distribution for classification.

- No external Machine Learning libraries were used.

---

## 2. Problem Statement 🎯

The classifier predicts whether a person is:

- Male

- Female

Based on three features:

- Height

- Weight

- Foot Size

---

## 3. Algorithm Explanation 🧠

The implementation follows the Gaussian Naïve Bayes approach:

- Calculate mean (Average) for each feature per class.

- Calculate variance for each feature per class.

- Apply Gaussian Probability Density Function:

[
P(x | C) = (1 / sqrt(2πσ²)) * exp( - (x - μ)² / (2σ²) )
]

Where:

- ( μ ) = mean of the feature for the class

- ( σ² ) = variance of the feature for the class

- ( x ) = input feature value

- Multiply likelihoods of all features.

- Multiply by prior probability.

- Compare posterior probabilities.

---

## 4. Training Data 📊

The dataset is manually defined inside the code.

Male Data:

- Weight: {180, 190, 170, 165}

- Height: {6.00, 5.92, 5.58, 5.92}

- Foot Size: {12, 11, 12, 10}

Female Data:

- Weight: {100, 150, 130, 150}

- Height: {5.00, 5.50, 5.42, 5.75}

- Foot Size: {6, 8, 7, 9}

Prior Probability:

- P(Male) = 0.5

- P(Female) = 0.5

---

## 5. Implementation Details ⚙️

The project includes:

- Mean calculation function

- Variance calculation function

- Gaussian probability function

- Male probability function

- Female probability function

- Posterior probability comparison

The classification decision is based on:

[
P(Male | X) / ( P(Male | X) + P(Female | X) )
]

---

## 6. Program Flow 🔄

- User enters height, weight, and foot size.

- The system calculates likelihood for Male.

- The system calculates likelihood for Female.

- Posterior probabilities are computed.

- Final classification is displayed.

- User can test multiple inputs.

---

## 7. Concepts Demonstrated 📚

- Bayes Theorem

- Gaussian Distribution

- Statistical Mean

- Variance

- Probabilistic Classification

- Machine Learning fundamentals

---

## 8. Tools Used 🛠️

- C++

- library

- Console-based interaction

---

## 9. Learning Outcome 🎓

This project demonstrates understanding of:

- Probabilistic Machine Learning

- Statistical computation

- Implementing classifiers without external libraries

- Mathematical modeling in C++

---

##  Author 👨‍💻

Abdalrahim Sawalha

---

##  Course 

Intelligent Systems (AI & ML)

---
