Perfect 🚀 — here’s your **one-page C linked list naming cheatsheet**. Keep this handy while coding, and the confusion should melt away.

---

# 📘 C Linked List Naming Cheatsheet

### 1. Define a Node

```c
typedef struct sllist {
    int val;                  // data
    struct sllist *next;      // pointer to next node
} sllnode;
```

* `struct sllist` → **struct tag** (blueprint name)
* `sllnode` → **typedef alias** (nickname you actually use)
* `next` → **field name** (pointer variable inside struct)

---

### 2. Declare Variables

```c
sllnode *head = NULL;   // head pointer (empty list)
sllnode *tail = NULL;   // tail pointer
```

👉 Always put `*` next to the variable, not the type.

---

### 3. Create a Node

```c
sllnode *n = malloc(sizeof(sllnode));
n->val = 10;
n->next = NULL;
```

---

### 4. Link Nodes

```c
head = n;
sllnode *m = malloc(sizeof(sllnode));
m->val = 20;
m->next = NULL;

n->next = m;   // connect first node to second
```

---

### 5. Visualize

```
head → [10 | next] → [20 | next] → NULL
```

---

### 🔑 Rules to Remember

1. **Always typedef your struct** → makes code shorter.
2. **Think in aliases** (`sllnode`), not in `struct sllist`.
3. **Star belongs to the variable** (`sllnode *head`).
4. **Node = \[data | pointer]** → just a box with a value and a link.

---

👉 With this, every time you see:

```c
sllnode *x;
```

Think: **“`x` is a pointer to a box that holds a value and a link to the next box.”**


### 6. Operations

- 1. Crete a linked list when it doesent already exist.

    sllnode* create(VALUE val) vs sllnode *create(VALUE val)
    steps involved:
    a. Dynamically allocate space for a new sllnode.
    b. Check to make sure we didn't run out of memory
    c. Initialize the node's val field
    b. Initialize the node's next field
    e. return a pointer to the newly created sllnode

    ```bash
        *create(sslnode *head, VALUE val);
        sllnode *new = create(6);
    ```

- 2. Search through a linked list to find an element.

    ```bash
        *find(sllnode *head, VALUE val);
        bool exists = find(head, 6);
    ```

- 3. Insert a new node into the linked list.
    ```bash
        *insert(sllnode *head, VALUE val);
        head = insert(head, 10);  // or any actual VALUE
    ```

- 4. Delete a single element froma linked list.
- 5. Delete a entire linked list.

