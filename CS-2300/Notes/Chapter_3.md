# Chapter 3: Sets

## Table of Contents

## 3.1 Sets and subsets
**Learning Objectives**
- Use terminology and notation involving sets and subsets.
- Identify relationships between sets and elements of sets.
- Recognize common mathematical sets and incorporate their notation in defining sets.
- Create and interpret Venn diagrams.
- Recognize and use roster notation and set builder notation to define sets.
---

- A **set** is a collection of objects
  - Objects may be of various types, such as titles of books, names of bridges, or rational numbers.
  - Each object in a set is called an **element**.
- A set is defined by indicating which elements beling to it.
  - If a set is small enough the easiest way to describe it is by listing every element.
  - The **roster notation** definitaion of a set is a list of the elements enclosed with curly braces with the individual elements seperated by commas.
- The order in which the elements are listed is unimportant.
- Repeating an element does not change the set.

### More notation related to sets
- The symbol $\in$ indicates that an element is in the set (e.g. $2 \in A$).
- The symbol $\notin$ indicates that an element is not in a the set (e.g. $Watermelon \notin A$)
- Typically, capital letters are used as variables denoting sets, and lowercase letters are used for elements in the set.
  - Variables can be used to indicate an unspecified member of a set. For example, if $a \in A$, then $a$ is equal to $2, 4, 6, or 10$.
- The set with no elements is called the **empty set** and is denoted with the symbol $\emptyset$.
  - The empty set is sometimes referred to as the **null set** and is can also be denoted as **{}**.
  - Because an empty set has no elements, for any elements $a$, $a \notin \emptyset$ is true.
- A **finite set** is a set that is either empty or whose elements can be numbered $1$ through $n$ for some positive integer.
  - The **cardinalty** of a finite set $A$, denoted by $|A|$, is the number of distinct elements in $A$.
- An **infinite set** is a set that is not finite.
- When a set contains many elements, providing an exhaustive list of elements may not be practical. In this case, ellipses ($...$) are used to denote a long (possibly infinite) sequence of numbers.
  - The sequence's pattern should be clear so that the reader can infer which elements are missing.
  - Example
    - $B = {1,3,5,...,99}$
    - $C = {3,6,9,12,...}$
- Two sets are equal if they have exactly the same elements.

- Some sets of numbers are used so frequently in mathematics that they have their own symbols. Some of the most common examples include:

| Set | Symbol | Examples of Elements |
|---|---|---|
| The set of **natural numbers** is the set of all integers that are greater or equal to $0$. Note: Many sources exclude $0$ from the set of natural numbers. However, in discrete mathematics, $0$ is often included. | $\N$ | $0, 1, 2, 3,...$ |
| The set of all **integers** is represented my the symbol $\Z$ | $\Z$ | $..., -2, -1, 0, 1, 2,...$ |
| The set of **rational numbers** is the set of real numbers that can be expressed as $\frac{a}{b}$, where $a$ and $b$ are integers and $b \ne 0$ | $\Q$ | $0, \frac{1}{2}, 5.23, - \frac{5}{3}, 7$ |
| The set of **irrational numbers** is the set of real numbers that cannot be expressed as $\frac{a}{b}$, where $a$ and $b$ are integers and $b \ne 0$ | $\P$ | $\pi, \sqrt{2}, \frac{\sqrt{5}}{3}, - \frac{4}{\sqrt{6}}$ |
| The set of **real numbers** is represent by the symbol $\R$. | $\R$ | $0, \frac{1}{2}, 5.23, - \frac{5}{3}, \pi, \sqrt{2}$ |

- The superscript $+$ indicates the positive elements of a particular set
  - For example, $\R^+$ is the set of all positive real numbers
- The superscrip $-$ is used to indicate the negative elements of a particular set. 
  - For example, the set $\R^-$ s the set of all negative real numbers

- In **set builder notation**, a set is defined by specifying that the set includes all elements in a larger set that also satisfy certain conditions.
  - The notation looks like: $A = \{x \in S : P(x)\}$
  - $S$ is the larger set from which the elements $A$ are taken.

- Example:
  - $C = \{x \in \Z : 0 < x < 100 \text{ and } x \text{ is prime}\}$ reads as all prime integers between $0$ and $100$.

- The **universal set**, usually denoted by the variable $\U$, is a set that contains all elements mentioned in a particular context.
- Sets are often represented pictorially with **Venn diagrams**.
  - A rectangle denotes the universal set U, and oval shapes denote sets within $u$. Venn diagrams can also indicate which specific elements are inside and outside the set
- If evey element in $A$ is also an element of $B$, then $A$ is a **subset** of $B$, denoted as $ A \subseteq B$.
- If there is an element of $A$ that is not an element of $B$, then $A$ is not a subset of $B$, denoted as $ A \not\subseteq B$.
  - Two sets are equal if and only if each is a subset of the other:
    - $A = B$ if and only if $A \subseteq B$ and $B \subseteq A$
- If $A \subseteq B$ and there is an element of $B$ that in not an element of $A$ (that is, $A \ne B$), then $A$ is a **proper subset** of $B$ denoted as $A \subset B$

## 3.2 Sets of sets
**Learning objectives**
- Differentiate between elements and subsets of a set of sets.
- Find the cardinality of a set of sets.
- Write out the power set of a set.
- Identify properties of a power set.
---

- A set can contain elements that are sets themselves.
  - $A = \{ \{1, 2, 3 \}, \emptyset, \{1\}\}$
- The **power set** of a set $A$, denoted $P(A)$, is the set of all subsets of $A$.
  - For example, if $A = \{1, 2, 3 \}$ then $P(A) = \{\emptyset, \{1\},\{2\},\{3\},\{1, 2\},\{2,3\},\{1,2,3\}\}$