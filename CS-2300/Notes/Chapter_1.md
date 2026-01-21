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
- [1.6 Predicates and quantifiers](#16-predicates-and-quantifiers)
  - [Universal quantifier](#universal-quantifier)
  - [Existential quantifier](#existential-quantifier)
- [1.7 Quantified Statements](#17-quantified-statements)
  - [Translating between English statements and quantified statements](#translating-between-english-statements-and-quantified-statements)
- [1.8 De Morgan's law for quantified statements](#18-de-morgans-law-for-quantified-statements)
- [1.9 Nested Quantifiers](#19-nested-quantifiers)
  - [Nested quantifiers of the same type](#nested-quantifiers-of-the-same-type)
  - [Alternating nested quantifiers](#alternating-nested-quantifiers)
  - [Nested quantifiers with more than two variables](#nested-quantifiers-with-more-than-two-variables)
  - [De Morgan's law with nested quantifiers](#de-morgans-law-with-nested-quantifiers)
- [1.10 More nested quantified statements](#110-more-nested-quantified-statements)
  - [Using logic to express "everyone else"](#using-logic-to-express-everyone-else)
  - [Expressing uniqueness in quantified statements](#expressing-uniqueness-in-quantified-statements)
  - [Moving quantifiers in logical statements](#moving-quantifiers-in-logical-statements)
- [Video Lecture/Presentation Notes](#video-lecturepresentation-notes)
  - [Short-circuiting](#short-circuiting)

## 1.1 Propositions and logical operations
**Learning Objectives**:
- Determine whether a statement is a proposition.
- Express English propositions using logical notation.
- Construct truth tables for propositions involving conjunction, disjunction, inclusive or, exclusive or, and negation.
- Evaluate compound propositions using the truth values of the individual propositions.
---

- **Logic** is the study of formal reasoning.
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
  - Truth values can be: known to be true, known to be false, unknown, or matter of opinion.
  - Even if the truth value is unknown it can still be a proposition.
  - The following are all propositions:

| Proposition | Notes |
|---|---|
| Two plus two is four | Truth value is true. |
| Two plus two is five | Truth value is false. |
| Monday will be cloudy | Truth value is unknown. |
| The movie was funny | Truth value is a matter of opinion. |

### The conjunction operation
- **Propositional variables** such as $p$, $q$, and $r$ are used to denote arbitrary propositions, as in:
  - $p$: January has 31 days.
  - $q$: February has 33 days.
- A **compound proposition** is created by connecting individual propositions with logical operations.
- **Logical operations** combine propositions using a particular composition rule.
  - The conjunction operation is denoted by $\land$
    - The proposition $p \land q$ is read "$p$ and $q$" and is called the **conjunction** of $p$ and $q$.
    - $p \land q$ is true if both $p$ is true and $q$ is true.
      - If either $p$ or $q$ is false (or both), then $p \land q$ is false.
- A **truth table** shows the truth value of a compound proposition for every possible combination of truth values for the variables in the compound proposition.
  - Every row shows a particular truth value for each variable, along with the compound proposition's corresponding truth value.

Here is the truth table for the conjunction operation:

| $p$ | $q$ | $p \land q$ |
|---|---|---|
| $T$ | $T$ | $T$ |
| $T$ | $F$ | $F$ |
| $F$ | $T$ | $F$ |
| $F$ | $F$ | $F$ |

### Different ways to express a conjunction in English
- Define the propositional variables $p$ and $h$ as:
  - $p$: The sauce looks disgusting.
  - $h$: The sauce tastes delicious.
- There are many ways to express the proposition $p \land h$ in English:

| Expression | English |
|---|---|
| $p \land h$ | The sauce looks disgusting and tastes delicious. |
| p, but h | The sauce looks disgusting, but tastes delicious. |
| Despite the fact that p, h | Despite the fact that the sauce looks disgusting, it tastes delicious. |
| Although p, h | Although the sauce looks disgusting, it tastes delicious. |

### The disjunction operation
- The disjunction operation is denoted by $\lor$.
  - The proposition p $\lor$ q is read "$p$ or $q$" and is called the **disjunction** of $p$ and $q$.
  - $p \lor q$ is false  only if both $p$ and $q$ are false.
    - If either $p$ or $q$ (or both) is true, then $p \lor q$ is true.

Here is the truth table for the disjunction operation:

| $p$ | $q$ | $p \lor q$ |
|---|---|---|
| $T$ | $T$ | $T$ |
| $T$ | $F$ | $T$ |
| $F$ | $T$ | $T$ |
| $F$ | $F$ | $F$ |

### Ambiguity of "or" in English
- The meaning of the word "or" in English depends on the context.
- There are two common meanings of "or" in English:
  1. **Inclusive or**: The meaning of "or" in which either $p$ or $q$ (or both) is true.
  2. **Exclusive or**: The meaning of "or" in which either $p$ or $q$ is true, but not both.
    - Exclusive or is denoted by $\oplus$.
- The negation operation acts on just one proposition and has the effect of reversing the truth value of the proposition.
  - The negation of proposition $p$ is denoted $\neg p$ and is read as "not $p$".
    - $\neg p$ is true if $p$ is false, and $\neg p$ is false if $p$ is true.

Here is the truth table for the negation operation:

| $p$ | $\neg p$ |
|---|---|
| $T$ | $F$ |
| $F$ | $T$ |



## 1.2 Evaluating compound propositions
**Learning Objectives**:
- Determine truth values for compound propositions given truth values for variables.
- Complete a truth table for two, three, or four variables.
- Use truth tables with intermediate columns to find truth values for complicated propositions.
- Evaluate compound propositions using order of operations for the logical operators of negation, conjunction, and disjunction.
- Translate English statements into statements with logic symbols.
---

Order of operations without parentheses:
1. $\neg$ (not)
2. $\land$ (and)
3. $\lor$ (or)

- Compound propositions can be created by using more than one operation.
  - $p \lor \neg q \land r$ is read as "$p$ or ((not $q$) and $r$)".
- To evaluate the following expression:
  - $p$: T $q$: F $r$: T
- $p \land \neg(q \lor r)$ **->** T $\land$ $\neg$(F $\lor$ T) **->** T $\land$ $\neg$ T **->** T $\land$ F **->** F

### Filling in the rows of a truth table
- A truth table for a compound proposition has a row for every possible combination of truth assignments for the statement's variables.
  - If a compound proposition has $n$ variables, there are $2^n$ rows.
    - $(p \lor r) \land \neg q$ has 3 variables, so there are $2^3 = 8$ rows.
- Each column is labeled.
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
- Complete a truth table for conditional and biconditional propositions.
- Determine if truth values of a compound expression are known given a partial truth assignment.
---

- The **conditional operation** is denoted with the symbol $\rightarrow$.
  - The proposition $p \rightarrow q$ is read "if $p$, then $q$".
    - $p$ is called the **hypothesis**.
    - $q$ is called the **conclusion**.
  - $p \rightarrow q$ is false only when $p$ is true and $q$ is false.
    - $p \rightarrow q$ is true in all other cases.

Here is the truth table for the conditional operation:

| $p$ | $q$ | $p \rightarrow q$ |
|---|---|---|
| $T$ | $T$ | $T$ |
| $T$ | $F$ | $F$ |
| $F$ | $T$ | $T$ |
| $F$ | $F$ | $T$ |

- A conditional proposition is like a contract between two parties:
  - If you mow Mr. Smith's lawn, then he will pay you.
    - The only way for the contract to be broken (F) is for you to mow the lawn and not get paid.
- In the words of logic, the only way for a conditional statement to be false is if the hypothesis is true and the conclusion is false. If the hypothesis is false, then the statement is true regardless of the conclusion.

| Conditional Operation | English expressions |
|---|---|
| If p, then q. | If you mow Mr. Smith's lawn, then he will pay you. |
| If p, q. | If you mow Mr. Smith's lawn, he will pay you. |
| q if p. | Mr. Smith will pay you if you mow his lawn. |
| p implies q. | Mowing Mr. Smith's lawn implies that he will pay you. |
| q whenever p. | Mr. Smith will pay you whenever you mow his lawn. |
| p only if q. | You will mow Mr. Smith's lawn only if he pays you. |
| p is sufficient for q. | Mowing Mr. Smith's lawn is sufficient for him to pay you. |
| q is necessary for p. | Mr. Smith's paying you is necessary for you to mow his lawn. |

### The converse, contrapositive, and inverse
- Three conditional statements related to propositions $p \rightarrow q$ are so common that they have special names.
  1. The **converse** of $p \rightarrow q$ is $q \rightarrow p$.
  2. The **contrapositive** of $p \rightarrow q$ is $\neg q \rightarrow \neg p$.
  3. The **inverse** of $p \rightarrow q$ is $\neg p \rightarrow \neg q$.

### The biconditional operation
- If $p$ and $q$ are propositions, the proposition "$p$ if and only if $q$" is expressed with the **biconditional operation** and is denoted $p \leftrightarrow q$.
  - $p \leftrightarrow q$ is true if $p$ and $q$ have the same truth values and is false otherwise.
    - $p \leftrightarrow q$ is true if both $p$ and $q$ are true or both are false.

| $p$ | $q$ | $p \leftrightarrow q$ |
|---|---|---|
| $T$ | $T$ | $T$ |
| $T$ | $F$ | $F$ |
| $F$ | $T$ | $F$ |
| $F$ | $F$ | $T$ |

### Compound propositions with conditional and biconditional operations
- The conditional and biconditional operations can be combined with other logical operations.
  - $p \rightarrow (q \land r)$ is read "if $p$, then ($q$ and $r$)".
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
  - If $s$ and $r$ are two compound propositions, the notation $s \equiv r$ means that $s$ and $r$ are logically equivalent.
    - $p$ and $\neg \neg p$ are logically equivalent so $p \equiv \neg \neg p$.

A truth table can be used to show that two compound propositions are logically equivalent.

| $p$ | $\neg \neg p$ |
|---|---|
| $T$ | $T$ |
| $F$ | $F$ |

### De Morgan's laws
- **De Morgan's laws** are logical equivalences that show how to correctly distribute a negation operation inside a parenthesized expression.
- Both versions of De Morgan's laws are useful in logical reasoning.
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

| Law | Formula 1 | Formula 2 |
|---|---|---|
| Idempotent laws: | $p \lor p \equiv p$ | $p \land p \equiv p$ |
| Associative laws: | $(p \lor q) \lor r \equiv p \lor (q \lor r)$ | $(p \land q) \land r \equiv p \land (q \land r)$ |
| Commutative laws: | $p \lor q \equiv q \lor p$ | $p \land q \equiv q \land p$ |
| Distributive laws: | $p \lor (q \land r) \equiv (p \lor q) \land (p \lor r)$ | $p \land (q \lor r) \equiv (p \land q) \lor (p \land r)$ |
| Identity laws: | $p \lor F \equiv p$ | $p \land T \equiv p$ |
| Domination laws: | $p \land F \equiv F$ | $p \lor T \equiv T$ |
| Double negation law: | $\neg \neg p \equiv p$ | |
| Complement laws: | $p \land \neg p \equiv F$ | $p \lor \neg p \equiv T$ |
| | $\neg T \equiv F$ | $\neg F \equiv T$ |
| De Morgan's laws: | $\neg(p \lor q) \equiv \neg p \land \neg q$ | $\neg(p \land q) \equiv \neg p \lor \neg q$ |
| Absorption laws: | $p \lor (p \land q) \equiv p$ | $p \land (p \lor q) \equiv p$ |
| Conditional identities: | $p \rightarrow q \equiv \neg p \lor q$ | $p \leftrightarrow q \equiv (p \rightarrow q) \lor (q \rightarrow p)$ |

## 1.6 Predicates and quantifiers
**Learning Objectives**:
- Differentiate between propositions and predicates.
- Determine the truth value of a quantified statement for a given set of predicates and domains.
- Translate a mathematical statement into an equivalent logical expression using predicates and quantifiers.
- Understand the requirements to show that a quantified statement is true or false.
- Provide an example to show an existentially quantified statement is true.
- Provide a counterexample to show a universally quantified statement is false.
---

- Many mathematical statements contain variables.
  - Example: $x$ is an odd number.
  - This is not a proposition because the statement does not have a well-defined truth value until the value of x is specified.
- A **predicate** is a logical statement with a truth value that is a function of one or more variables.
  - A predicate can depend on more than one value.
    - $Q(x,y) : x^2 = y$ (Q(5,25) would be true because 5^2 = 25).
    - $R(x,y,z) : x + y = z$
- The **domain** of a variable in a predicate is the set of all possible values for the variables.
- Statements outside of mathematics also contain variables.
  - Example: "This car is fast."
    - The predicate "This car is fast." contains the variable "car" which could be any car.

### Universal quantifier
- Another way to turn a predicate into a proposition is to use a quantifier.
- The logical statement $\forall xP(x)$ is read "for all $x, P(x)$" or "for every $x, P(x)$".
  - The statement $\forall xP(x)$ is true if $P(x)$ is true for every $x$ in the domain of $x$.
- The symbol $\forall$ is a universal quantifier and the statement $\forall xP(x)$ is called a **universally quantified statement**.
  - $\forall xP(x)$ is a proposition because it is either true or false.
- Universally quantified statements can be proven to be true by showing that the predicate holds for an arbitrary element from the domain.
- A **counterexample** for a universally quantified statement is an element in the domain for which the predicate is false.
  - A single counterexample is sufficient to show that a universally quantified statement is false.
- It is typically assumed that the domain contains at least one element. If the domain for the variable $x$ is empty, then the statement $\forall xP(x)$ is true because there are no elements in the domain for which $P(x)$ is false.
### Existential quantifier
- The logical statement $\exists xP(x)$ is read "there exists an $x$ such that $P(x)$".
  - The statement $\exists xP(x)$ is true if $P(x)$ is true for at least one $x$ in the domain of $x$.
- The symbol $\exists$ is an existential quantifier and the statement $\exists xP(x)$ is called an **existentially quantified statement**.
  - $\exists xP(x)$ is a proposition because it is either true or false.
- A single example is sufficient to show that an existentially quantified statement is true, but showing that an existentially quantified statement is false requires showing that there are no elements in the domain for which the predicate is true.
- It is typically assumed that the domain contains at least one element. If the domain for the variable $x$ is empty, then the statement $\exists xP(x)$ is false because there is no element in the domain for which $P(x)$ is true.

## 1.7 Quantified Statements
**Learning Objectives**:
- Translate between English statements and logical expressions involving quantifiers, predicates, and logical operations.
- Determine the truth value of a quantified statement with logical operators given a table for the predicates over a finite domain.
---

- Universally and existentially quantified statements can be constructed from logical operations.
  - $P(x) : x$ is prime
  - $O(x) : x$ is odd
  - The proposition $\exists x(P(x) \land \neg O(x))$ states that there exists a positive number that is prime and not odd.
- The universal and existential quantifiers are generically called **quantifiers**.
- A logical statement that includes a universal or existential quantifier is called a **quantified statement**.
- The quantifiers $\forall$ and $\exists$ are applied before the logical operations used for propositions.
  - This means that the statement $\forall xP(x) \land Q(x)$ is equivalent to $(\forall xP(x)) \land Q(x)$ as opposed to $\forall x(P(x) \land Q(x))$.
- The variable $x$ in the predicate $P(x)$ is called a **free variable** because the variable is free to take on any value in the domain.
- The variable $x$ in the statement $\forall xP(x)$ is a **bound variable** because the variable is bound to a quantifier.
- A statement with no free variables is a proposition because the statement's truth value can be determined.
  - In the statement $(\forall x(Px)) \land Q(x)$, the variable $x$ in $P(x)$ is bound by the universal quantifier, but the variable $x$ in $Q(x)$ is not bound by the universal quantifier. Therefore, the statement $(\forall x(Px)) \land Q(x)$ is not a proposition.

### Translating between English statements and quantified statements
- Consider the following:
  - $P(x) : x$ came to the party
  - $S(x) : x$ was sick
  - The statement "Everyone was not sick" has the same meaning as $\forall x \neg S(x)$ because the two statements have the same truth value.

## 1.8 De Morgan's law for quantified statements
**Learning Objectives**:
- Simplify universally and existentially quantified statements using De Morgan's law.
- Use De Morgan's law for quantified statements to prove logical equivalence.
- Determine the negation of a quantified statement by applying De Morgan's law.
- Apply De Morgan's law for quantified statements to English statements.

## De Morgan's law for quantified statements
- The negation operation can be applied to a quantified statement such as $\neg \forall x(F(x))$.
  - If "$F(x) : x$ can fly" then the statement $\neg \forall xF(x)$ is equivalent to "Not every bird can fly" which is also logically equivalent to "There exists a bird that cannot fly" or $\exists x \neg F(x)$.
- Note that **logical equivalence for quantified statements** means that the statements have the same truth value for any sets used as the domains of the variables and any predicates defined on those domains.
- De Morgan's laws for quantified statements are:
  1. $\neg \forall xP(x) \equiv \exists x \neg P(x)$
  2. $\neg \exists xP(x) \equiv \forall x \neg P(x)$

## 1.9 Nested Quantifiers
**Learning Objectives**:
- Identify the free and bound variables in a logical expression with nested quantifiers.
- Determine if a logical expression with nested quantifiers is a proposition.
- Evaluate the truth value of logical expressions with nested quantifiers.
- Apply De Morgan's law to statements with nested quantifiers.
---

- If a predicate has more than one variable, each variable must be bound by a separate quantifier.
- A logical expression with more than one quantifier that binds different variables in the same predicate has **nested quantifiers**.

| Quantifiers | Bound Variables |
|---|---|
| $\forall x \exists y p(x,y)$ | $x$ and $y$ are both bound |
| $\forall x P(x,y)$ | $x$ is bound and $y$ is free |
| $\exists y \exists z T(x,y,x)$ | $y$ and $z$ are bound, $x$ is free |

### Nested quantifiers of the same type
- Consider the following:
  - $M(x,y) : x$ sent an email to $y$
  - The proposition $\forall x \forall y M(x,y)$ states that everyone sent an email to everyone.
    - The universal quantifiers include the case that $ x = y$ which means that if $\forall x \forall y M(x,y)$ is true, then everyone sent an email to themselves.
  - The proposition $\exists x \exists y M(x,y)$ states that there is a person who sent an email to someone.
    - $\exists x \exists y M(x,y)$ can be true even if there is a person who sent an email to themselves.

### Alternating nested quantifiers
- A quantified expression can contain both types of quantifiers as in: $\exists x \forall y M(x,y)$.
  - The quantifiers are applied from left to right.
  - The statement translates to English as There is a person who sent an email to everyone.
- In reasoning whether a quantified statement is true or false, it is useful to think of the statement as a *two-player game* in which two players compete to set the statement's truth value.
  - One of the players is the "existential player" and the other is the "universal player".

| Player | Action | Goal |
|---|---|---|
| Existential player | Selects values for existentially bound variables | Tries to make the expression true |
| Universal player | Selects values for universally bound variables | Tries to make the expression false |

- If the predicate is true after all the variables are set, then the quantified statement is true. If the predicate is false after all the variables are set, then the quantified statement is false.
- Consider the following:
  - $\forall x \exists y (x + y = 0)$
    - The universal player selects the value of $x$.
    - Regardless of the value the universal player selects for $x$, the existential player can select $y$ to be $-x$ which causes the sum $x + y$ to be 0.
    - Because the existential player can always succeed in causing the predicate to be true, the statement is true.
  - Switching the order of the quantifiers gives the following: $\exists x \forall y (x + y = 0)$.
    - Now the existential player goes first and selects a value for $x$.
    - Regardless of the value chosen for $x$, the universal player can select some value for $y$ that causes the predicate to be false.
      - For example, if $x$ is an integer, then $y = -x + 1$ is also an integer and $x + y = 1 \ne 0$.
    - Thus the universal player can always win and the statement is false.

### Nested quantifiers with more than two variables
- Logical expressions with nested quantifiers can have more than two variables.
  - $\forall x \forall y \exists z(x + y = z)$
  - The quantifiers are read from left to right so the logical expression above is the statement "For every $x$ and every $y$ there exists a $z$ such that $x + y = z$."
  - If the domain of all the variables is the integers, then the statement is true.
    - No matter what integers $x$ and $y$ are, the sum $x + y$ is also an integer.
  - Order is important in expressions with more than one quantifier.
    - Quantifiers of the same type that are next to each other in a logical expression can be switched to obtain a logically equivalent expression.
      - $\exists x \forall y \forall z P(x,y,z) \equiv \exists x \forall z \forall y P(x,y,z)$
      - $\exists x \exists y \forall z P(x,y,x) \equiv \exists y \exists x \forall z P(x,y,z)$

### De Morgan's law with nested quantifiers
- De Morgan's law can be applied to logical statements with more than one quantifier.
- Each time a negation operation moves past a quantifier, the quantifier changes to the other type.

| DeMorgans laws |
|---|
| $\neg \forall x \forall y P(x,y) \equiv \exists x \exists y \neg P(x,y)$ |
| $\neg \forall x \exists y P(x,y) \equiv \exists x \forall y \neg P(x,y)$ |
| $\neg \exists x \forall y P(x,y) \equiv \forall x \exists y \neg P(x,y)$ |
| $\neg \exists x \exists y P(x,y) \equiv \forall x \forall y \neg P(x,y)$ |

- Consider the following:
  - $\exists x \forall y L(x,y)$ reads as "There is a student who likes everyone in the school".
  - The negation statement is $\neg \exists x \forall y L(x,y)$ which reads as "There is no student who likes everyone in the school".
  - Applying De Morgan's law gives the equivalent statement $\forall x \exists y \neg L(x,y)$ which reads as "For every student, there is someone that they do not like".

## 1.10 More nested quantified statements
**Learning Objectives**:
- Translate an English statement with "everyone else" into a quantified logical expression.
- Translate an English statement with "exactly one" into a quantified logical expression.
- Evaluate the truth value of a complicated quantified statement given a table for the predicates over a finite domain.
---

### Using logic to express "everyone else"
- Consider a scenario where the domain is a group of people working on a project. The predicate is defined as: M(x,y) : x sent an email to y.
  - The statement $\forall x \forall y M(x,y)$ asserts that everyone sent a message to everyone including themselves.
  - How do you express that everyone sent an email to everyone else but not themselves?
    - The statement $\forall x \forall y (x \ne y \rightarrow M(x,y))$ asserts that everyone sent a message to everyone else but not themselves.

### Expressing uniqueness in quantified statements
- An existentially quantified statement evaluates to true even if there is more than one element in the domain that causes the predicate to evaluate to true.
  - If the predicate $L(x)$ is used to indicate whether or not $x$ came late to the meeting then the statement $\exists x L(x)$ is true if there are one, two, or more people who came late.
  - To express that exactly one person came late, we use the following statement: $\exists x(L(x) \land \forall y((x \ne y) \rightarrow \neg L(y)))$.

### Moving quantifiers in logical statements
- In some cases, it is possible to move quantifiers in an expression to obtain an equivalent expression.
- Suppose that $A$ is an expression that does not contain the variable $y$.
  - Then $A \land \forall yP(y, *) \equiv \forall y(A \land P(y, *))$ holds.
- The equivalence is an example of a rule in logic called a **null qualification** rule.
  - The * in the predicate $P(y, *)$ indicates that the predicate $p$ can depend on other variables, besides $y$.

## Video Lecture/Presentation Notes
### Short-circuiting
- Sometimes you don't need to calculate all parts of a compound proposition.
  - Example: $p \land (q \lor r \lor \neg t)$
    - If $p$ is false, then the entire proposition is false, regardless of the truth values of $q$, $r$, and $t$.
