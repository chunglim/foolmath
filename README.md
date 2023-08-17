# Welcome to the `foolmath` repository!

<!-- # ![foolmath logo](link_to_logo_image) -->

## What is foolmath?

Are you a fellow math aficionado or enthusiast? Have you ever encountered a mathematical fool proofs? Those seem so strange, queer, quirky and absurd. Many of them are foolish, while some of them are backed by impeccable logic. That's what **`foolmath`** is all about! We intend this repository to be a treasure trove or collection of mind-bending demonstrations that challenge your concepts about numbers, algebra, calculus and more. They will leave you scratching your head dissecting each equation to find errors or oversights in each proof.

**Notes:**
1. Almost all mathematical proofs here are foolish, unless noted otherwise.
2. Code of plain-text LaTeX `.tex` files is in `src/`.
3. Best view on any browsers, `GitHub` app on mobile devices doesn't render LaTeX.

**Proofs are louder than words.**

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
\begin{alignat*}{3}
&\mathrm{Let}&&\qquad a&&=\quad b\\
&*b~\mathrm{both~sides}&&\quad a*b&&=\quad b*b\\
&\,&&\quad a*b&&=\quad b^2\\
&-a^2~\mathrm{both~sides}\qquad&& a*b-a^2&&=\quad b*b-a^2\\
&\,&&a(b-a)&&=\quad b^2-a^2\\
&\,&&a\cancel{(b-a)}&&=\quad\cancel{(b-a)}(b+a)\\
&\mathrm{since}~b=a&&\qquad a&&=\quad a+a\\
&\,&&\qquad\cancel{a}&&=\quad2\cancel{a}\\
&\mathrm{Thus}&&\qquad1&&=\quad2
\end{alignat*}
```
_source code:_&nbsp;[1eq2_0.tex](./src/1eq2_0.tex)

Nah, there is another proof in high school using trigonometry.

#### **Solution 2**

```math
\begin{alignat*}{3}
&\mathrm{Where}~x=\frac{\pi}{4}~or~\frac{5\pi}{4}&&\qquad\cos{x}&&=\quad\sin{x}\\
&\,&&\qquad\cos{2x}&&=\quad\sin{2x}\\
&\,&&1-2\sin^2{x}&&=\quad2\sin{x}\cos{x}\\
&\mathrm{As}~\sin{x}=\cos{x}\quad&&1-2\sin^2{x}&&=\quad2\cos{x}\cos{x}\\
&\,&&\,&&=\quad2\cos^2{x}\\
&\,&&\qquad\quad1&&=\quad2\sin^2{x}+2\cos^2{x}\\
&\,&&\,&&=\quad2\cancelto{1}{(\sin^2{x+\cos^2{x}})}\\
&\mathrm{Thus}&&\qquad\quad1&&=\quad2
\end{alignat*}
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
\begin{alignat*}{3}
&\,&&\qquad\qquad\qquad-20&&=\quad-20\\
&\,&&\qquad\qquad\quad16-36&&=\quad25-45\\
&\,&&\qquad\qquad4^2-4*9&&=\quad5^2-5*9\\
&+\frac{81}{4}\mathrm{both~sides}&&\qquad4^2-4*9+\frac{81}{4}&&=\quad5^2-5*9+\frac{81}{4}\\
&\,&&4^2-2*4*\frac{9}{2}+\left(\frac{9}{2}\right)^2&&=\quad5^2-2*5*\frac{9}{2}+ \left(\frac{9}{2}\right)^2\\
&\,&&\qquad\qquad\quad\left(4-\frac{9}{2}\right)^2&&=\quad\left(5-\frac{9}{2}\right)^2\\
&\sqrt{}~\mathrm{both~sides}&&\qquad\qquad\qquad4-\cancel{\frac{9}{2}}&&=\quad5-\cancel{\frac{9}{2}}\\
&\mathrm{Thus}&&\qquad\qquad\qquad\qquad4&&=\quad5
\end{alignat*}
```
_source code:_&nbsp;[4eq5_0.tex](./src/4eq5_0.tex)

Hey, what? How come, 4 = 5?<br><br>
Wait, there are something more.

### **Are all intergers equal?**

```math
\begin{alignat*}{3}
&\,&&\qquad\frac{-1}{1}&&=\quad\frac{1}{-1}\quad&&(1)\\
&\,&&\quad\sqrt{\frac{-1}{1}}&&=\quad\sqrt{\frac{1}{-1}}\quad&&(2)\\
&\,&&\quad\frac{\sqrt{-1}}{\sqrt{1}}&&=\quad\frac{\sqrt{1}}{\sqrt{-1}}\quad&&(3)\\
&\,&&\qquad\quad\frac{i}{1}&&=\quad\frac{1}{i}\quad&&(4)\\
&*\frac{1}{2}&&\qquad\quad\frac{i}{2}&&=\quad\frac{1}{2i}\quad&&(5)\\
&+\frac{3}{2i}&&\quad\frac{i}{2}+\frac{3}{2i}&&=\quad\frac{1}{2i}+\frac{3}{2i}\quad&&(6)\\
&*i&&i\left(\frac{i}{2}+\frac{3}{2i}\right)&&=\quad i\left(\frac{1}{2i}+\frac{3}{2i}\right)\quad&&(7)\\
&\,&&\frac{i^2}{2}+\frac{3\cancel{i}}{2\cancel{i}}&&=\quad\frac{\cancel{i}}{2\cancel{i}}+\frac{3\cancel{i}}{2\cancel{i}}\quad&&(8)\\
&\.&&-\frac{1}{2}+\frac{3}{2}&&=\quad\frac{1}{2}+\frac{3}{2}\quad&&(9)\\
&\,&&\frac{-1+3}{2}&&=\quad\frac{1+3}{2}\quad&&(10)\\
&\,&&\qquad\quad\frac{\cancel{2}}{\cancel{2}}&&=\quad\cancelto{2}{\frac{4}{2}}\quad&&(11)\\
&\,&&\qquad\quad1&&=\quad2\quad&&(12)\\
&\mathrm{from~(9)}&&-\frac{1}{2}+\cancel{\frac{3}{2}}&&=\quad\frac{1}{2}+\cancel{\frac{3}{2}}\quad&&(13)\\
% line (14): Can't add `\cancel` inside `\frac`, MathJax bug?
&\,&&\qquad\quad-\frac{1}{2}&&=\quad\frac{1}{2}\quad&&(14)\\
&\,&&\qquad\quad-1&&=\quad1\quad&&(15)\\
&+1&&\qquad-1+1&&=\quad1+1\quad&&(16)\\
&\,&&\qquad\qquad0&&=\quad2\quad&&(17)\\
&\mathrm{from~(12),(15),(17)}\qquad&&-1~=~0&&=\quad1~=~2\quad&&(18)
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
\mathrm{Thus}\qquad2+5\quad&\,=\quad8
\end{align*}
```
_source code:_&nbsp;[2plus5eq8_0.tex](./src/2plus5eq8_0.tex)

Do you find any errors?<br><br>
Who said `0` couldn't be a denominator? See the following fool proofs.

### **Very silly solutions to find 0 / 0**

#### **Let's see the first fool.**

```math
\begin{alignat*}{3}
&\mathrm{Let}&&\qquad\quad\frac{2}{0}&&=\quad\frac{x}{1}\\
&\mathrm{*~0~both~sides}&&\qquad\frac{2*0}{0}&&=\quad\frac{x*0}{1}\\
&\mathrm{/~2~both~sides}&&\qquad\frac{\cancel{2}*0}{0*\cancel{2}}&&=\quad\cancelto{0}{\frac{x*0}{1*2}}\\
&\mathrm{Thus}&&\qquad\quad\frac{0}{0}&&=\quad0
\end{alignat*}
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
\mathrm{/~(-i)~both~sides}\qquad\frac{-1}{-i}\quad&\,=\quad\frac{i^2}{-i}\\
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

### **$i=\pm1$, isn't it?**

```math
\begin{align*}
i^2\qquad&\,=\qquad-1\\
i*i\qquad&\,=\qquad-1\\
i\qquad&\,=\qquad\frac{-1}{i}\\
i=\frac{-1}{i}&\,=\frac{-1}{\frac{-1}{i}}=\frac{-1}{\frac{-1}{\frac{-1}{i}}}=...\\
i\qquad&\,=\qquad(-1)^\infty\\
\mathrm{Thus}\qquad i\qquad&\,=\qquad\pm1
\end{align*}
```
_source code:_&nbsp;[i_eq_pm1.tex](./src/i_eq_pm1.tex)

Whatever it is, but it is not imaginary, anyway.

### **How much is $\infty$?**

```math
\begin{align*}
-\frac{1}{12}\qquad&\,=\qquad1+2+3+...+\infty\\
\,&\,=\qquad\frac{\infty(\infty+1)}{2}\\
-1\qquad&\,=\qquad6\infty(\infty+1)\\
0\qquad&\,=\qquad6\infty^2+6\infty+1\\
\infty\qquad&\,=\qquad\frac{-6\pm\sqrt{6^2-4*6*1}}{2*6}\\
\,&\,=\qquad\frac{-6\pm\sqrt{36-24}}{12}\\
\,&\,=\qquad\frac{-6\pm\sqrt{12}}{12}\\
\,&\,=\qquad\frac{-6\pm\sqrt{2^2*3}}{12}\\
\,&\,=\qquad\frac{-6\pm2\sqrt{3}}{12}\\
\mathrm{Thus}\qquad\infty\qquad&\,=\qquad\frac{-3\pm\sqrt{3}}{6}
\end{align*}
```
_source code:_&nbsp;[infty.tex](./src/infty.tex)

Here, $\infty$ is so small, you see?

### **Is 0 an even number?**

This proof is known to be correct!

```math
\begin{alignat*}{3}
&\,&&\quad0\qquad&&=\qquad0\\
&\,&&\,&&=\qquad1-1\\
&\,&&\,&&=\qquad1^2-1^2\\
&\,&&\,&&=\qquad(1+1)(1-1)\\
&\,&&\,&&=\qquad(1+1)(1^2-1^2)\\
&\,&&\,&&=\qquad(1+1)(1+1)(1-1)\\
&\mathrm{repeat~the~last~term}&&\quad&&=\qquad(1+1)(1+1)(1+1)...(1-1)\\
&\,&&\quad0&&=\qquad(1+1)^\infty*(1-1)\\
&\mathrm{Thus}\,&&\quad0&&=\qquad2^\infty*0\qquad\mathrm{(correct~proof)}\\
\end{alignat*}
```
Any number being a multiple of `2` is **always** `even`.<br>
_source code:_&nbsp;[0_even.tex](./src/0_even.tex)

### **Solve _x_ for _x+2=x_.**

```math
\begin{align*}
x+2\qquad&\,=\qquad x\\
(x+2)^2\qquad&\,=\qquad x^2\\
\cancel{x^2}+4x+4\qquad&\,=\qquad \cancel{x^2}\\
4x\qquad&\,=\qquad-4\\
\mathrm{Thus}\qquad x\qquad&\,=\qquad-1
\end{align*}
```
_source code:_&nbsp;[x+2eqx.tex](./src/x+2eqx.tex)

A silly equation always has the solution.

<br><br>

_More to come, keep following ..._
