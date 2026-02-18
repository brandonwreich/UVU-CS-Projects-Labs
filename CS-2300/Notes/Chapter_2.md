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
| $\begin{array}{c} \neg q \\ p \rightarrow q \\ \hline \therefore \neg p \end{array}$ | Modus tollens |
| $\begin{array}{c} p \\ \hline \therefore p \lor q \end{array}$ | Addition |
| $\begin{array}{c} p \land q \\ \hline \therefore p \end{array}$ | Simplification |
| $\begin{array}{c} p \\ q \\ \hline \therefore p \land q \end{array}$ | Conjunction |
| $\begin{array}{c} p \rightarrow q \\ q \rightarrow r \\ \hline \therefore p \rightarrow r \end{array}$ | Hypothetical syllogism |
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

## 2.5 Introduction to Proofs
**Learning Objectives**
- Distinguish between theorems that are universal statements versus existential statements.
- Recognize the format of a proof.
- Write proofs by exhaustion for various theorems.
- Set up proofs using universal generalization.
- Analyze and disprove theorems by providing counterexamples.
- Demonstrate how existential statements are proved or disproved.
---

- A primary goal in mathematics is to prove theroms.
  - A **therom** is a statement that can be proven to be true.
  - A **proof* consists of a series of steps that follow logically from assumptions or from previously proven statements, with a final step that results in the statement of the theroem being proven.
- The proof of a therom may use **axioms**, which are statements assumed to be true

Here is an example showing a proof: (Steps are in parens)

Theorem: Every positive integer is less than or equal to its square. (State the theorem to be proven)

Proof: (Indicate the proof is starting)
  - Let $x$ be an integer, where $x>0$ (Name an arbitrary object in the domain and state given assumptions about the object)
  - Since $x$ is aninteger and $x>0$, then $x \ge 1$. (State reasoning in complete sentences)
  - Since $x > 0$, we can multiply both sides of the inequality by $x$ to get: $x * x \ge 1 * x$.
  - Simplify the expression we get: $x^2 \ge x$. $\blacksquare$ (End of proof symbol)

### Theorems that are universal or existential statements
- Most theorems are assertions about all the elements in a set and are therefore unniversal statements.
  - A universal statements doesn not necessarily  explicitly use words associated with a universal quantifier, such as "for all" or "for every".
- Consider the following:
  - `The sum of two positive real numbers is strictly greater than the average of two numbers.`
  - The statement of the theorem can be expressed in logic as the following where the domain for $x$ and $y$ is the set of all real numbers:
  $\forall x \forall y ((x > 0 and y > 0) \rightarrow (x + y) > \frac{x + y}{2})$

- Universal statements can also refer to more than one object, which may come from different domains.
- Consider the following:
  - If $x$ and $y$ are positive real numbers and $n$ is a positive integer, then $(x + y)^n \ge x^n + y^n$.
  - The statement above concers three numbers: $x$, $y$, and $z$.
    - $x$ and $y$ are positive real numbers and $n$ is a positive integer

- Some theorems are existential statements and assert that a number or object with certain properties exists.
- Consider the following:
  - `There is an integer that is equal to its square.`
  - In logic this statement is expressed as the following where the domain for variable $x$ is the set of all integers:
    - $\exists x(x = x^2)$

### Proofs of universal statements: proof by exhaustion
- If the domain of a universal statement is small, proving the statement by checking each element individually may be the easiest.
  - This kind of proof is called **proof by exhaustion**.
- Consider the statement:
  - If $n \in {-1,0,1}$, then $n^2 = |n|$.
  - The notation $n \in {-1,0,1}$ means that $n$ is equal to -1, 0, or 1.
  - The above statement can be proven by verifying the equality for all three possible values of $n$.

### Proofs of universal statements: universal generalization
- If the domain of a universal statement is a large or even infinite set, it becomes impractical or infeasible to prove the statement individually for each element in the domain.
  - So the most common method for proving  universal statements is to use universal generalization.
  - A proof that uses **universal generalization** to prove a statement names an arbitrary object in the domain and proves the statement for that object.

- Therom: Every positive integer is less than or equal to its square.
- Proof:
  Let x be an integer such that $x > 0$
  [Steps showing that $x \le x^2$]

- Depending on the complexity of the proof it may be useful to inform the reader where the proof is going.

### Counterexamples
- It may be tempting to prove statements over a lage or infinite domain by example as well.
- Consider the following:
  - If $n$ is an integer greater than $1$, then $(1.1)^n < n^10$.
  - The statement holds for $n=2$ because $(1.1)^2 = 1.21 < 1024 = 2^10$
  - It also holds for $n = 100$ becuase $(1.1)^100 \approx 13780.61 < 100000000000000000000 = 100^10$
  - The statement holds for every number all the way up through 685. But for $n = 686$, the statement is false because $(1.1)^686 > (686)^10$.
    - This called a **counterexample**. A counterexample is an assignment of values to varibales that shows that a universal statement is false.

- The example above illistrates the danges in generalizing from examples becuase there can alwasy be a counterexample that was not tried.
  - The only way to be certain that a universal statementis true is a general proof that holds for all objects in the domain.

### Counterexamples for conditioinal statements
- A counterexample for a conditional statement must satisfy all the hypotheses and contradict the conclusion
- Consider the following:
  - $\forall x(H(x) \rightarrow C(x))$
  - A counterexample for the expression above is a specific element $d$ in the domain for variable $x$ such that $H(d) \rightarrow C(d)$ is flase.
    - Therefore a counterexample is a particular element of the domain that satisfies all the hypothesis of a conditional statement and does not satisfy the conclusion $H(d) = T, C(d) = F$

- Consider the following:
  - $\forall ((H_1(x) \land H_2(x)) \rightarrow C(x))$
  - A counterexample for a statement with more than one hypothesis such as the example above, must be a particular element $d$ that satifies all the hypothesis and does not satisfy the conclusion ($H_1(d) = H_2(d) = T, C(d) = F$)

- This reasoning can be applied to statements expressed in English
  - For any real number $x$, if $x \ge 0$ and $x > 1$, then $x^2 < x$.
  - The assignment $x = 2$ is not a counterexample to the statement above because it only satisfies one of othe hypotheses.
  - The assignment $x = 0$ is a true counterexample because both of the hypthoeses are satisfied, but the conclusion is false.

### Proving Existential statements
- A proof that shows that an existential statement is true is called an **existence proof**.
  - The most common type of existence proof is a constructive proof of existence. A **construtive proof of existence** gives an example of an element in the domain or a set of directions to construct an element in the domain that has the required properties.

- Therom: There is an integer that can be written as the sum of the squares of two positive integers in two different ways
- Proof: Let $n = 50. 50 = 1^2 + 7^2 = 5^2 + 5^2$. Therefore, the integer 50 can be written as the sum of the squares of two positive integers in two different ways. $\blacksquare$

- Consider another example:
  - For every integer $x$, there is an integer $y$ such that $y + 3 = x$.
  - The statement in logic is nested quantifiers: $\forall x \exists y (y + 3 = x)$, where the domain for both $x$ and $y$ is the set of all integers. (The existence proof for this statement also uses universal generalization).
  - The proof starts by defing the variable $x$ to be arbitrary, then gives a way to find $y$ in terms of $x$ such that $y$ is an integer and $y + 3 = x$.
  - Proof: Suppose that $x$ is an integer. Let $y = x - 3$. Since $x$ is an integer, $x - 3$ is also an integer. Therefore, $y$ is an integer. Furthermore, $y + 3 = (x - 3) + 3 = x \blacksquare$.
- The two examples of existence proofs given above are both constructive. A **nonconstructive proof of existence** proves that an element with the required properties exists without giving a specific example.
  - A common method for giving a nonconstructive existence proof is to show that the non-existence of an element with the required properties leads to a contradiction.

### Disproving existential statements
- An existential statement asserts that there is at least one element in a domain that has some particular properties.
  - To show that an existential statement is false, one must argue that every single element of the domain does not have the required properties
- Consider the following:
  - `There is a real number whose square is negative.`
  - To disprove the statement above, one needs to show that the square of every real nuymber is not negative.
  - The reasoning above is an example of DeMorgan's law. De Morgan's law says that the statement: `It is not true that there exists an element x in the domain with property P.` which is equivalent to the statement `Every element x in the domain does not have property P.`
  - Therefore, the approach to proving that an existential statement is false is the same as the approach to proving that a universal statement is true.

## 2.6 Best practices and common erros in proof
**Learning objectives**
- Identify whether given assumptions in a proof are valid.
- Recognize and use common keywords and phrases in proofs.
- Recognize and use best practices in formatting, language, and equations in writing proofs.
- Identify common errors and missing steps in proofs.
- Distinguish between valid and invalid uses of existential instantiation.
---

### Proof steps and assumptions
- Most mathematical proofs use other facts that are assumed to be true.

| Allowed assumption in proof | Example |
|---|---|
| The rules of algebra | If $x$, $y$, and $z$ are real numbers and $x = y$, then $x + z = y + z$ |
|The seet of integers is closed under addition, multiplication, and subtraction | In other words, sums, products, and differences of integers are also integers. |
| Every integer is either even or odd | This fact is proven elsewhere in material |
| If $x$ is an integer, there is not integer between $x$ and $x + 1$ | In particular, there is no integer between 0 and 1.|
| The relative order of any two real numbers. | For example $\frac{1}{2} < 1$ or $4.2 \ge 3.7$. |
| The square of any real number is greater than or equal to 0 | This fact is proven later |
| Every real number is positive, negative, or equal to 0 | That is, for every real number $x$, exactly one of the following expressions is true: $x > 0$, $x < 0$, $x = 0$. |
| Algebraic facts about inequalities | For any real number numbers, $a$, $b$, and $c$, if $a > b$, then $a + c > b + c$. For any real numbers, $a$, $b$, and $c$, if $a > b$ and $c > 0$, then $ac > bc$. For any real numbers, $a$, $b$, and $c$, if $a > b$ and $c < 0$, then $ac < bc$

### The language of proofs
- Every step in a proof requires justification.
  - The reader needs to know if an assertion follows from an assumption of the proof, a definition, or a previously proven fact.
- The list below gives common keywords and phrases that are used to explain the reasoning in a proof.

| Common keywards and phrases in proofs | Definition |
|---|----|
| Thus and therefore | A statement that follows from the previous statement or previous few statements cn be started with "Thus" or "Therefore". $n$ and $m$ are integers. Therefore, $n = m$ is also an integer. $n$ is a positive integer. Thus, $n \ge 1$. Other words that serve the same purpose are "it follows that", "then", "hence" |
| Let | New variable names are often introduced with the word "let". For example, "Let $x$ be a positive integer." |
| Suppose | The word "suppose can also be used to introduce a new variable. Suppose is also used to introduce a new assumption as in: "Suppose that $x$ is odd", assuming that $x$ has already been introduced as an integer earlier in the proof. |
| Since | If a statement depends on a fact that appeared earlier in the proof or in the assumptions of the theorem, remind the reader of that fact before the statement. The phrase "because we know that" serves the same purpose. For example, assuming that the facts $x > 0$ and $ y > z$ have been established earlier, a proof could say: "Since $x > 0$ and $y > z$, then $xy > xz$ |
| We will prove... and We will show... | It is important in mathematical proofs to give readers an indication of where the proof is leading, by saying what will be proven in the upcoming steps of the proof. In the context of a mathematical proof, "showing" a mathematical fact means the same thing as "proving" a mathematical fact.|
| By definition | A fact that is known because of a definition, can be started with the phrase "By definition". For example: "The integer $m$ is even. By definition, $m = 2k$ for some integer $k$. |
| By assumption | A fact that is known because of an assumption, can be started with the phrase "By assumption". For example: "By assumption, $x$ is positive. Therefore, $x > 0$." |
| In other words | Sometimes rephrasing a statement in a more specific way is useful. The phrase "in other words" is useful in this context. For example: "We must show that the average of $x$ and $y$ is positive. In other words, we must show that $\frac{x + y}{2}$." |
| gives and yields | Sometimes a proof is clearer if even an algebraic step is justified. The words "gives" and "yields" say that one equation or inequality follows from another. "Multiplying both sides of the inequality $x > y$ by 2 gives $2x > 2y$." "Substituting $m = 2k$ into $m^2$ yeilds $(2k)^2$."

### Best practices in writing proofs
- The list of best preactices given below are important for writing valid proofs and for writing proofs that are easier for a reader to follow.

| Best practices in writing proofs | Explanination |
|---|---|
Indicate when the proof starts and ends. | In this material, every proof begins with the word **Proof** and ends with the symbol $\blacksquare$. |
| Write proofs in complete sentences | A proof should read like English text. In mathematical proofs, English sentences often contain mathematical expressions but those should read naturally as part of the sentence. For example: "If $x$ is an integer that is greater than 0, then $x \ge 1$. |
| Give the reader a roadmap of what has been shown, what is assumed, and where the proof is going. | The beginning of a proof should always state what facts are assumed and ideally inform the reader what will be proven in the proof. If a proof is long, it is helpful to indicate at one or more points in the middle what has been proven and what has yet to be proven. For example: "We have shown that $n$ is a postivie integer. Now we must estable that $n$ is composite." |
| Introduce each variable when the variable is used for the first time. | |
| A block of equations should be introduced with English text and each step that does not follow from algebra should be justified. | |

### Existential instantiation
- **Existential instantiation** is a law of logic that says if an object is known to exist, then that object can be given a name, as long as the name is not currently being used to denote something else.

### Common mistakes in proofs
- Mistakes in arithmetic or basic algebra are some of the most common types of mistakes in proofs.