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

### **Ramanujan Summation**

$\qquad1+2+3+4+5+6+...\quad=\quad?$

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
\frac{2}{12}-\frac{1}{12}\quad&\,=\quad1+3+5+7+9+...\\
\mathrm{Thus}\qquad\frac{1}{12}\quad&\,=\quad1+3+5+7+9+...
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

Why is it negative again, who know?

### **Why 0 = 1?**

Here come the most foolish proof!

#### **Solution 1**

```math
\begin{align*}
0\quad&\,=\quad0+0+0+0+...\\
\,&\,=\quad(1-1)+(1-1)+(1-1)+(1-1)+...\\
\,&\,=\quad1+(-1+1)+(-1+1)+(-1+1)+...\\
\,&\,=\quad1+0+0+0+0+...\\
\mathrm{Thus}\qquad0\quad&\,=\quad1
\end{align*}
```
_source code:_&nbsp;[0eq1_0.tex](./src/0eq1_0.tex)

What about the second most foolish proof?

#### **Solution 2**

```math
\begin{align*}
\mathrm{Let}\qquad S\quad&\,=\quad1+1+1+1++1...\\
\,&\,=\quad1+(1+1+1+1+...)\\
\cancel{S}\quad&\,=\quad1+\cancel{S}\\
\mathrm{Thus}\qquad0\quad&\,=\quad1
\end{align*}
```
_source code:_&nbsp;[0eq1_1.tex](./src/0eq1_1.tex)

Is there any proof looking more advanced than these?

#### **Solution 3**

```math
\begin{align*}
\int u\,dv\quad&\,=\quad uv-\int v\,du\\
\int\frac{1}{x}\,dx\quad&\,=\quad\cancel{x}\frac{1}{\cancel{x}}-\int x\,d\left(\frac{1}{x}\right)\\
\,&\,=\quad1-\int x\,d(x^{-1})\\
\,&\,=\quad1-\int x\,(-1x^{-2})\,dx\\
\,&\,=\quad1+\int x.x^{-2}\,dx\\
\cancel{\int\frac{1}{x}\,dx}\quad&\,=\quad1+\cancel{\int\frac{1}{x}\,dx}\\
\mathrm{Thus}\qquad0\quad&\,=\quad1
\end{align*}
```
_source code:_&nbsp;[0eq1_2.tex](./src/0eq1_2.tex)

Can you find an error?<br><br>
Hmm, binary no longer exists.

### **Why 1 = 2?**

Here, the proof I learnt in junior high school.

#### **Solution 1**

```math
\begin{align*}
\mathrm{Let}\qquad a\quad&\,=\quad b\\
*b~\mathrm{both~sides}\qquad a*b\quad&\,=\quad b*b\\
a*b\quad&\,=\quad b^2\\
-a^2~\mathrm{both~sides}\qquad a*b-a^2\quad&\,=\quad b*b-a^2\\
a(b-a)\quad&\,=\quad b^2-a^2\\
a\cancel{(b-a)}\quad&\,=\quad\cancel{(b-a)}(b+a)\\
\mathrm{since}~b=a\qquad a\quad&\,=\quad a+a\\
\cancel{a}\quad&\,=\quad2\cancel{a}\\
\mathrm{Thus}\qquad1\quad&\,=\quad2
\end{align*}
```
_source code:_&nbsp;[1eq2_0.tex](./src/1eq2_0.tex)

Nah, there is another proof in high school using trigonometry.

#### **Solution 2**

```math
\begin{align*}
\mathrm{Where}~x=\frac{\pi}{4}~or~\frac{5\pi}{4}\qquad\cos{x}\quad&\,=\quad\sin{x}\\
\cos{2x}\quad&\,=\quad\sin{2x}\\
1-2\sin^2{x}\quad&\,=\quad2\sin{x}\cos{x}\\
\mathrm{As}~\sin{x}=\cos{x}\qquad1-2\sin^2{x}\quad&\,=\quad2\cos{x}\cos{x}\\
\,&\,=\quad2\cos^2{x}\\
1\,&\,=\quad2\sin^2{x}+2\cos^2{x}\\
\,&\,=\quad2\cancelto{1}{(\sin^2{x+\cos^2{x}})}\\
\mathrm{Thus}\qquad1\quad&\,=\quad2
\end{align*}
```
_source code:_&nbsp;[1eq2_1.tex](./src/1eq2_1.tex)

Yet, there is another proof using calculus.

#### **Solution 3**

```math
\begin{align*}
\underbrace{x+x+x+...+x}_{x~terms}\quad&\,=\quad x*x\\
\,&\,=\quad x^2\\ \\
\mathrm{diff~both~sides}\qquad\underbrace{1+1+1+...+1}_{x~terms}\quad&\,=\quad2x\\
\cancel{x}\quad&\,=\quad2\cancel{x}\\ \\
\mathrm{Thus}\qquad1\quad&\,=\quad2
\end{align*}
```
_source code:_&nbsp;[1eq2_2.tex](./src/1eq2_2.tex)

Do you find any clues?

### **Do you know that 1 = -1?**

```math
\begin{align*}
1\quad&\,=\quad\sqrt{1}\\
\,&\,=\quad\sqrt{(-1)(-1)}\\
\,&\,=\quad\sqrt{-1}\sqrt{-1}\\
\,&\,=\quad i*i\\
\,&\,=\quad i^2\\
\mathrm{Thus}\qquad1\quad&\,=\quad-1
\end{align*}
```
_source code:_&nbsp;[1eq-1_0.tex](./src/1eq-1_0.tex)

From now on, what I owe you is what you owe me.

### **Let's see a little higher number, 4 = 5.**

```math
\begin{align*}
-20\quad&\,=\quad-20\\
16-36\quad&\,=\quad25-45\\
4^2-4*9\quad&\,=\quad5^2-5*9\\
+\frac{81}{4}\mathrm{both~sides}\qquad4^2-4*9+\frac{81}{4}\quad&\,=\quad5^2-5*9+\frac{81}{4}\\
4^2-2*4*\frac{9}{2}+\left(\frac{9}{2}\right)^2\quad&\,=\quad5^2-2*5*\frac{9}{2}+\left(\frac{9}{2}\right)^2\\
\left(4-\frac{9}{2}\right)^2\quad&\,=\quad\left(5-\frac{9}{2}\right)^2\\
\sqrt{}~\mathrm{both~sides}\qquad4-\cancel{\frac{9}{2}}\quad&\,=\quad5-\cancel{\frac{9}{2}}\\
\mathrm{Thus}\qquad4\quad&\,=\quad5
\end{align*}
```
_source code:_&nbsp;[4eq5_0.tex](./src/4eq5_0.tex)

Hey, what? How come, 4 = 5?<br><br>
Wait, there are something more.

### **Are all intergers equal?**

```math
\begin{alignat*}{3}
&\,&&\frac{-1}{1}&&=\quad\frac{1}{-1}&&(1)\\
&\,&&\sqrt{\frac{-1}{1}}&&=\quad\sqrt{\frac{1}{-1}}&&(2)\\
&\,&&\frac{\sqrt{-1}}{\sqrt{1}}&&=\quad\frac{\sqrt{1}}{\sqrt{-1}}&&(3)\\
&\,&&\frac{i}{1}&&=\quad\frac{1}{i}&&(4)\\
&*\frac{1}{2}&&\frac{i}{2}&&=\quad\frac{1}{2i}&&(5)\\
&+\frac{3}{2i}&&\frac{i}{2}+\frac{3}{2i}&&=\quad\frac{1}{2i}+\frac{3}{2i}&&(6)\\
&*i&&i\left(\frac{i}{2}+\frac{3}{2i}\right)&&=\quad i\left(\frac{1}{2i}+\frac{3}{2i}\right)&&(7)\\
&\,&&\frac{i^2}{2}+\frac{3\cancel{i}}{2\cancel{i}}&&=\quad\frac{\cancel{i}}{2\cancel{i}}+\frac{3\cancel{i}}{2\cancel{i}}&&(8)\\
&\.&&-\frac{1}{2}+\frac{3}{2}&&=\quad\frac{1}{2}+\frac{3}{2}&&(9)\\
&\,&&\frac{-1+3}{2}&&=\quad\frac{1+3}{2}&&(10)\\
&\,&&\frac{\cancel{2}}{\cancel{2}}&&=\quad\cancelto{2}{\frac{4}{2}}&&(11)\\
&\,&&1&&=\quad2&&(12)\\
&\mathrm{from~(9)}&&-\frac{1}{2}+\cancel{\frac{3}{2}}&&=\quad\frac{1}{2}+\cancel{\frac{3}{2}}&&(13)\\
&\,&&-\frac{1}{\cancel{2}}&&=\quad\frac{1}{\cancel{2}}&&(14)\\
&\,&&-1&&=\quad1&&(15)\\
&+1&&-1+1&&=\quad1+1&&(16)\\
&\,&&0&&=\quad2&&(17)\\
&\mathrm{from~(12),(15),(17)}\qquad&&-1~=~0&&=\quad1~=~2&&(18)
\end{alignat*}
```
_source code:_&nbsp;[all_int_eq.tex](./src/all_int_eq.tex)

It is very articulate, indeed.<br><br>
There is one more simple equation. Have a look.

### **Was I wrongly taught? Why 2 + 5 = 8?**

```math
\begin{align*}
2+5\quad&\,=\quad4+3\\
\,&\,=\quad4-\frac{9}{2}+\frac{9}{2}+3\\
\,&\,=\quad\sqrt{\left(4-\frac{9}{2}\right)^2}+\frac{9}{2}+3\\
\,&\,=\quad\sqrt{16-2.4.\frac{9}{2}+\left(\frac{9}{2}\right)^2}+\frac{9}{2}+3\\
\,&\,=\quad\sqrt{16-36+\left(\frac{9}{2}\right)^2}+\frac{9}{2}+3\\
\,&\,=\quad\sqrt{-20+\left(\frac{9}{2}\right)^2}+\frac{9}{2}+3\\
\,&\,=\quad\sqrt{25-45+\left(\frac{9}{2}\right)^2}+\frac{9}{2}+3\\
\,&\,=\quad\sqrt{25-2.5.\frac{9}{2}+\left(\frac{9}{2}\right)^2}+\frac{9}{2}+3\\
\,&\,=\quad\sqrt{5^2-2.5.\frac{9}{2}+\left(\frac{9}{2}\right)^2}+\frac{9}{2}+3\\
\,&\,=\quad\sqrt{\left(5-\frac{9}{2}\right)^2}+\frac{9}{2}+3\\
\,&\,=\quad5-\cancel{\frac{9}{2}}+\cancel{\frac{9}{2}}+3\\
\\mathrm{Thus}\qquad2+5\quad&\,=\quad8
\end{align*}
```
_source code:_&nbsp;[2plus5eq8_0.tex](./src/2plus5eq8_0.tex)

Do you find any errors?<br><br>
Who said `0` couldn't be a denominator? See the following fool proofs.

### **Very silly solutions to find 0 / 0**

#### **Let's see the first fool.**

```math
\begin{align*}
\mathrm{Let}\qquad\frac{2}{0}\quad&\,=\quad\frac{x}{1}\\
\mathrm{Multiply~0~both~sides}\qquad\frac{2*0}{0}\quad&\,=\quad\frac{x*0}{1}\\
\mathrm{Divide~2~both~sides}\qquad\frac{\cancel{2}*0}{0*\cancel{2}}\quad&\,=\quad\cancelto{0}{\frac{x*0}{1*2}}\\
\mathrm{Thus}\qquad\frac{0}{0}\quad&\,=\quad0
\end{align*}
```
_source code:_&nbsp;[0by0_0.tex](./src/0by0_0.tex)

#### **Here, the second fool, which is very silly.**

```math
\begin{align*}
\frac{0}{0}\quad&\,=\quad\frac{100-100}{100-100}\\
\,&\,=\quad\frac{10*10-10*10}{10*10-10*10}\\
\,&\,=\quad\frac{10^2-10^2}{10(10-10)}\\
\,&\,=\quad\frac{(10+10)\cancel{(10-10)}}{10\cancel{(10-10)}}\\
\,&\,=\quad\frac{20}{10}\\
\mathrm{Thus}\qquad\frac{0}{0}\quad&\,=\quad2
\end{align*}
```
_source code:_&nbsp;[0by0_1.tex](./src/0by0_1.tex)

Bruh, how can you divide (10 - 10) with (10 - 10)?

### **Who said _i_ is imaginary, why _i = 1_, then?**

```math
\begin{align*}
i\quad&\,=\quad\sqrt{-1}\\
i^2\quad&\,=\quad \sqrt{-1}.\sqrt{-1}\\
\,&\,=\quad\sqrt{(-1)(-1)}\\
\,&\,=\quad\sqrt{1}\\
i^2\quad&\,=\quad1\\
\mathrm{Thus}\qquad i\quad&\,=\quad1
\end{align*}
```
_source code:_&nbsp;[ieq1_0.tex](./src/ieq1_0.tex)

### **Let's talk more about _i_.**

#### **This is the _correct proof_ of $\frac{1}{i}$.**

```math
\begin{align*}
-1\quad&\,=\quad i^2\\
\mathrm{divided~by~(-i)~both~sides}\qquad\frac{-1}{-i}\quad&\,=\quad\frac{i^2}{-i}\\
\mathrm{Thus}\qquad\frac{1}{i}\quad&\,=\quad-i\qquad\mathrm{(correct~proof)}
\end{align*}
```
_source code:_&nbsp;[inv_i_correct.tex](./src/inv_i_correct.tex)

Nah, there is another $\frac{1}{i}$, but it is foolish.

#### **This is the _fool proof_ of $\frac{1}{i}$.**

```math
\begin{align*}
\frac{1}{i}\quad&\,=\quad i^{-1}\\
\,&\,=\quad\sqrt{-1}^{-1}\\
\,&\,=\quad\left((-1)^\frac{1}{2}\right)^{-1}\\
\,&\,=\quad\left((-1)^{-1}\right)^\frac{1}{2}\\
\,&\,=\quad\left(\frac{1}{-1}\right)^\frac{1}{2}\\
\,&\,=\quad-1^\frac{1}{2}\\
\,&\,=\quad\sqrt{-1}\\
\mathrm{Thus}\qquad\frac{1}{i}\quad&\,=\quad i\qquad\mathrm{(fool~proof)}
\end{align*}
```
_source code:_&nbsp;[inv_i_fool.tex](./src/inv_i_fool.tex)

Which one will you believe?

<br><br>

_More to come, keep following ..._
