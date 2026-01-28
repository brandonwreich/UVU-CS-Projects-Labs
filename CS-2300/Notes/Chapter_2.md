# Chapter 2: Proofs

## Table of Contents

## 2.1 Logical Reasoning
**Learning Objectives**
- Identify the hypothesis and conclusion of a logical argument.
- Determine the validity of a logical argument using a truth table.
- Provide a truth assignment to prove that a logical argument is invalid.
- Translate a logical argument written in English statements to an equivalent argument with logic symbols.
---

- An **argument** is a sequence of propositions, called **hypotheses**, followed by a final proposition, called the **conclusion**.
- An argument is **valid** if the conclusion is true for every truth assignment to the variables that causes all of the hypotheses to be true, otherwise the argument is **invalid**.

- The argument is denoted as:
$$
h_1 \\
h_2 \\
\dots \\
h_n \\
--- \\
\therefore c
$$

- $h_1 \dots h_n$ are the hypotheses and $c$ is the conclusion
  - The symbol $\therefore$ reads "therefore".
- The argument is valid whenever the proposition $(h_1 \land h_2 \land \dots \land h_n) \rightarrow c$ is a tautology.
- One way to establish the validity of an argument is to use a truth table.

| $p$ | $q$ | $p \rightarrow q$ |
|---|---|---|
| $T$ | $T$ | $T$ |
| $T$ | $F$ | $F$ |
| $F$ | $T$ | $T$ |
| $F$ | $F$ | $T$ |

- To use a truth table to establish the validity of an argument, a truth table is constructed for all the hypotheses and the conclusion.
- Each row in which all the hypotheses are $T$ is examined.
  - If the conclusion is $T$ in each of the examined rows then the argument is valid.
  - If there is any row in which all the hypotheses are true but the conclusion is false, then the argument is invalid.
  - If there are no rows in which all the hypotheses are true, then the argument is valid.
- An argument can be shown to be invalid by showing an assignment of truth values to its variables that makes all the hypotheses true and the conclusion false.
- For example:

$$
\begin{array}{c}
\neg p \\
p \rightarrow q \\
\hline
\therefore \neg q \\
\end{array}
$$

- This argument is invalid because when $p = F$ and $q = T$, the hypotheses $p \rightarrow q$ and $\neg p$ are both true, but the conclusion $\neg q$ is false.
  - The final proof of invalidity only requires a single truth assignment for which all the hypotheses are true and the conclusion is false.

### The form of an argument
- The hypotheses and conclusion in a logical argument can also be expressed in English, as in:

$$
\begin{array}{c}
\text{It is raining today.} \\
\text{If it is raining today, I will not ride my bike to school.} \\
\hline
\therefore \text{I will not ride my bike to school.} \\
\end{array}
$$

- The **form** of an argument expressed in English is obtained by replacing each individual proposition with a variable.
  - While it is common to express a logical argument in English, the validity of an argument is established by analyzing its form.

$$
p: \text{It is raining today.} \\
q: \text{I will not ride my bike to school}
$$

- The argument's form, given below, was already shown to be valid by using a truth table:

$$
\begin{array}{c}
p \\
p \rightarrow q \\
\hline
\therefore q
\end{array}
$$

- When arguments are expressed in English, the propositions sometimes have known truth values.
- In the argument below, the hypotheses and conclusion are all true:

$$
\begin{array}{c}
\text{5 is not an even number} \\
\text{If 5 is an even number, then 7 is an even number} \\
\hline
\therefore \text{7 is not an even number}
\end{array}
$$

- The argument is invalid because its form was shown to be invalid:

$$
\begin{array}{c}
\neg p \\
p \rightarrow q \\
\hline
\therefore \neg q \\
\end{array}
$$

## 2.2 Rules of inference with propositions
**Learning Objectives**
- Identify the rules of inference known to be valid arguments.
- Translate an argument expressed in English into logic symbols.
- Determine truth values that provide a counterexample for an invalid argument.
- Construct a logical proof showing that a logical argument is valid using the rules of inference and laws of propositional logic.
---

- Rules of inference known to be valid arguments

| Rules of inference | Name |
|---|---|
| $\begin{array}{c} p \\ p \rightarrow q \\ \hline \therefore q \end{array}$ | Modus ponens |
| $\begin{array}{c} \neg q \\ p \rightarrow q \\ \hline \therefore q \end{array}$ | Modus tollens |
| $\begin{array}{c} p \\ \hline \therefore p \lor q \end{array}$ | Addition |
| $\begin{array}{c} p \land q \\ \hline \therefore p \end{array}$ | Simplification |
| $\begin{array}{c} p \\ q \\ \hline \therefore p \land q \end{array}$ | Conjunction |
| $\begin{array}{c} p \rightarrow q q \rightarrow r \\ \hline \therefore p \rightarrow r \end{array}$ | Hypothetical syllogism |
| $\begin{array}{c} p \lor q \\ \neg p \\ \hline \therefore q \end{array}$ | Disjunctive syllogism |
| $\begin{array}{c} p \lor q \\ \neg p \lor r \\ \hline \therefore q \lor r \end{array}$ | Resolution |

- The validity of an argument can be established by applying the rules of inference and laws of propositional logic in a **logical proof**.
  - A logical proof of an argument is a sequence of steps, each consisting of a proposition and a justification.

- Here is an argument expressed in English:

$$
\begin{array}{c}
\text{If it is raining or windy or both, the game will be cancelled.} \\
\text{The game will not be cancelled} \\
\hline
\text{It is not windy.}
\end{array}
$$

- The first step in proving the validity of the argument is to assign variable names to each of the individual propositions:

$$
\begin{array}{c}
w: \text{It is windy} \\
r: \text{It is raining} \\
c: \text{The game will be cancelled}
\end{array}
$$

- Replacing the English phrases with variables results to:

$$
\begin{array}{c}
(r \lor w) \rightarrow c \\
\neg c \\
\hline
\therefore \neg w
\end{array}
$$

- The final step is to prove that the argument is valid using a logical proof:

| | | |
|---|---|---|
| 1. | $(r \lor v) \rightarrow c$ | Hypothesis |
| 2. | $\neg c$ | Hypothesis |
| 3. | $\neg (r \lor w)$ | Modus tollens, 1, 2 |
| 4. | $\neg r \land \neg w$ | De Morgan's Law, 3 |
| 5. | $\neg w \land \neg r$ | Commutative Law, 4 |
| 6. | $\neg w$ | Simplification, 5 |

## 2.3 Rules of inference with quantifiers
**Learning Objective**
- Distinguish between arbitrary and particular elements in a domain.
- Translate an argument with quantifiers expressed in English to logical symbols.
- Construct a logical proof showing that an argument with quantified statements is valid using the rules of inference for quantified statements.
- Show an argument with quantified statements is invalid by defining a domain and predicates for a counterexample.
---

- To apply the rules of inference to quantified expressions, such as $\forall x \neg (P(x) \land Q(x))$, the quantifier must be removed by plugging in a value from the domain to replace the variable $x$.
  - A value that can be plugged in for variable $x$ is called an **element** of the domain $x$.
- The elements of the domain can also be introduced within a proof with generic names such as $c$ or $d$.
- There are two types of named elements used in logical proofs.
  - An **arbitrary** element of a domain has no special properties other than those shared by all the elements of the domain.
  - A **particular** element of the domain may have properties that are not shared by all the elements of the domain.
- For example: If the domain is the set of all integers, 3 is a particular element of the domain because it is odd, which is not a property that is shared by all integers.
- Every domain element referenced in a proof must be defined on a separate line of the proof.
  - If the element is defined in a hypothesis, it is always a particular element and the definition of that element in the proof is labeled "Hypothesis".
  - If an element is introduced for the first time in the proof, the definition is labeled "Element definition" and must specify whether the element is arbitrary or particular.
    - In this material, an arbitrary element can only be introduced if the domain is non-empty.
      - This restriction is adopted to avoid unsound proofs which can arise with arbitrary elements from empty domains.
- The rules **existential instantiation** and **universal instantiation** replace a quantified variable with an element of the domain.
- The rules **existential generalization** and **universal generalization** replace an element of the domain with a quantified variable.
- These rules can only apply to non-nested quantifiers.

- Rules of inference for quantified statements

| Rule of Inference | Name | Example |
|---|---|---|
| $\begin{array}{c} c \text{ is an element (arbitrary or particular)} \\ \forall xP(x) \\ \hline \therefore P(c) \end{array}$ | Universal instantiation | $\begin{array}{c} \text{Izar is a student in the class.} \\ \text{Every student in the class completed the assignment.} \\ \text{Therefore, Izar completed the assignment.} \end{array}$ |
| $\begin{array}{c} c \text{ is an element (arbitrary or particular)} \\ P(c) \\ \hline \therefore \forall xP(c) \end{array}$ | Universal generalization | $\begin{array}{c} \text{Let c be an arbitrary integer} \\ c \le c^2 \\ \text{Therefore, every integer is less than or equal to its square} \end{array}$ |
| $\begin{array}{c} \exists xP(x) \\ \hline \therefore (c \text{ is a particular element}) \land P(c) \end{array}$ | Existential instantion* | $\begin{array}{c} \text{There is an integer that is equal to its square} \\ \text{Therefore, } c^2 = c \text{, for some integer } c \end{array}$ |
| $\begin{array}{c} c \text{ is an element (arbitrary or particular)} \\ P(c) \\ \hline \therefore \exists xP(x) \end{array}$ | Existential generalization | $\begin{array}{c} \text{Sam is a particular student in the class.} \\ \text{Sam completed the assignment.} \\ \text{Therefore, there is a student in the class who completed the assignment.} \end{array}$ |

*Each use of existential instantiation must define a new element with its own name (Ex: $c$ or $d$).

Note: In existential instantiation, the variable definition is part of the conclusion in the rule because the application of existential instantiation is tied to that particular variable. But when applying universal instantiation, any variable defined earlier in the proof can be plugged in.

### Multiple uses of existential instantiation: a common mistake
- A new particular element must be defined with a new name for each use of existential instantiation within the same logical proof in order to avoid a faulty proof that an invalid argument is valid.

### Showing an argument with quantified statements is invalid
- An argument with quantified statements can be shown to be invalid by defining a domain and predicates for which the hypotheses are all true, but the conclusion is false.

## 2.4 Mathematical definitions
**Learning objectives**
- Apply the definitions of even and odd numbers to show that a given number is even or odd.
- Apply the definition of a rational number to show that a given number is rational.
- Apply the definition of divisibility and factors to given numbers.
- List the factors of a number and determine whether the number is prime or composite.
- Interpret statements involving inequalities.
---

- Many theorems in the material about how to write proofs are facts about numbers that can be proven with standard algebra.

### Even and odd integers
- An integer $x$ is **even** if there is an integer $k$ such that $x = 2k$.
- An integer $x$ is **odd** if there is an integer $k$ such that $x = 2k + 1$.
- The **parity** of a number is whether the number is odd or even.
  - If two numbers are both even or both odd then the two numbers have the **same parity**.
  - If one number is odd and the other is even, then the two numbers have **opposite parity**.

### Rational Numbers
- A number $r$ is **rational** if there exist integers $x$ and $y$ such that $y \ne 0$ and $r = \frac{x}{y}$.
  - Note that for a particular rational number $r$, the choice of $x$ and $y$ are not necessarily unique. For example, if $r = 0.5$, then $r = \frac{1}{2}$ and $r = \frac{2}{4}$.

### Divides
- An integer $x$ **divides** an integer $y$ if and only if $x \ne 0$ and $y = kx$, for some integer $k$.
- The face that $x$ divides $y$ is denoted $x \mid y$. If $x$ does not divide $y$, then that fact is denoted $x \nmid y$.
- If $x$ divides $y$, then $y$ is a **multiple** of $x$, and $x$ is a **factor** or **divisor** of $y$.

### Prime and composite numbers
- An integer $n$ is **prime** if and only if $n > 1$, and the only positive integers that divide $n$ are 1 and $n$.
- An integer $n$ is **composite** if and only if $n > 1$, and there is an integer $m$ such that $1 < m < n$ and $m$ divides $n$.

### Inequalities
- If $x$ and $c$ are real numbers, then exactly one of the following statements is true:
  - $x < c$
  - $x = c$
  - $x > c$
- The values of $x$ and $c$ can also be related using the symbols $\le$ and $\ge$.
  - $x \ge c$ if and only if $x = c$ or $x > c$. We say that $x$ is **at least** $c$ or $x$ is **greater than or equal to** $c$.
  - $x \le c$ if and only if $x = c$ or $x < c$. We say that $x$ is **at most** $c$ or $x$ is **less than or equal to** $c$.
- A real number $x$ is **positive** if and only if $x > 0$.
- A real number $x$ is **negative** if and only if $x < 0$.
- A real number $x$ is **nonnegative** if and only if $x \ge 0$.
- A real number $x$ is **nonpositive** if and only if $x \le 0$.