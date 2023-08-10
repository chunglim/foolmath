# Welcome to the `foolmath` Repository!

<!-- # ![FoolMath Logo](link_to_logo_image) -->

## What is FoolMath?

Have you ever encountered a mathematical fool proofs? Those seem so ponder, counterintuitive and absurd. Some of them are quirky, while many of them are backed by impeccable logic? That's what **`foolmath`** is all about! Our repository is a treasure trove or collection of mind-bending demonstrations that challenge your preconceptions about numbers, geometry, algebra, calculus and more that will leave you scratching your head.

## Why You'll Love FoolMath:

- **Entertainment and Education Combined:** Engage in a unique blend of amusement and learning. There proofs might seem ridiculous at first glance, but they'll also reveal hidden insights about mathematical concepts.

- **Thought-Provoking Discussions:** Dive into discussions that dissect the nuances of each fool proof. Share your thoughts, arguments, and counterarguments with fellow enthusiasts.

- **Expand Your Mathematical Horizons:** Push the boundaries of your mathematical knowledge by exploring the unconventional, and sometimes absurd, side of math.

## How to Get Involved:

1. **Explore the Foolishness:** Browse through our collection of fool proofs. Brace yourself for a rollercoaster ride and head-scratching confusion.

2. **Join the Discussion:** Find errors or oversights in each proof. Connect with fellow math aficionados, puzzle enthusiasts, and those who thrive on intellectual entertainment. Let's redefine the way we perceive mathematical truths! Each fool proof comes with a dedicated discussion section. Share your insights, ideas, and even your frustrations. The more perspectives, the merrier!

3. **Contribute Your Own Maths Paradox Proofs:** Do you have a mind-boggling mathematical demonstration that you'd like to share? I encourage contributions from all levels of mathematical enthusiasts.

**Note:**
1. Almost all mathematical proofs herein are foolish, unless noted otherwise.
2. Code of plain-text LaTeX (.tex) files are in src/.

## Let's start!

We firstly start from the well-known **Ramanujan Summation**, which is known to most mathematicians.

### **Ramanujan Summation** $\qquad1+2+3+4+5+6+...\quad=\quad?$

```math
\begin{align*}
S\quad&\,=\quad1+2+3+...\\
\mathrm{Let}\qquad S_1\quad&\,=\quad1-1+1-1+...\\
1-S_1\quad&\,=\quad1-(1+1-1+1-...)\\
1-S_1\quad&\,=\quad1-1+1-1+...\\
1-S_1\quad&\,=\quad S1\\
2S_1\quad&\,=\quad1\\
S_1\quad&\,=\quad\frac{1}{2}\\
\mathrm{Let}\qquad S_2\quad&\,=\quad1-2+3-4+5-6+...\\
2S_2\quad&=\quad1-2+3-4+5-6+...\\
\quad&\,\qquad\quad\,+1-1+3-4+5-6\\
2S_2\quad&\,=\quad1-1+1-1+...\\
2S_2\quad&\,=\quad S_1\\
S_2\quad&\,=\quad\frac{S_1}{2}\\
S_2\quad&\,=\quad\frac{1}{4}\\
S-S_2\quad&\,=\quad1+2+3+4+5+6+7+8+...\\
\quad&\,\quad-(1-2+3-4+5-6+7-...)\\
S-S_2\quad&\,=\quad4+8+12+16+...\\
S-S_2\quad&\,=\quad4(1+2+3+4+...)\\
S-S_2\quad&\,=\quad4S\\
3S\quad&\,=\quad-S_2\\
S\quad&\,=\quad-\frac{S_2}{3}\\
S\quad&\,=\quad-\frac{1}{3*4}\\
\mathrm{Thus}\qquad S\quad&\,=\quad-\frac{1}{12}
\end{align*}
```

### **Yet, there is a Ramanujan alternative**

```math
\begin{align*}
S\quad&\,=\quad1+2+3+4+5+6+7+8+9+10+...\\
S\quad&\,=\quad1+(2+3+4)+(5+6+7)+(8+9+10)+...\\
S\quad&\,=\quad1+(9+18+27+...)\\
S\quad&\,=\quad1+9(1+2+3+...)\\
S\quad&\,=\quad1+9S\\
8S\quad&\,=\quad-1\\
\mathrm{Thus}\qquad S\quad&\,=\quad-\frac{1}{8}
\end{align*}
```
Oops, was Ramanujan wrong?

### **What if summation of the power of two** $\qquad\sum_{n=0}^{\infty}2^n$

```math
\begin{align*}
\mathrm{Let}\qquad S\quad&\,=\quad\sum_{n=0}^\infty 2^n\\
S\quad&\,=\quad1+2+4+8+16+32+...\\
S\quad&\,=\quad1+2(1+2+4+8+16+...)\\
S\quad&\,=\quad1+2S\\
\mathrm{Thus}\qquad S\quad&\,=\quad-1
\end{align*}
```
Negative! once again.

More to come ...
