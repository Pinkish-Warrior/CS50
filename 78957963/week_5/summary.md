# Data Structure:

1. Arrays:

- ❌ Insertion is bad - lots of shifiting to fit and element in the middle.
- ❌ Deletion is bad - lots of shifiting after removing and element.
- ✅ Lookup is great - random access, constant time.
- ✅ Relativily easy to sort.
- ✅ Relativily small size-wise.
- ❌ Stuck with a fixed size, no flexibility.

2. Linked List:

- ✅ Insertion is easy - just tack onto the front.
- ✅ Deletion is easy - once you find the element.
- ❌ Lookup is bad - have to rely on linear search.
- ❌ Relativily difficult to sort unless willing to compromasie on super-fast insertion and insted sort as you construct.
- ✅ Relativily small size-wise(not as small as arrays)

3. Hash Tables:

- ✅ Insertion is wo steps process - hash then add.
- ✅ Deletion is easy - once you find the element.
- ❌ Lookup is on average better than with linked lists because you have the benefit of real-world constant factor.
- ❌ Not an ideal data structure if sorting is the goal - just use an array.
- ✅ Can run the gamut of size.

4. Tries:

- ❌ Insertation is complex - a lot of dynamic memory allocation, but gets easier as you go
- ✅ Deletion is easy - just free a node
- ✅ Lookup is fast - not quite as fast as anb array, but almost
- ✅ Already sorted - sort as you build in almost all situations
- ❌ Rapidly became huge, even with very little data present, not great if space is at premium


## Rule of Thumb:
Arrays → Best when you need fast random access and predictable memory use, but not frequent insertions/deletions.
Linked Lists → Best when you expect frequent insertions/deletions, but not heavy lookups.
Hash Tables → Best when you want fast average-case lookups/insertions without caring about order.
Tries → Best when handling prefix-heavy data (like dictionaries, autocomplete, IP routing) where lookup speed and built-in ordering matter more than memory efficiency.


* Arrays → "Fast Look, Slow Move"
    (Great lookup, bad inserts/deletes)
* Linked Lists → "Easy Change, Hard Find"
    (Good inserts/deletes, poor lookups)
* Hash Tables → "Keys are King"
    (Super fast average lookups/inserts, unordered, no sorting)
* Tries → "Prefix Power, Memory Monster"
    (Excellent for prefix search & sorted data, but very memory-hungry)
___

PS: No single data structure is "best" — it depends entirely on your use case. Arrays shine in random access and memory efficiency, linked lists excel in flexibility with inserts/deletes, hash tables dominate for key-based access, and tries provide ordered, prefix-friendly lookups at the cost of memory. A good programmer doesn’t force one structure everywhere but chooses the right tool for the job.


https://github.com/Pinkish-Warrior/CS50.git
