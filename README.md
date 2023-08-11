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

**Notes:**
1. Almost all mathematical proofs here are foolish, unless noted otherwise.
2. Code of plain-text LaTeX `.tex` files are in `src/`.
3. Best view on any browsers, `GitHub` app on mobile devices doesn't render LaTeX.

## Let's start!

We firstly start from the well-known **Ramanujan Summation**, which is known to most mathematicians.

### **Ramanujan Summation** $\qquad1+2+3+4+5+6+...\quad=\quad?$

```math
\begin{align*}
S\quad&\,=\quad1+2+3+...\\
\mathrm{Let}\qquad S_1\quad&\,=\quad1-1+1-1+...\\
1-S_1\quad&\,=\quad1-(1+1-1+1-...)\\
\,&\,=\quad1-1+1-1+...\\
\,&\,=\quad S1\\
2S_1\quad&\,=\quad1\\
S_1\quad&\,=\quad\frac{1}{2}\\
\mathrm{Let}\qquad S_2\quad&\,=\quad1-2+3-4+5-6+...\\
2S_2\quad&=\quad1-2+3-4+5-6+...\\
\quad&\,\qquad\quad\,+1-1+3-4+5-6\\
\,&\,=\quad1-1+1-1+...\\
2S_2\quad&\,=\quad S_1\\
S_2\quad&\,=\quad\frac{S_1}{2}\\
S_2\quad&\,=\quad\frac{1}{4}\\
S-S_2\quad&\,=\quad1+2+3+4+5+6+7+8+...\\
\quad&\,\quad-(1-2+3-4+5-6+7-...)\\
\,&\,=\quad4+8+12+16+...\\
\,&\,=\quad4(1+2+3+4+...)\\
S-S_2\quad&\,=\quad4S\\
3S\quad&\,=\quad-S_2\\
S\quad&\,=\quad-\frac{S_2}{3}\\
\,&\,=\quad-\frac{1}{3*4}\\
\mathrm{Thus}\qquad S\quad&\,=\quad-\frac{1}{12}
\end{align*}
```
_source code:_&nbsp;[rama_sum.tex](./src/rama_sum.tex)

### **Yet, there is a Ramanujan alternative**

```math
\begin{align*}
S\quad&\,=\quad1+2+3+4+5+6+7+8+9+10+...\\
\,&\,=\quad1+(2+3+4)+(5+6+7)+(8+9+10)+...\\
\,&\,=\quad1+(9+18+27+...)\\
\,&\,=\quad1+9(1+2+3+...)\\
S\quad&\,=\quad1+9S\\
8S\quad&\,=\quad-1\\
\mathrm{Thus}\qquad S\quad&\,=\quad-\frac{1}{8}
\end{align*}
```
_source code:_&nbsp;[rama_alt.tex](./src/rama_alt.tex)

Oops, was Ramanujan wrong?

### **What if summing the power of two**

```math
\begin{align*}
\mathrm{Let}\qquad S\quad&\,=\quad\sum_{n=0}^\infty 2^n\\
\,&\,=\quad1+2+4+8+16+32+...\\
\,&\,=\quad1+2(1+2+4+8+16+...)\\
S\quad&\,=\quad1+2S\\
\mathrm{Thus}\qquad S\quad&\,=\quad-1
\end{align*}
```
_source code:_&nbsp;[sum_power_of_2.tex](./src/sum_power_of_2.tex)

Negative! once again.

### **What if summing all natural odd numbers**

```math
\begin{align*}
S\quad&\,=\quad1+3+5+7+9+...\\
-\frac{1}{12}\quad&\,=\quad1+2+3+4+5+6+7+8+9+10+...\\
\,&\,=\quad(1+3+5+7+9+...)+(2+4+6+8+10+...)\\
\,&\,=\quad(1+3+5+7+9+...)+2(1+2+3+4+5+...)\\
\,&\,=\quad(1+3+5+7+9+...)+2\left(-\frac{1}{12}\right)\\
-\frac{1}{12}\quad&\,=\quad(1+3+5+7+9+...)-\frac{2}{12}\\
1+3+5+7+9+...\quad&\,=\quad\frac{2}{12}-\frac{1}{12}\\
\mathrm{Thus}\qquad1+3+5+7+9+...\quad&\,=\quad\frac{1}{12}
\end{align*}
```
_source code:_&nbsp;[sum_of_odd.tex](./src/sum_of_odd.tex)

Wow! this time the summation is positive.

### **Trying summing all natural even numbers**

```math
\begin{align*}
S\quad&\,=\quad2+4+6+8+10+...\\
-\frac{1}{12}\quad&\,=\quad1+2+3+4+5+6+7+8+9+10+...\\
\,&\,=\quad(1+3+5+7+9+...)+(2+4+6+8+10+...)\\
-\frac{1}{12}\quad&\,=\quad\frac{1}{12}+(2+4+6+8+10+...)\\
-\frac{1}{12}\quad&\,=\quad\frac{1}{12}+S\\
\mathrm{Thus}\qquad S\quad&\,=\quad-\frac{1}{6}
\end{align*}
```
_source code:_&nbsp;[sum_of_even.tex](./src/sum_of_even.tex)

It is even greater than summation of all natural numbers

_More to come ..._
