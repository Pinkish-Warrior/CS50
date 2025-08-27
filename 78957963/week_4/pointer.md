
🚦 One-liner memory trick:
int *a = &a;

- int *a → a signpost🪧 pointing to a house🏡
- *a → enter the house🏡 to see the value 💎
- &a → find the house address📍

# Understanding `*` in C

The `*` symbol in C can be confusing for beginners because it has **different meanings depending on where it is used**.
This guide breaks it down with clear examples.

---

# Rule of Thumb

- If `*` is next to a type (e.g., `int* p;`), it means **“p is a pointer to int.”**
- If `*` is next to a variable (e.g., `*p;`), it means **“use the value stored at the pointer.”** (dereference)
- If `&` is used before a variable (e.g., `&p;`), it means **“get the memory address of p.”**

👉 A simple way to remember:

- `type*` → making a pointer
- `*var` → using the pointer
- `&var` → getting an address


