# 📚 Multiset Projects in C++

This branch contains mini projects built while learning the **Multiset** data structure in C++ using the Standard Template Library (STL).

---

## 🚀 Projects

### ✅ Student Attendance System

A simple attendance management system implemented using `std::multiset`.

Unlike a `set`, a `multiset` allows duplicate values, making it useful for recording multiple attendance entries for the same student.

#### Features
- Mark attendance
- Count attendance of a student
- Show all attendance entries
- Store duplicate roll numbers

#### Concepts Used
- `insert()`
- `count()`
- `size()`
- `empty()`
- Range-based for loops
- Frequency counting
- Duplicate element storage

---

## 📖 Topics Learned

- Multiset fundamentals
- Difference between `set` and `multiset`
- Storing duplicate values
- Counting occurrences using `count()`
- Traversing a multiset
- Frequency-based applications

---

## 🛠 Technologies

- C++
- STL (`<set>`)
- VS Code

---

## Example

### Attendance Entries

```text
101
105
101
102
101
```

### Stored in Multiset

```text
101
101
101
102
105
```

### Attendance Count

Input:

```text
101
```

Output:

```text
3
```

---

## 🎯 Purpose

This project is part of my journey to master **C++**, **STL**, and **Data Structures & Algorithms** through practical implementations.

The goal is to understand when duplicate data is useful and how frequency-based operations can be performed efficiently.

---

## Concepts Demonstrated

| Operation | Function |
|------------|-----------|
| Add Entry | `insert()` |
| Count Frequency | `count()` |
| Count Total Entries | `size()` |
| Check Empty | `empty()` |
| Traverse | Range-based for loop |

---

## Difference Between Set and Multiset

| Feature | Set | Multiset |
|----------|------|-----------|
| Duplicates Allowed | ❌ No | ✅ Yes |
| Sorted | ✅ Yes | ✅ Yes |
| Search | O(log n) | O(log n) |
| Insert | O(log n) | O(log n) |

---

⭐ Learning DSA by building projects.
