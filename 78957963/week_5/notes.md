# Difference Between `person` (Family Tree) and `sllnode` (Singly Linked List)

In C, both of these structures look similar at first glance because they use pointers, but they represent very **different data structures**.

---

## 1. The `person` struct (Family Tree)

```c
typedef struct person
{
    struct person *parents[2];  // array of 2 pointers (mom & dad)
    char alleles[2];            // the two blood type alleles
} person;
```

### 🔹 What it models:
This struct is used for a **family tree**.
Each `person` has **two parents**, so it stores an array of **two pointers**.

- `parents[0]` → one parent
- `parents[1]` → the other parent

The `alleles` (`A`, `B`, or `O`) are genetic info inherited from parents.

### 👉 Shape of the data (Tree):
```
       Child
     /      \
 Parent1   Parent2
   /  \      /  \
 GP1  GP2  GP3  GP4
```

This creates a **tree structure** (branching upwards to parents).

---

## 2. The `sllnode` struct (Singly Linked List)

```c
typedef struct sllist
{
    VALUE val;             // some data (like int, char, etc.)
    struct sllist* next;   // pointer to the *next* node
} sllnode;
```

### 🔹 What it models:
This struct is used for a **singly linked list**.
Each node stores:

1. A value (the actual data).
2. A pointer to the **next node** in the sequence.

### 👉 Shape of the data (Chain):
```
[ val | next ] -> [ val | next ] -> [ val | next ] -> NULL
```

This creates a **linear chain** of nodes.

---

## 🚨 Key Differences

| Feature                  | `person` (Family Tree)                         | `sllnode` (Singly Linked List) |
|--------------------------|------------------------------------------------|--------------------------------|
| **Connections**          | Two parents → branching structure (tree)       | One `next` → linear structure (list) |
| **Use Case**             | Simulating genetics, ancestry, family trees    | Storing ordered data, queues, stacks |
| **Pointers**             | Array of **two pointers**                      | Single pointer to **next node** |
| **Shape of Data**        | Tree (hierarchical, multiple parents/children) | Chain (sequential nodes) |
| **Example Analogy**      | Your family tree (you → parents → grandparents) | A train with carriages linked one after another |

---

## ✅ Takeaway

- `person` → **branching** → a tree of family members.
- `sllnode` → **chaining** → a linked list of nodes.

### ✅ Searching through an linked list:

```bash
  bool find (sllnode* head, VALUE val);
```
// returning a true eo false value in accordance to the head an its value
