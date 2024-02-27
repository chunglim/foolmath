## **Page 2**

![foolmath logo](./images/ramanujan.png)

[Previous Page](https://github.com/chunglim/foolmath#welcome-to-the-foolmath-repository)&nbsp;|&nbsp;Next Page&nbsp;|&nbsp;[Contribute](#support-foolmath)

### **Production of all multiple of $`2`$**

```math
\begin{alignat*}{5}
&\rlap{\text{Find production of all multiple of 2}}\\
&\small\text{find}\normalsize\qquad&A\quad&=\quad&&2*4*8*16*32*64*...\\
&\,&\,&=&&2^1\cdot2^2\cdot2^3\cdot2^4\cdot2^5\cdot2^6\cdot...\\
&\,&\,&=&&2^{(1+2+3+4+5+6+...)}\\
&\small\text{Thus}&A\quad&=&&2^{-\frac{1}{12}}
\end{alignat*}
```
_source code:_&nbsp;[prod_mul2.tex](./src/prod_mul2.tex)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

The result is so small, indeed.

### **Production of all natural odd numbers**

```math
\begin{alignat*}{5}
&\rlap{\text{Find production of all natural odd numbers}}\\
&\small\text{find}\normalsize\qquad&B\quad&=\quad&&1*3*5*7*...\\
&\small\text{let}&C\quad&=&&1*2*3*4*5*6*7*8*...\\
&\,&\,&=&&(2*4*6*8*...)(1*3*5*7*...)\\
&\,&\,&=&&(2(1)*2(2)*2(3)*2(4)*...)(1*3*5*7*...)\\
&\,&\,&=&&2^\infty(1*2*3*4*...)(1*3*5*7*...)\\
&\,&\cancel{C}\quad&=&&2^\infty\cancel{C}B\\
&\,&B\quad&=&&\frac{1}{2^\infty}\\
&\small\text{Thus}&B\quad&=&&0
\end{alignat*}
```
_source code:_&nbsp;[prod_nat_odd.tex](./src/prod_nat_odd.tex)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

Nah nah, it shouldn't be that small.

### **Production of all natural numbers**

```math
\begin{alignat*}{5}
&\rlap{\text{Find production of all natural numbers}}\\
&\small\text{find}\normalsize\qquad&C\quad&=\quad&&1*2*3*4*5*6*7*8*...\\
&\,&\,&=&&(1*3*5*7*...)(2*4*6*8*...)\\
&\,&\,&=&&B(2*4*6*8*...)\\
&\,&\,&=&&0(2*4*6*8*...)\\
&\small\text{Thus}&C\quad&=&&0
\end{alignat*}
```
_source code:_&nbsp;[prod_nat.tex](./src/prod_nat.tex)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

Oops, zero once again!

### **Production of all natural even numbers**

```math
\begin{alignat*}{5}
&\rlap{\text{Find production of all natural even numbers}}\\
&\small\text{find}&D\quad&=\quad&&2*4*6*8*...\\
&\,&\,&=&&2(1*2*3*4*...)\\
&\rlap{\small\text{From the previous proof}}\\
&\,&D\quad&=&&2C\\
&\small\text{As }C=0\normalsize\qquad&D\quad&=&&2\cdot0\\
&\small\text{Thus}&D\quad&=&&0
\end{alignat*}
```
_source code:_&nbsp;[prod_nat_even.tex](./src/prod_nat_even.tex)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

Hey what? Why are these results zero? Is the universe simply empty?

### **Infinite numbers of primes**

We have been dealing with fool proofs so far, let's talk about valid mathematical properties again.

You might have ever wondered, how many prime numbers there are. Is there an upper limit of primes, so called `the highest prime`? As the number grows higher, there will be also higher number of divisible divisors. This assumption may limit the size of primes.<br>
Well, there have been many proofs over centuries. The number of primes is infinite or unlimited. (valid)

#### **Solution: _Euclid's Proof_ (300 BC)**

+ Let's review about divisibility. if $a$ divides $c$ and $b$ divides $c$, then $|a-b|$ must also divide $c$. For example, $6$ divides $3$ and $24$ divides $3$ so $|6-24|$ or $18$ mush also divide $3$. That is $18&divide3$ has no remainder.
+ Assuming we have finite number of primes $p_1, p_2, p_3, ..., p_n$.
+ Let $P$ be a product of all prime numbers i.e. $P=p_1\cdot p_2\cdot p_3\cdot...\cdot p_n$.
+ Let $Q=P+1$, is $Q$ a prime?
  - If $Q$ is a prime, then there is one more prime outside our finite list.
  - If $Q$ is not a prime, then there is at least one $p$ that $Q$ divides $p$.
    * So $P$ divides $p$ and $Q$ divides $p$.
    * And then $|P-Q|$ mush also divide $p$.
    * Since $|P-Q|=|P-(P+1)|=|\cancel{P}-\cancel{P}-1|=1$, so $1$ divides $p$ that is not possible.
+ Thus there are always primes outside our finite list no matter how big our finite list is, i.e. there are infinite number of primes. (valid proof)

#### **Other solutions**

From time to time, there were several proofs, which you can find them in the following list.

- _Furstenberg's proof_ (1955) [|view it|](https://t5k.org/notes/proofs/infinite/topproof.html)
- _Goldbach's Proof_ (1730) [|view it|](https://t5k.org/notes/proofs/infinite/goldbach.html)
- _Kummer's Restatement of Euclid's Proof_ [|view it|](https://t5k.org/notes/proofs/infinite/kummers.html)
- _Filip Saidak's Proof_ (2005) [|view it|](https://t5k.org/notes/proofs/infinite/Saidak.html)
- _Other proofs_ see [Wikipedia](https://en.wikipedia.org/wiki/Euclid%27s_theorem#Variations)

[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

### **Magic squares**

Some or most mathematicians know that we can fill numbers in any odd-sized square matrices, and summations of each row, each column and each diagonal line are all equal. This is caused by balancing numbers in the matrix. The numbers to fill are natural numbers starting from `1` and carry on with the next natural number and no overlap. This doesn't work with even-sized square matrices. Because there is no middle element having the same number of elements at its left side and its right side in even-sized square matrices.

There is a rule explaining how to fill the matrix. (valid rule)

- `1` is placed at the **middle of the first row**.
- The next element is placed at `+1` **upper right** of the current element.
- If it overflows at the **top** of the matrix, then drop it to the **bottom in that column**.
- If it overflows at the **right** of the matrix, place it at the **first column in that row**.
- If it overflows at the **top right corner**, place it **under the current element** i.e. the same column and the next row.
- If it strikes a **non-empty element**, place it **under the current element** i.e. the same column and the next row.

For simplicity, I code C to generate each magic square.

```c
#include <stdio.h>
#include <string.h>

#define isodd(n)    ((n) % 2)
#define isempty(n)  (!(n))
#define MAXDIM      15

void initialize(int [][MAXDIM+1], int);
void matrix(int [][MAXDIM+1], int);

int main()
{
    int i, j, n, a[MAXDIM+1][MAXDIM+1];

    do {
        printf("enter dimension <odd number 1-%d>: ", MAXDIM);
        scanf("%d", &n);
    } while (!isodd(n) || n > MAXDIM);
    initialize(a, n);
    matrix(a, n);
    int sumrow,
        sumcol[n+1];
    memset(sumcol, 0, sizeof (int) * (n + 1));
    for (i = 1; i <= n; i++) {
        sumrow = 0;
        for (j = 1; j <= n; j++) {
            printf("%*d", j == 1 ? 4 : 5, a[i][j]);
            sumrow += a[i][j];
            sumcol[j] += a[i][j];
        }
        printf("%6d\n", sumrow);
    }
    puts("\n");
    for (j = 1; j <= n; j++)
        printf("%*d", j == 1 ? 4 : 5, sumcol[j]);
    puts("\n");
    return 0;
}

void initialize(int a[][MAXDIM+1], int n)
{
    int i, j;

    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            a[i][j] = 0;
}

void matrix(int a[][MAXDIM+1], int n)
{
    int i, j, index;

    i = 1; j = (n + 1) / 2;
    a[i][j] = 1;
    for (index = 2; index <= n * n; index++) {
        j++; i--; /* normal case */
        if (i < 1)
            if (j <= n)
                for (i = n; !isempty(a[i][j]); i--)
                    ; /* overflow top go bottom */
            else { /* top right corner go next row same column */
                i += 2;
                j--;
            }
        else
            if (j > n) /* overflow right go first column */
                j = 1;
            else
                if (!isempty(a[i][j])) { /* next occupied go next row same column */
                    i += 2;
                    j--;
                }
        a[i][j] = index;
    }
}
```
_source code:_&nbsp;[square.c](./src/square.c)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

**Notes:**

- This property of mathematics is **_valid_**.
- In order to create understandable matrices, I use `.tex` math notation files. But you don't rely on these `.tex` files, which are in turn generated from C code. So coding style of these `.tex` files is probably not what you desire. Please refer to the output results or `.c` file, which is well commented, where necessary.
- C source code presented here only generates text output on console or terminal. It doesn't generate `.tex` files.
- In this repository, C source code is rare, so I don't write `Makefile`.
- This C source code is expected to compile and run on any operating systems. It is simply C99 source code. I personally use GNU `gcc` or LLVM `clang` compiler on Unix-liked operating systems e.g. Linux, macOS, FreeBSD, NetBSD or OpenBSD, which natively supports `gcc` or `clang` compiler out of the box. (Native C compiler depends on the operating system being used.)
- For other operating systems or compilers, please consult the documentation for each system or compiler.

**Compilation or build**

Note that `%` or probably `$` is a shell prompt, you don't have to type.

For GNU `gcc`,<br>
% `gcc -Wall -Wextra -Werror -pedantic-errors -Os -std=c99 -pedantic -s square.c`

For LLVM `clang`, it is nearly the same, just omit `-s` option,<br>
% `clang -Wall -Wextra -Werror -pedantic-errors -Os -std=c99 -pedantic square.c`

**Running**

% `./a.out`<br>
`enter dimension <odd number 1-15>:`

After compilation and running `./a.out`, you will get prompted for an odd number. Fill any odd number in the given range and press enter.

Here we start the first one, `3 x 3` matrix contains `9` elements i.e. `1...9`, so that we fill these numbers into the matrix, then summations of each row, each column and each diagonal line are all equal.

```math
\begin{array}{rrrcr}
\,&\,&\,&15&\,\\
8&1&6&\ldots&15\\
3&5&7&\ldots&15\\
4&9&2&\ldots&15\\
\vdots&\vdots&\vdots&15&\,\\
15&15&15&\,&\,
\end{array}
```
_source code:_&nbsp;[3x3.tex](./src/3x3.tex)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

You can see that summations of each row, each column and each diagonal line are all `15`.<br><br>
Now let's see a little bigger square matrix i.e. `5 x 5` matrix.

```math
\begin{array}{rrrrrcr}
\,&\,&\,&\,&\,&65&\,\\
17&24&1&8&15&\ldots&65\\
23&5&7&14&16&\ldots&65\\
4&6&13&20&22&\ldots&65\\
10&12&19&21&3&\ldots&65\\
11&18&25&2&9&\ldots&65\\
\vdots&\vdots&\vdots&\vdots&\vdots&65&\,\\
65&65&65&65&65&\,&\,
\end{array}
```
_source code:_&nbsp;[5x5.tex](./src/5x5.tex)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

Now, the summation for `5 x 5` matrix is `65`.<br><br>
Let's see a big square matrix, not sure if you can display it in mobile devices.<br>
This is the output of `15 x 15` matrix.

```math
\begin{array}{rrrrrrrrrrrrrrrcr}
\,&\,&\,&\,&\,&\,&\,&\,&\,&\,&\,&\,&\,&\,&\,&1695&\,\\
122&139&156&173&190&207&224&1&18&35&52&69&86&103&120&\ldots&1695\\
138&155&172&189&206&223&15&17&34&51&68&85&102&119&121&\ldots&1695\\
154&171&188&205&222&14&16&33&50&67&84&101&118&135&137&\ldots&1695\\
170&187&204&221&13&30&32&49&66&83&100&117&134&136&153&\ldots&1695\\
186&203&220&12&29&31&48&65&82&99&116&133&150&152&169&\ldots&1695\\
202&219&11&28&45&47&64&81&98&115&132&149&151&168&185&\ldots&1695\\
218&10&27&44&46&63&80&97&114&131&148&165&167&184&201&\ldots&1695\\
9&26&43&60&62&79&96&113&130&147&164&166&183&200&217&\ldots&1695\\
25&42&59&61&78&95&112&129&146&163&180&182&199&216&8&\ldots&1695\\
41&58&75&77&94&111&128&145&162&179&181&198&215&7&24&\ldots&1695\\
57&74&76&93&110&127&144&161&178&195&197&214&6&23&40&\ldots&1695\\
73&90&92&109&126&143&160&177&194&196&213&5&22&39&56&\ldots&1695\\
89&91&108&125&142&159&176&193&210&212&4&21&38&55&72&\ldots&1695\\
105&107&124&141&158&175&192&209&211&3&20&37&54&71&88&\ldots&1695\\
106&123&140&157&174&191&208&225&2&19&36&53&70&87&104&\ldots&1695\\
\vdots&\vdots&\vdots&\vdots&\vdots&\vdots&\vdots&\vdots&\vdots&\vdots&\vdots&\vdots&\vdots&\vdots&\vdots&1695&\,\\
1695&1695&1695&1695&1695&1695&1695&1695&1695&1695&1695&1695&1695&1695&1695&\,&\,
\end{array}
```
_source code:_&nbsp;[15x15.tex](./src/15x15.tex)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

Now, the summation for `15 x 15` matrix is `1695`.

**Summary**

The result of summation for each row, each column or each diagonal line can be calculated.

+ `n x n` is the dimension of the matrix.
+ Total number of all elements will be `n x n` or $n^2$.
+ The sum of all elements will be $\frac{n^2(n^2+1)}{2}$.
+ The sum of each line will be $\frac{n^2(n^2+1)}{2n}$.
+ Thus each sum is $\frac{n(n^2+1)}{2}$.
+ Let's counter check the summation of each matrix, we previously did.
  - `3 x 3` matrix, each sum $=\frac{3(3^2+1)}{2}=\frac{3(9+1)}{2}=\frac{3(10)}{2}=15$
  - `5 x 5` matrix, each sum $=\frac{5(5^2+1)}{2}=\frac{5(25+1)}{2}=\frac{5(26)}{2}=65$
  - `15 x 15` matrix, each sum $=\frac{15(15^2+1)}{2}=\frac{15(225+1)}{2}=\frac{15(226)}{2}=1695$

All summations are correct as expected.

[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

### **Why is $`\sqrt{2}`$ irrational?**

We have learnt that $\sqrt{2}$ is irrational. Have you ever seen the proof?<br>
Here we go.

```math
\begin{alignat*}{5}
&\small\text{let }\normalsize\qquad\qquad&\sqrt{2}\quad&=\quad&&\frac{a}{b}\\
&\rlap{\small\text{where a and b are unsigned integers and }\frac{a}{b}\text{ is the simplest fraction.}}\\
&\rlap{\small\text{either of them can be even, but not both.}}\\
&\rlap{\small\text{otherwise, if both are even, we can simplify further.}}\\
&\,&2\quad&=&&\frac{a^2}{b^2}\qquad&\small\text{(1)}\\
&\,&a^2\quad&=&&2b^2\\
&\rlap{\small\text{so }a^2\text{ is even, and }a\text{ is also even, because }odd^2\text{ is always odd.}}\\
&\small\text{let }&a\quad&=&&2k\\
&\small\text{(1)}&2\quad&=&&\frac{(2k)^2}{b^2}\\
&\,&2\quad&=&&\frac{4k^2}{b^2}\\
&\,&b^2\quad&=&&\frac{4k^2}{2}\\
&\,&b^2\quad&=&&2k^2\\
&\rlap{\small\text{so }b^2\text{ is even, and }b\text{ is also even.}}\\
&\rlap{\small\text{so }a\text{ and }b\text{ are both even, and they can be simplified further.}}\\
&\rlap{\small\text{so the assumption }\sqrt{2}=\frac{a}{b}\text{ is wrong,}}\\
&\rlap{\small\text{Thus }\sqrt{2}\text{ is irrational.}\qquad\qquad\text{(valid proof)}}\\
\end{alignat*}
```
_source code:_&nbsp;[sqrt2_irr.tex](./src/sqrt2_irr.tex)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

We have talked about valid proof for a while.<br><br>
Let's start fool proofs again.

### **How do programmers increase a variable?**

```math
\begin{alignat*}{5}
&\,&(n+1)^2\quad&=\quad&&n^2+2n+1\\
&\,&n^2\quad&=&&(n+1)^2-(2n+1)\\
&\small-n(2n+1)\text{ both sides}&n^2-n(2n+1)\quad&=&&(n+1)^2-(2n+1)-n(2n+1)\\
&\,&\,&=&&(n+1)^2-2n-1-2n^2-n\\
&\,&\,&=&&(n+1)^2-2n^2-3n-1\\
&\,&\,&=&&(n+1)^2-(2n^2+3n+1)\\
&\,&\,&=&&(n+1)^2-(n+1)(2n+1)\\
&\small+\frac{(2n+1)^2}{4}\text{ both sides}\normalsize\qquad&n^2-n(2n+1)+\frac{(2n+1)^2}{4}\quad&=&&(n+1)^2-(n+1)(2n+1)+\frac{(2n+1)^2}{4}\\
&\,&n^2-2n\left(\frac{2n+1}{2}\right)+\left(\frac{2n+1}{2}\right)^2\quad&=&&(n+1)^2-2(n+1)\left(\frac{2n+1}{2}\right)+\left(\frac{2n+1}{2}\right)^2\\
&\,&\left(n-\frac{2n+1}{2}\right)^2\quad&=&&\left((n+1)-\frac{2n+1}{2}\right)^2\\
&\small\sqrt{}\text{ both sides}&n-\cancel{\frac{2n+1}{2}}\quad&=&&n+1-\cancel{\frac{2n+1}{2}}\\
&\,&\small\text{Thus}\qquad\qquad\normalsize n\quad&=&&n+1
\end{alignat*}
```
_source code:_&nbsp;[nn+1.tex](./src/nn+1.tex)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

Now you see how programmers increase a variable.<br>
Wait, isn't it `n += 1;`?<br>
Nah nah, it should be `++n;` or `n++;`.<br><br>
Hey what? This is mathematical proof. Find errors, mistakes or oversights.

### **$`\frac{dx}{dx}=0`$, really?**

```math
\begin{alignat*}{5}
&\,&\frac{dx}{dx}\quad&=\quad&&\frac{d}{dx}\underbrace{(1+1+1+1+...+1)}_{x\text{ terms}}\\
&\,&\,&=&&\underbrace{\frac{d}{dx}1+\frac{d}{dx}1+\frac{d}{dx}1+...+\frac{d}{dx}1}_{x\text{ terms}}\\
&\,&\,&=&&\underbrace{0+0+0+...+0}_{x\text{ terms}}\\
&\,&\,&=&&0x\\
&\small\text{Thus}\normalsize\qquad&\frac{dx}{dx}\quad&=&&0
\end{alignat*}
```
_source code:_&nbsp;[dx_by_dx_0.tex](./src/dx_by_dx_0.tex)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)
Hold on! `x terms` implies that `x` is an _integer_ not a _real number_. In calculus, aren't all variables and functions required to be _continuous_, not _discrete_? If `x` is an _integer_, how can `dx` approach zero?

### **$`\pi=-\pi`$, what?**

```math
\begin{alignat*}{5}
&\,&e^{i\pi}\quad&=\quad&&-1\\
&\small\ln{}\text{ both sides}&\ln{e^{i\pi}}\quad&=&&\ln{(-1)}\\
&\,&i\pi\cancelto{1}{\ln{e}}\quad&=&&\ln{(-1)}\\
&\qquad\qquad\small\text{so}&\pi\quad&=&&\frac{\ln{(-1)}}{i}\qquad&\small\text{(1)}\\
&\small\times(-1)\text{ both sides}\qquad&-\pi\quad&=&&-\frac{\ln{(-1)}}{i}\\
&\,&\,&=&&\frac{\ln{(-1)}}{-i}\\
&\small\text{as }\frac{1}{-i}=i&\,&=&&i\ln{(-1)}\\
&\,&\,&=&&(-1)^{\frac{1}{2}}\ln{(-1)}\\
&\,&\,&=&&\left(\frac{1}{-1}\right)^\frac{1}{2}\ln{(-1)}\\
&\,&\,&=&&\frac{1^\frac{1}{2}}{(-1)^\frac{1}{2}}\ln{(-1)}\\
&\,&\,&=&&\frac{1}{\sqrt{-1}}\ln{(-1)}\\
&\,&\,&=&&\frac{1}{i}\ln{(-1)}\\
&\qquad\qquad\small\text{so}&-\pi\quad&=&&\frac{\ln{(-1)}}{i}\qquad&\small\text{(2)}\\
&\qquad\qquad\small\text{hence}&(1)\quad&=&&(2)\\
&\qquad\qquad\small\text{Thus}&\pi\quad&=&&-\pi
\end{alignat*}
```
_source code:_&nbsp;[pi-pi.tex](./src/pi-pi.tex)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

Would there be minus areas or minus circumferences then?

### **$`2=3`$, isn't it absurd?**

```math
\begin{alignat*}{5}
&\,&1\quad&=\quad&&1\\
&\,&41-40\quad&=&&61-60\\
&\,&16+25-40\quad&=&&36+25-60\\
&\,&16-40+25\quad&=&&36-60+25\\
&\,&4^2-2(4)(5)+5^2\quad&=&&6^2-2(6)(5)+5^2\\
&\,&(4-5)^2\quad&=&&(6-5)^2\\
&\,&4-\cancel{5}\quad&=&&6-\cancel{5}\\
&\,&4\quad&=&&6\\
&\small\text{Thus}&2\quad&=&&3\\
\end{alignat*}
```
_source code:_&nbsp;[2eq3_0.tex](./src/2eq3_0.tex)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

Well, this is another trick of $\sqrt{-1^2}$.

### **What if $`3=0`$?**

```math
\begin{alignat*}{5}
&\small\text{given}&x^2+x+1\quad&=\quad&&0\qquad&\small\text{(1)}\\
&\,&x+1\quad&=&&-x^2\qquad&\small\text{(2)}\\
&\small\text{(1)}&divide x\text{ both sides}\qquad&x+1+\frac{1}{x}\quad&=&&0\\
&\small\text{substitute with (2)}&-x^2+\frac{1}{x}\quad&=&&0\\
&\,&\frac{1}{x}\quad&=&&x^2\\
&\,&x^3\quad&=&&1\\
&\,&x\quad&=&&1\\
&\small\text{substitute in (1)}&1^2+1+1\quad&=&&0\\
&\qquad\qquad\small\text{Thus}&3\quad&=&&0
\end{alignat*}
```
_source code:_&nbsp;[3eq0_0.tex](./src/3eq0_0.tex)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

You see? The subtraction result of $3$ is still $0$.

### **Do you know that $`1=-1`$?**

#### **Solution 1**

```math
\begin{alignat*}{5}
&\,&1\quad&=\quad&&\sqrt{1}\\
&\,&\,&=&&\sqrt{(-1)(-1)}\\
&\,&\,&=&&\sqrt{-1}\sqrt{-1}\\
&\,&\,&=&&i*i\\
&\,&\,&=&&i^2\\
&\small\text{Thus}\normalsize\qquad&1\quad&=&&-1
\end{alignat*}
```
_source code:_&nbsp;[1eq-1_0.tex](./src/1eq-1_0.tex)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents))

Or even an easier proof

#### **Solution 2**

```math
\begin{alignat*}{5}
&\,&-1\quad&=\quad&&(-1)^{2.\frac{1}{2}}\\
&\,&\,&=&&1^\frac{1}{2}\\
&\small\text{Thus}\normalsize\qquad&-1\quad&=&&1
\end{alignat*}
```
_source code:_&nbsp;[1eq-1_1.tex](./src/1eq-1_1.tex)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

There are many more fool proofs like this using complex number.

#### **Solution 3**

```math
\begin{alignat*}{5}
&\,&\frac{-1}{1}\quad&=\quad&&\frac{1}{-1}\\
&\,&\sqrt{\frac{-1}{1}}\quad&=&&\sqrt{\frac{1}{-1}}\\
&\,&\frac{i}{1}\quad&=&&\frac{1}{i}\\
&\,&i\quad&=&&\frac{1}{i}\\
&\,&i^2\quad&=&&1\\
&\small\text{Thus}\normalsize\qquad&-1\quad&=&&1
\end{alignat*}
```
_source code:_&nbsp;[1eq-1_2.tex](./src/1eq-1_2.tex)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

#### **Solution 4**

```math
\begin{alignat*}{5}
&\,&1\quad&=\quad&&1\\
&\,&\,&=&&1\cdot1\\
&\,&\,&=&&1\cdot(-1)^2\\
&\,&\,&=&&1\cdot(i^2)^2\\
&\,&\,&=&&1\cdot i^4\\
&\small\sqrt{}\text{ both sides}\qquad&\sqrt{1}\quad&=&&\sqrt{1\cdot i^4}\\
&\,&1\quad&=&&\sqrt{1}\cdot\sqrt{i^4}\\
&\,&\,&=&&1\cdot\left(i^4\right)^\frac{1}{2}\\
&\,&\,&=&&1\cdot i^2\\
&\,&\,&=&&1\cdot-1\\
&\qquad\small\text{Thus}&1\quad&=&&-1
\end{alignat*}
```
_source code:_&nbsp;[1eq-1_3.tex](./src/1eq-1_3.tex)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

From now on, what I owe you is what you owe me.

### **Oh what, $`\pm2\pi=0`$?**

```math
\begin{alignat*}{5}
&\small\text{from the previous proof}&-1\quad&=\quad&&1\qquad\quad&\small\text{(1)}\\
&\,&\ln{(-1)}\quad&=&&\ln{(1)}\\
&\,&\ln{e^{i\pi}}\quad&=&&0\\
&\,&i\pi\cancelto{1}{\ln{e}}\quad&=&&0\\
&\,&i\pi\quad&=&&0\\
&\small\times2i\text{ both sides}&2i\cdot\,i\pi\quad&=&&2i\cdot\,0\\
&\,&2i^2\pi\quad&=&&0\\
&\small\,i^2=-1&-2\pi\quad&=&&0&\small\text{(2)}\\
&\small\text{(1)}\times\text{(2)}&2\pi\quad&=&&0&\small\text{(3)}\\
&\qquad\qquad\small\text{Thus}&\pm2\pi\quad&=&&0
\end{alignat*}
```
_source code:_&nbsp;[pm2pi_eq_0.tex](./src/pm2pi_eq_0.tex)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

Isn't it the reason, $\sin{(x)}=x$?

### **Is $`1`$ defined in mathematics?**

```math
\begin{alignat*}{5}
&\,&0\quad&=\quad&&0\\
&\,&e\cdot0\quad&=\quad&&0^2\\
&\small\ln{()}\text{ both sides}\qquad&\ln{(e\cdot0)}\quad&=&&\ln{\left(0^2\right)}\\
&\,&\ln{e+\ln{0}}\quad&=&&2\cdot\ln{0}\\
&\,&\ln{e}\quad&=&&\ln{0}\\
&\,&1\quad&=&&\ln{0}\\
&\qquad\small\text{Thus}&1\quad&\text{ is}&&\text{undefined.}
\end{alignat*}
```
_source code:_&nbsp;[1undefined.tex](./src/1undefined.tex)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

Is there anything defined in the universe, then?

### **How much is $`e`$?**

```math
\begin{alignat*}{5}
&\,&e\quad&=\quad&&e^\frac{2i\pi}{2i\pi}\\
&\,&\,&=&&\left(e^{2i\pi}\right)^\frac{1}{2i\pi}\\
&\,&\,&=&&1^\frac{1}{2i\pi}\\
&\small\text{Thus}\normalsize\qquad&e\quad&=&&1\\
\end{alignat*}
```
_source code:_&nbsp;[e_eq_1_0.tex](./src/e_eq_1_0.tex)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

### **How much is $`\frac{a}{0}`$?**

```math
\begin{alignat*}{5}
&\small\text{Let}&x\quad&=\quad&&\frac{a}{0}\qquad&\small\text{(1)}\\
&\,&\frac{1}{x}\quad&=&&\cancelto{0}{\frac{0}{a}}\qquad&\small\text{(2)}\\
&\,&\frac{1}{x}\quad&=&&0\\
&\small\text{(1)+(2)}&x+\frac{1}{x}\quad&=&&\frac{a}{0}+\cancelto{0}{\frac{0}{a}}\\
&\small\text{from (1)}&x+\frac{1}{x}\quad&=&&x\\
&\,&\left(x+\frac{1}{x}\right)^2\quad&=&&x^2\\
&\,&\cancel{x^2}+2\cancel{x}\frac{1}{\cancel{x}}+\left(\frac{1}{x}\right)^2\quad&=&&\cancel{x^2}\\
&\,&2+\frac{1}{x^2}\quad&=&&0\\
&\,&\frac{1}{x^2}\quad&=&&-2{}\\
&\,&x\quad&=&&\pm\frac{1}{\sqrt{-2}}\\
&\small\text{from (1)}&\frac{a}{0}\quad&=&&\pm\frac{1}{\sqrt{-2}}\\
&\,&\,&=&&\pm\frac{1}{\sqrt{2}\cdot\,i}\\
&\small -i=\frac{1}{i}&\,&=&&\pm\frac{1}{\sqrt{2}}\cdot(-i)\\
&\small\text{Thus}&\frac{a}{0}\quad&=&&\mp\sin{\left(\frac{\pi}{4}\right)}\cdot\,i
\end{alignat*}
```
_source code:_&nbsp;[a_over_0.tex](./src/a_over_0.tex)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

There are many ways to skin a cat, actually.

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
&\rlap{\qquad\qquad\qquad\qquad\qquad\qquad\text{Thus $\pi$ can be any real numbers.}}
\end{alignat*}
```
_source code:_&nbsp;[pi_is_any_real.tex](./src/pi_is_any_real.tex)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

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
_source code:_&nbsp;[infty_eq_0_0.tex](./src/infty_eq_0_0.tex)&nbsp;|&nbsp;[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)

The universe is truly empty.

### **Support _foolmath_**

I keep adding these kinds of freaks or topics, which are considered interesting, no matter what they are foolish or valid math. **_foolmath_** is a passion project I do under my curiosity at my retirement. Your support will motivate me to curate and expand this repository with even more fascinating content, and especially it can help me pay the bills.

If you find **_foolmath_** entertaining, educational, or you simply enjoy its content, or just feeling generous, please consider [buy me a coffee](https://www.buymeacoffee.com/chunglim). I will highly appreciate and will be very grateful.

<a href="https://www.buymeacoffee.com/chunglim" target="_blank"><img src="https://cdn.buymeacoffee.com/buttons/v2/default-red.png" alt="Buy Me A Coffee" style="height: 60px !important;width: 217px !important;" ></a>

<img src="./images/bmc_qr.png" width="217"/>

Note: All contributions are voluntary and not required to access or use the content. See [LICENSE](./LICENSE.md).<br><br>
[Go to top](#page-2)&nbsp;|&nbsp;[TOC](https://github.com/chunglim/foolmath#table-of-contents)&nbsp;|&nbsp;[Previous Page](https://github.com/chunglim/foolmath#welcome-to-the-foolmath-repository)&nbsp;|&nbsp;Next Page

<br><br>
