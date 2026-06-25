# 📚 Unordered Set Projects in C++

This branch contains mini projects built while learning the **Unordered Set** data structure in C++ using the Standard Template Library (STL).

---

## 🚀 Projects

### ✅ Parking Lot Manager

A simple parking lot management system implemented using `std::unordered_set`.

Unlike a `set`, an `unordered_set` does not store elements in sorted order. It is designed for very fast insertion, deletion, and searching.

#### Features
- Enter a car into the parking lot
- Remove a car from the parking lot
- Search for a parked car
- Display all parked cars
- Count the total number of parked cars
- Prevent duplicate vehicle entries

#### Concepts Used
- `insert()`
- `find()`
- `erase()`
- `size()`
- `empty()`
- Range-based for loops
- Fast lookups
- Unique element storage

---

## 📖 Topics Learned

- Unordered Set fundamentals
- Hash-based data structures
- Fast searching
- Fast insertion and deletion
- Difference between `set` and `unordered_set`
- Managing unique data efficiently

---

## 🛠 Technologies

- C++
- STL (`<unordered_set>`)
- VS Code

---

## Example

### Cars Entering

```text
KL07AB1234
KL08XY4567
KL07AB1234
KL09CD7890
```

### Stored in Unordered Set

```text
KL07AB1234
KL08XY4567
KL09CD7890
```

Duplicate entries are automatically ignored.

### Search Example

Input:

```text
KL08XY4567
```

Output:

```text
Found
```

---

## 🎯 Purpose

This project is part of my journey to master **C++**, **STL**, and **Data Structures & Algorithms** through practical implementations.

The goal is to understand how hash-based containers work and when they are preferred over ordered containers.

---

## 🌱 Future Improvements

- Online User Tracking System
- Website Visitor Counter
- Blacklisted Phone Number Manager
- Unique Username Registry
- Fast Membership Verification System

---

## Concepts Demonstrated

| Operation | Function |
|------------|-----------|
| Add Element | `insert()` |
| Search Element | `find()` |
| Remove Element | `erase()` |
| Count Elements | `size()` |
| Check Empty | `empty()` |
| Traverse | Range-based for loop |

---

## Difference Between Set and Unordered Set

| Feature | Set | Unordered Set |
|----------|------|---------------|
| Duplicates Allowed | ❌ No | ❌ No |
| Sorted | ✅ Yes | ❌ No |
| Search | O(log n) | O(1) Average |
| Insert | O(log n) | O(1) Average |
| Erase | O(log n) | O(1) Average |

---

⭐ Learning DSA by building projects.
