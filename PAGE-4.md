## **Page 4**

![foolmath logo](./images/ramanujan.png)

[Previous Page](./PAGE-3.md#page-3)&nbsp;|&nbsp;Next Page&nbsp;|&nbsp;[Contribute](#support-foolmath)

### **$`\pi`$ can be any real numbers.**

```math
\begin{alignat*}{5}
&\qquad\qquad\small\text{Let}&C\quad&=\quad&&\frac{\pi+R}{2}\qquad&\small R\text{ is any real numbers}\\
&\small\times(\pi-R)&(\pi-R)C\quad&=&&(\pi-R)\frac{\pi+R}{2}\\
&\,&(\pi-R)2C\quad&=&&(\pi-R)(\pi+R)\\
&\,&2\pi C-2RC\quad&=&&\pi^2-R^2\\
&\small+(R^2-2\pi C)\quad&R^2-\cancel{2\pi C}+\cancel{2\pi C}-2RC\quad&=&&\cancel{R^2}-2\pi C+\pi^2-\cancel{R^2}\\
&\,&-2RC+R^2\quad&=&&-2\pi C+\pi^2\\
&\small+C^2&C^2-2RC+R^2\quad&=&&C^2-2\pi C+\pi^2\\
&\,&(C-R)^2\quad&=&&(C-\pi)^2\\
&\,&\cancel{C}-R\quad&=&&\cancel{C}-\pi\\
&\,&\pi\quad&=&&R\\
&\rlap{\qquad\qquad\qquad\qquad\qquad\qquad\text{Thus }\pi\text{ can be any real numbers.}}
\end{alignat*}
```
_source code:_&nbsp;[pi_is_any_real.tex](./src/pi_is_any_real.tex)&nbsp;|&nbsp;[Go to top](#page-4)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

Doesn't it also apply to $e$ or $\Phi$?

### **$`\infty=0`$, the universe is empty.**

```math
\begin{alignat*}{5}
&\,&1\quad&=\quad&&\lim_{x\to0}\left(\frac{\int\,x\,dx}{\int\,x\,dx}\right)\\
&\,&\,&=&&\lim_{x\to0}\left(\frac{\frac{x^2}{2}+C_1}{\frac{x^2}{2}+C_2}\right)\\
&\small\text{Let }C_1=1; C_2=0&\,&=&&\lim_{x\to0}\left(\frac{\frac{x^2}{2}+1}{\frac{x^2}{2}}\right)\\
&\,&\,&=&&\lim_{x\to0}\left({\frac{x^2+2}{x^2}}\right)\\
&\,&\,&=&&\lim_{x\to0}\left(\frac{x^2}{x^2}+\frac{2}{x^2}\right)\\
&\,&\,&=&&1+\lim_{x\to0}\left(\frac{2}{x^2}\right)\\
&\,&1\quad&=&&1+\infty\\
&\qquad\small\text{Thus}&\infty\quad&=&&0
\end{alignat*}
```
_source code:_&nbsp;[infty_eq_0_0.tex](./src/infty_eq_0_0.tex)&nbsp;|&nbsp;[Go to top](#page-4)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

The universe is truly empty.

### **$`\pi=e`$, why do engineers say so?**

```math
\begin{alignat*}{5}
&\qquad\small\text{Let}&x\quad&=\quad&&\frac{\pi+e}{2}\\
&\small\times2&2x\quad&=&&\cancel{2}\cdot\frac{\pi+e}{\cancel{2}}\\
&\small\times(\pi-e)\qquad&2x(\pi-e)\quad&=&&(\pi+e)(\pi-e)\\
&\,&2\pi x-2ex\quad&=&&\pi^2-e^2\\
&\,&-\pi^2+2\pi x\quad&=&&-e^2+2ex\\
&\small\times-1&\pi^2-2\pi x\quad&=&&e^2-2ex\\
&\small+x^2&\pi^2-2\pi x+x^2\quad&=&&e^2-2ex+x^2\\
&\,&\left(\pi-x\right)^2\quad&=&&(e-x)^2\\
&\,&\pi-\cancel{x}\quad&=&&e-\cancel{x}\\
&\qquad\small\text{Thus}&\pi\quad&=&&e
\end{alignat*}
```
_source code:_&nbsp;[pi_eq_e.tex](./src/pi_eq_e.tex)&nbsp;|&nbsp;[Go to top](#page-4)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

Hold on! you haven't said about the definitions of $\pi$ and $e$. Can we apply the same proof to any real numbers?

### **Freak again, $`i=\infty`$**

```math
\begin{alignat*}{5}
&\,&-1\quad&=\quad&&e^{\pi i}\\
&\small{\text{square root}}\qquad&\sqrt{-1}\quad&=&&e^{\frac{\pi}{2}i}\\
&\,&i\quad&=&&e^{\frac{\pi}{2}i}\\
&\,&\,&=&&e^{\frac{\pi}{2}e^{\frac{\pi}{2}i}}\\
&\,&\,&=&&e^{\frac{\pi}{2}e^{\frac{\pi}{2}e^{\frac{\pi}{2}i}}}\\
&\small{\text{continue}}&\,&=&&e^{\frac{\pi}{2}e^{\frac{\pi}{2}e^{\frac{\pi}{2}\ldots^{\infty}}}}\\
&\scriptstyle{\text{Thus}}&i\quad&=&&\infty
\end{alignat*}
```
_source code:_&nbsp;[i_eq_infty.tex](./src/i_eq_infty.tex)&nbsp;|&nbsp;[Go to top](#page-4)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

$\infty$ is always imaginary.

### **Either $`i`$ or $`\pi`$ is $`0`$.**

#### **Proof 1**

```math
\begin{alignat*}{5}
&\,&1\quad&=\quad&&1\\
&\,&\ln{(1)}\quad&=&&\ln{(1)}\\
&\,&0\quad&=&&\ln{(1)}\\
&\,&\,&=&&\ln{(-1^2)}\\
&\,&\,&=&&\ln{((e^{i\pi})^2)}\\
&\,&\,&=&&\ln{(e^{2i\pi})}\\
&\,&0\quad&=&&2i\pi\cancelto{1}{\ln{(e)}}\\
&\rlap{\small{\text{Thus, either }i\text{ or }\pi\text{ is zero.}}}
\end{alignat*}
```
_source code:_&nbsp;[i_or_pi_is_0_0.tex](./src/i_or_pi_is_0_0.tex)&nbsp;|&nbsp;[Go to top](#page-4)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

#### **Proof 2**

```math
\begin{alignat*}{7}
&\,&e^{i\pi}\quad&=\quad&&-1\\
&\,&\,&=\quad&&-e^0\\
&\,&e^{i\pi}\quad&=\quad&&e^{-0}\\
&\,&i\pi\quad&=&&-0\\
&\,&i\pi\quad&=&&0\\
&\rlap{\small{\text{Thus, either }i\text{ or }\pi\text{ is zero.}}}
\end{alignat*}
```
_source code:_&nbsp;[i_or_pi_is_0_1.tex](./src/i_or_pi_is_0_1.tex)&nbsp;|&nbsp;[Go to top](#page-4)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

### **Infinite nested radical**

So far, here's the valid proof, you were probably taught in Math class.

```math
\begin{alignat*}{7}
&\small\text{Let}\normalsize&x\quad&=\quad&&a\qquad&&\small\text{where }a\text{ is any real number}\normalsize\\
&\,&x-a\quad&=&&0\\
&\,&(x-a)x\quad&=&&0\\
&\,&x^2-ax\quad&=&&0\\
&\,&x^2\quad&=&&ax\\
&\,&x\quad&=&&\sqrt{ax}&&\small\text{(1)}\\
&\small\text{substitute (1)}\normalsize&x\quad&=&&\sqrt{a\sqrt{ax}}\\
&\small\text{indefinitely recursive}\normalsize&x\quad&=&&\sqrt{a\sqrt{a\sqrt{a\sqrt{a\sqrt{\ldots}}}}}\\
&\small\text{since }x=a\text{, thus}\normalsize&x\quad&=&&\sqrt{x\sqrt{x\sqrt{x\sqrt{x\sqrt{\ldots}}}}}\qquad&&\small\text{(valid proof)}
\end{alignat*}
```
_source code:_&nbsp;[inf_nested_rad.tex](./src/inf_nested_rad.tex)&nbsp;|&nbsp;[Go to top](#page-4)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

### **Sum of Cubes Identity**

Another valid proof.

```math
\begin{alignat*}{5}
&\small\text{Ever seen?}\qquad&1^3+2^3\quad&=\quad&&(1+2)^2\\
&\,&1^3+2^3+3^3\quad&=&&(1+2+3)^2\\
&\,&1^3+2^3+3^3+4^3\quad&=&&(1+2+3+4)^2\\
&\small\text{That is}&\sum_{i=1}^{n}i^3\quad&=&&\left(\sum_{i=1}^{n}i\right)^2\\ \\
&\rlap{\text{It is called Sum of Cubes Identity (a.k.a. Square of the Sum)}}\\
&\rlap{\text{Here's the proof.}}\\ \\
&\rlap{\text{Step 1. Base Case}}\\
&\,&\sum_{i=1}^{1}i^3\quad&=&&1^3\quad=\quad1\\
&\,&\left(\sum_{i=1}^{1}i\right)^2\quad&=&&1^2\quad=\quad1\\
&\small\text{i.e.}&\sum_{i=1}^{1}i^3\quad&=&&\left(\sum_{i=1}^{1}i\right)^2\\
&\rlap{\text{Step 2. Induction Hypothesis}}\\
&\small\text{assuming}&\sum_{i=1}^{k}i^3\quad&=&&\left(\sum_{i=1}^{k}i\right)^2\\
&\rlap{\text{Step 3. Induction Step}}\\
&\rlap{\text{We need to prove that the formula also holds for k + 1.}}\\
&\rlap{\text{That is, we need to prove:}}\\
&\,&\sum_{i=1}^{k+1}i^3\quad&=&&\left(\sum_{i=1}^{k+1}i\right)^2\\
&\,&\,&=&&\left(\sum_{i=1}^{k}i+(k+1)\right)^2\\
&\,&\,&=&&\left(\frac{k(k+1)}{2}+(k+1)\right)^2\\
&\small\text{factor }(k+1)&\,&=&&\left((k+1)\left(\frac{k}{2}+1\right)\right)^2\\
&\,&\,&=&&\left(\frac{(k+1)(k+2)}{2}\right)^2\\
&\,&\sum_{i=1}^{k+1}i^3\quad&=&&\left(\sum_{i=1}^{k+1}i\right)^2\\
&\rlap{\text{This matches the formula for }n=k+1\text{, completing the induction step.}}\\
&\rlap{\text{Step 4. Conclusion}}\\
&\small\text{Thus}&\sum_{i=1}^{n}i^3\quad&=&&\left(\sum_{i=1}^{n}i\right)^2\qquad&&\small\text{(valid proof)}\\
\end{alignat*}
```
_source code:_&nbsp;[sum_of_the_cubes_id.tex](./src/sum_of_the_cubes_id.tex)&nbsp;|&nbsp;[Go to top](#page-4)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

### **What if $`9^\infty=1`$?**

```math
\begin{alignat*}{7}
&\small\text{let}&x\quad&=\quad&&9^\infty\qquad&&\small\text{(1)}\\
&\,&\left(\sqrt{x}\right)^2\quad&=&&9^\infty\\
&\,&\left(\sqrt{x}\right)^{2^{-1}}\quad&=&&9^{\infty^{-1}}\\
&\,&\left(\sqrt{x}\right)^{\frac{1}{2}}\quad&=&&9^{\frac{1}{\infty}}\\
&\,&\sqrt{\sqrt{x}}\quad&=&&9^0\\
&\,&x^{\frac{1}{4}}\quad&=&&1\\
&\,&x\quad&=&&1^4\\
&\,&x\quad&=&&1&&\small\text{(2)}\\
&\small\text{(1)=(2); thus}\qquad&9^\infty\quad&=&&1
\end{alignat*}
```
_source code:_&nbsp;[9inf_eq_1.tex](./src/9inf_eq_1.tex)&nbsp;|&nbsp;[Go to top](#page-4)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

### **A gimmick of multiple roots**

```math
\begin{alignat*}{7}
&\small{\text{Solve}}&x^3+x^2+x+1\quad&=\quad&&0&\small\text{(1)}\\
&\,&x^2+x+1\quad&=&&-x^3\qquad&\small\text{(2)}\\
&\small\text{(1)}&divide x&x^2+x+1+\frac{1}{x}\quad&=&&0\\
&\small\text{from (2)}&\cancelto{-x^3}{(x^2+x+1)}+\frac{1}{x}\quad&=&&0\\
&\,&\frac{1}{x}\quad&=&&x^3\\
&\,&x^4\quad&=&&1&\small{(3)}\\
&\,&x\quad&=&&1\\
&\small\text{substitute (1)}\qquad&1^3+1^2+1+1\quad&=&&0\\
&\small\text{Thus}&4\quad&=&&0\\
&\rlap{\small\text{Caveat: solving (3) also results }x=\pm i\,\&-1,\text{ which are the right solutions.}}\\
&\small\text{(1)}&x^3+x^2+x+1\quad&=\quad&&0\\
&\small x=i&-i-1+i+1\quad&=&&0\\
&\small x=-i\qquad&i-1-i+1\quad&=&&0\\
&\small x=-1&-1+1-1+1\quad&=&&0
\end{alignat*}
```
_source code:_&nbsp;[multiroots.tex](./src/multiroots.tex)&nbsp;|&nbsp;[Go to top](#page-4)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

### **A play with inequality**

```math
\begin{alignat*}{7}
&\,&i^2\quad&=\quad&&-1\\
&\,&i^2\quad&<&&0\\
&\,&\sqrt{i^2}\quad&<&&0\\
&\,&i\quad&<&&0\\
&\small\times i\qquad&i.i\quad&>&&0.i\\
&\,&i^2\quad&>&&0\\
&\small\text{Thus}&-1\quad&>&&0
\end{alignat*}
```
_source code:_&nbsp;[inequal_00.tex](./src/inequal_00.tex)&nbsp;|&nbsp;[Go to top](#page-4)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

### **Support _foolmath_**

I keep adding these kinds of freaks or topics, which are considered interesting, no matter what they are foolish or valid math. **_foolmath_** is a passion project I do under my curiosity at my retirement. Your support will motivate me to curate and expand this repository with even more fascinating content, and especially it can help me pay the bills.

If you find **_foolmath_** entertaining, educational, or you simply enjoy its content, or just feeling generous, please consider [buy me a coffee](https://www.buymeacoffee.com/chunglim). I will highly appreciate and will be very grateful.

<a href="https://www.buymeacoffee.com/chunglim" target="_blank"><img src="https://cdn.buymeacoffee.com/buttons/v2/default-red.png" alt="Buy Me A Coffee" style="height: 60px !important;width: 217px !important;" ></a>

<img src="./images/bmc_qr.png" width="217"/>

Note: All contributions are voluntary and not required to access or use the content. See [LICENSE](./LICENSE.md).<br><br>
[Go to top](#page-4)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)&nbsp;|&nbsp;[Previous Page](./PAGE-3.md#page-3)&nbsp;|&nbsp;Next Page
<br><br>
