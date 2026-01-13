# Chapter 1: Logic

## Table of Contents
- [1.1 Propositions and logical operations](#11-propositions-and-logical-operations)
  - [The conjunction operation](#the-conjunction-operation)
  - [Different ways to express a conjunction in English](#different-ways-to-express-a-conjunction-in-english)
  - [The disjunction operation](#the-disjunction-operation)
  - [Ambiguity of "or" in English](#ambiguity-of-or-in-english)
- [1.2 Evaluating compound propositions](#12-evaluating-compound-propositions)
  - [Filling in the rows of a truth table](#filling-in-the-rows-of-a-truth-table)
- [1.3 Conditional statements](#13-conditional-statements)
  - [The converse, contrapositive, and inverse](#the-converse-contrapositive-and-inverse)
  - [The biconditional operation](#the-biconditional-operation)
  - [Compound propositions with conditional and biconditional operations](#compound-propositions-with-conditional-and-biconditional-operations)
- [1.4 Logical Equivalence](#14-logical-equivalence)
  - [Showing logical equivalence using truth tables](#showing-logical-equivalence-using-truth-tables)
  - [De Morgan's laws](#de-morgans-laws)
- [1.5 Laws of propositional logic](#15-laws-of-propositional-logic)
  - [Using the laws of propositional logic to show logical equivalence](#using-the-laws-of-propositional-logic-to-show-logical-equivalence)
- [Video Lecture/Presentation Notes](#video-lecturepresentation-notes)
  - [Short-circuiting](#short-circuiting)

## 1.1 Propositions and logical operations
**Learning Objectives**:
- Determine whether a statement is a proposition.
- Express English propositions using logical notation.
- Construct truth tables for propositions involving conjunction, disjunction, inclusive or, exclusive or, and negation
- Evaluate compound propositions using the truth values of the individual propositions
---

- **Logic** is the study of formal reasoning
  - A statement in logic always has a well-defined meaning.
- The most basic element in logic is a **proposition**.
  - A proposition is a statement that is either true or false.
    - Examples:
     - Propositions:
       - There are an infinite number of prime numbers.
       - 17 is an even number.
    - Non-propositions:
      - What time is it? (Question, cannot be true or false)
      - Are you awake? (Even yes/no question is neither true nor false)
      - Have a nice day (Command, cannot be true or false)
- A proposition's **truth value** is a value indicating whether the proposition is true or false.
  - Truth values can be: known to be true, known to be false, unknown, or matter of opinion
  - Even if the truth value is unknown it can still be a proposition
  - The following are all propositions:

$$
\begin{array}{|c|c|}
\hline
\text{Proposition} & \text{Notes} \\
\hline
\text{Two plus two is four} & \text{Truth value is true.} \\
\text{Two plus two is five} & \text{Truth value is false.} \\
\text{Monday will be cloudy} & \text{Truth value is unknown.} \\
\text{The movie was funny} & \text{Truth value is a matter of opinion.} \\
\hline
\end{array}
$$

### The conjunction operation
- **Propositional variables** such as *p*, *q*, and *r* are used to denote arbitrary propositions, as in:
  - *p*: January has 31 days
  - *q*: February has 33 days
- A **compound proposition** is created by connecting individual propositions with logical operations.
- **Logical operations** combines propositions using a particular composition rule.
  - The conjunction operation is denoted by $\land$
    - The proposition $p \land q$ is read "*p* and *q*" and is called the **conjunction** of *p* and *q*.
    - $p \land q$ is true if both *p* is true and *q* is true.
      - If either *p* or *q* is false (or both), then $p \land q$ is false.
- A **truth table** shows the truth value of a compound proposition for every possible combination of truth values for the variables in the compound proposition.
  - Every row shows a particular truth value for each variable, along with the compound proposition's corresponding truth value

Here is the truth table for the conjunction operation:

$$
\begin{array}{|c c|c|}
\hline
p & q & p \land q \\
\hline
T & T & T \\
T & F & F \\
F & T & F \\
F & F & F \\
\hline
\end{array}
$$

### Different ways to express a conjunction in English
- Define the propositional variables *p* and *h* as:
  - *p*: The sauce looks disgusting
  - *h*: the sauce tastes delicious
- There are many ways to express the proposition *p* $\land$ *h* in English:

$$
\begin{array}{|c|c|}
\hline
\text{Expression} & \text{English} \\
\hline
p \land h & \text{The sauce looks disgusting and tastes delicious} \\
\text{p, but h} & \text{The sauce looks disgusting, but tastes delicious} \\
\text{Despite the fact that p, h} & \text{Despite the fact that the sauce looks disgusting, it tastes delicious} \\
\text{Although p, h} & \text{Although the sauce looks disgusting, it tastes delicious} \\
\hline
\end{array}
$$

### The disjunction operation
- The disjunction operation is denoted by $\lor$.
  - The proposition p $\lor$ q is read "*p* or *q*" and is called the **disjunction** of *p* and *q*.
  - $p \lor q$ is false  only if both *p* and *q* are false.
    - If either *p* or *q* (or both) is true, then $p \lor q$ is true.

Here is the truth table for the disjunction operation:

$$
\begin{array}{|c c|c|}
\hline
p & q & p \lor q \\
\hline
T & T & T \\
T & F & T \\
F & T & T \\
F & F & F \\
\hline
\end{array}
$$

### Ambiguity of "or" in English
- The meaning of the word "or" in English depends on the context.
- There are two common meanings of "or" in English:
  1. **Inclusive or**: The meaning of "or" in which either *p* or *q* (or both) is true.
  2. **Exclusive or**: The meaning of "or" in which either *p* or *q* is true, but not both.
    - Exclusive or is denoted by $\oplus$.
- The negation operation acts on just one proposition and has the effect of reversing the truth value of the proposition.
  - The negation of proposition *p* is denoted $\neg$*p* and is read as "not *p*".
    - $\neg$*p* is true if *p* is false, and $\neg$*p* is false if *p* is true.

Here is the truth table for the negation operation:

$$
\begin{array}{|c|c|}
\hline
p & \neg p \\
\hline
T & F \\
F & T \\
\hline
\end{array}
$$



## 1.2 Evaluating compound propositions
**Learning Objectives**:
- Determine truth values for compound propositions given truth values for variables
- Complete a truth table for two, three, or four variables
- Use a truth tables with intermediate columns to find truth values for complicated propositions.
- Evaluate compound propositions using order of operations for the logical operators of negation, conjunction, and disjunction.
- Translate English statements into statements with logic symbols.
---

Order of operations without parentheses:
1. $\neg$ (not)
2. $\land$ (and)
3. $\lor$ (or)

- Compound propositions can be created by using more than one operation
 - $p \lor \neg q \land r$ is read as "*p* or ((not *q*) and *r*)"
- To evaluate the following expression:
  - *p*: T *q*: F *r*: T
- $p \land \neg(q \lor r)$ **->** T $\land$ $\neg$(F $\lor$ T) **->** T $\land$ $\neg$ T **->** T $\land$ F **->** F 

### Filling in the rows of a truth table
- A truth table for a compound proposition has a row for every possible combination of truth assignments for the statement's variables.
 - If a compound proposition has *n* variables, there are $2^n$ rows
   - $(p \lor r) \land \neg q$ has 3 variables, so there are $2^3 = 8$ rows
- Each column is labeled
  - Columns corresponding to single variables are to the left and columns corresponding to compound propositions are to the right.
- Each column is filled in from top to bottom, beginning with **T**.
  - Start with the rightmost variable column and fill in the squares with an alternating **T** and **F** pattern.
  - The next column to the left is filled by an alternating **TT** and **FF** pattern.
  - The next column to the left is filled by an alternating **TTTT** and **FFFF** pattern.
  - For each new column the number of **T**s and **F**s in the pattern is doubled.

## 1.3 Conditional statements
**Learning Objectives**:
- Translate English statements into statements with logic symbols.
- Express equivalent conditional statements in English.
- Demonstrate the converse, inverse, and contrapositive of a proposition.
- Evaluate compound propositions with conditional and biconditional operations.
- Complete a truth table for conditional and biconditional propositions
- Determine if a truth values of a compound expression is known given a partial truth assignment.
---

- The **conditional operation** is denoted with the symbol $\rightarrow$.
  - The proposition $p \rightarrow q$ is read "if *p*, then *q*"
    - *p* is called the **hypothesis**
    - *q* is called the **conclusion**
  - $p \rightarrow q$ is false only when *p* is true and *q* is false.
    - $p \rightarrow q$ is true in all other cases.

Here is the truth table for the conditional operation:

$$
\begin{array}{|c c|c|}
\hline
p & q & p \rightarrow q \\
\hline
T & T & T \\
T & F & F \\
F & T & T \\
F & F & T \\
\hline
\end{array}
$$

- A conditional proposition is like a contract between two parties:
  - If you mow Mr. Smith's lawn, then he will pay you
    - The only way for the contract to be broken (F) is for you to mow the lawn and not get paid.
- In the words of logic, the only way for a conditional statement to be false is if the hypothesis is true and the conclusion is false. If the hypothesis is false, then the statement is true regardless of the conclusion.

$$
\begin{array}{|c|c|}
\hline
\text{Conditional Operation} & \text{English expressions} \\
\hline
\text{If p, then q.} & \text{If you mow Mr. Smith's lawn, then he will pay you.} \\
\text{If p, q.} & \text{If you mow Mr. Smith's lawn, he will pay you.} \\
\text{q if p.} & \text{Mr. Smith will pay you if you mow his lawn.} \\
\text{p implies q.} & \text{Mowing Mr. Smith's lawn implies that he will pay you.} \\
\text{q whenever p.} & \text{Mr. Smith will pay you whenever you mow his lawn.} \\
\text{p only if q.} & \text{You will mow Mr. Smith's lawn only if he pays you.} \\
\text{p is sufficient for q.} & \text{Mowing  Mr. Smith's lawn is sufficient for him to pay you.} \\
\text{q is necessary for p.} & \text{Mr. Smith's paying you is necessary for you to mow his lawn.} \\
\hline
\end{array}
$$

### The converse, contrapositive, and inverse
- Three conditional statements related to propositions $p \rightarrow q$ are so common that they have special names.
  1. The **converse** of $p \rightarrow q$ is $q \rightarrow p$.
  2. The **contrapositive** of $p \rightarrow q$ is $\neg q \rightarrow \neg p$.
  3. The **inverse** of $p \rightarrow q$ is $\neg p \rightarrow \neg q$.

### The biconditional operation
- If *p* and *q* are propositions, the proposition "*p* if and only if *q*" is expressed with the **biconditional operation** and is denoted $p \leftrightarrow q$.
  - $p \leftrightarrow q$ is true if *p* and *q* have the same truth values and is false otherwise.
    - $p \leftrightarrow q$ is true if both *p* and *q* are true or both are false.

$$
\begin{array}{|c c|c|}
\hline
p & q & p \leftrightarrow q \\
\hline
T & T & T \\
T & F & F \\
F & T & F \\
F & F & T \\
\hline
\end{array}
$$

### Compound propositions with conditional and biconditional operations
- The conditional and biconditional operations can be combined with other logical operations
  - $p \rightarrow (q \land r)$ is read "if *p*, then (*q* and *r*)"
- If parentheses are not used to explicitly indicate the order in which to apply the operations, then $ \rightarrow$ and $ \leftrightarrow$ have the lowest precedence of all the logical operations.
- A good practice is to use parentheses to avoid any ambiguity.

## 1.4 Logical Equivalence
**Learning Objectives**:
- Determine if a compound proposition is a tautology or contradiction.
- Show that two compound propositions are logically equivalent using a truth table.
- Show that two compound propositions are not logically equivalent using a specific truth assignment.
- Apply De Morgan's laws for negating the conjunction and disjunction of two propositional variables.
- Rewrite English expressions using De Morgan's laws.
---

- A compound proposition is a **tautology** if the proposition is always true, regardless of the truth value of the individual propositions that occur in it.
  - $ p \lor \neg p$ is a simple tautology.
- A compound proposition is a **contradiction** if the proposition is always false, regardless of the truth value of the individual propositions that occur in it.
  - $ p \land \neg p$ is a simple contradiction.

### Showing logical equivalence using truth tables
- Two compound propositions are **logically equivalent** if they have the same truth value regardless of the truth values of their individual propositions.
  - If *s* and *r* are two compound propositions, the notation $s \equiv r$ means that *s* and *r* are logically equivalent.
    - *p* and $\neg \neg p$ are logically equivalent so $p \equiv \neg \neg p$.

A truth table can be used to show that two compound propositions are logically equivalent.

$$
\begin{array}{|c|c|}
\hline
p & \neg \neg p \\
\hline
T & T \\
F & F \\
\hline
\end{array}
$$

### De Morgan's laws
- **De Morgan's laws** are logical equivalences that show how to correctly distribute a negation operation inside a parenthesized expression.
- Both versions of De Morgan's laws are useful in logical reasoning
1. The first De Morgan Law is:
  - $\neg (p \lor q) \equiv (\neg p \land \neg q)$
  - When the negation operation is distributed inside the parentheses, the disjunction operation changes to a conjunction operation.
2. The second version of De Morgan's law is:
  - $\neg (p \land q) \equiv (\neg p \lor \neg q)$
  - When the negation operation is distributed inside the parentheses, the conjunction operation changes to a disjunction operation.

## 1.5 Laws of propositional logic
**Learning Objectives**:
- Simplify a compound proposition using the laws of propositional logic.
- Write a proof using the laws of propositional logic to show that two compound propositions are logically equivalent.
---

- If two propositions are logically equivalent, then one can be substituted for the other within a more complex proposition.
  - For example $p \rightarrow q \equiv \neg p \lor q$ therefore:
    - $(p \lor r) \land (\neg p \lor q) \equiv (p \lor r) \lor (p \rightarrow q)$

### Using the laws of propositional logic to show logical equivalence
- Substitution gives an alternate way of showing that two propositions are logically equivalent.
  - If one proposition can be obtained by another by a series of substitutions using equivalent expressions, then the two propositions are logically equivalent.

Laws of propositional logic:

$$
\begin{array}{|c|c|c|}
\hline
\text{Idempotent laws:} & p \lor p \equiv p & p \land p \equiv p \\
\hline
\text{Associative laws:} & (p \lor q) \lor r \equiv p \lor (q \lor r) & (p \land q) \land r \equiv p \land (q \land r) \\
\hline
\text{Commutative laws:} & p \lor q \equiv q \lor p & p \land q \equiv q \land p \\
\hline
\text{Distributive laws:} & p \lor (q \land r) \equiv (p \lor q) \land (p \lor r) & p \land (q \lor r) \equiv (p \land q) \lor (p \land r)\\
\hline
\text{Identity laws:} & p \lor F \equiv p & p \land T \equiv p \\
\hline
\text{Domination laws:} & p \land F \equiv F & p \lor T \equiv T \\
\hline
\text{Double negation law:} & \neg \neg p \equiv p \\
\hline
\text{Complement laws:} & p \land \neg p \equiv F & p \lor \neg p \equiv T \\
& \neg T \equiv F & \neg F \equiv T \\
\hline
\text{De Morgan's laws:} & \neg(p \lor q) \equiv \neg p \land \neg q & \neg(p \land q) \equiv \neg p \lor \neg q \\
\hline
\text{Absorption laws:} & p \lor (p \land q) \equiv p & p \land (p \lor q) \equiv p \\
\hline
\text{Conditional identities:} & p \rightarrow q \equiv \neg p \lor q & p \leftrightarrow q \equiv (p \rightarrow q) \lor (q \rightarrow p) \\
\hline
\end{array}
$$

## Video Lecture/Presentation Notes
### Short-circuiting
- Sometimes you don't need to calculate all parts of a compound proposition
  - Example: $p \land (q \lor r \lor \neg t)$
    - If *p* is false, then the entire proposition is false, regardless of the truth values of *q*, *r*, and *t*.
