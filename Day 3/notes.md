
---

## 🚀 **Day 3 - Math, Floats & Increments in C++**

---

### 🧠 **Integer Math (No Decimals)**

```cpp
int x = 5, y = 2;
cout << x / y;  // Output: 2
```

* 🔹 Only gives **whole number**.
* 🔸 `5 / 2` = **2** (decimal part is ignored).

---

### 🧪 **Float for Decimal Accuracy**

```cpp
float a = 5, b = 2;
cout << a / b;  // Output: 2.5
```

* ✅ Use `float` (or `double`) when you need decimal results.
* Useful in real-world math, percentages, money, etc.

---

### 🔁 **Increment / Decrement Basics**

```cpp
int m = 4;
m = m + 1;
m += 1;
m++;
```

* All do the same thing: **increase `m` by 1**
* 👇 Same for decreasing:

```cpp
m--;
```

---

### ⚔️ **Pre vs Post (The Real Difference)**

| Type           | Code  | What It Does            |
| -------------- | ----- | ----------------------- |
| Post (++ / --) | `m++` | Use `m`, then change it |
| Pre (++ / --)  | `++m` | Change `m`, then use it |

```cpp
int m = 4;
cout << m++;  // prints 4, then m becomes 5
cout << ++m;  // m becomes 6, then prints 6
```

🧨 Use pre- when you want the **updated value immediately**, post- when the **old value needs to be used first**.

---


