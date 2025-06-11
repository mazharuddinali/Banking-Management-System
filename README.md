# 💳 Bank Account Management System (C++)

This is a console-based **Bank Account Management System** built using **C++** that leverages **hashing** via `unordered_map` from the Standard Template Library (STL). It allows users to perform essential banking operations such as account creation, deposit, withdrawal, balance checking, and more.



## 🧠 Problem Description

The aim of this project is to design a **Bank Account Management System** using **hash tables** (via `unordered_map`) to manage accounts efficiently. Each account is associated with a unique account number as the key, and account details (name and balance) as the value.

---

## 🔧 Features

- Create a new account  
- Deposit money  
- Withdraw money  
- Check balance  
- Delete account  
- Change account holder name  
- View all accounts  

---

## 🧱 Data Structures Used

- `unordered_map<int, Account>`  
  - **Key:** Account Number (`int`)  
  - **Value:** Struct `Account` with:
    - `name` (`string`)
    - `balance` (`double`)

### ✅ Advantages of `unordered_map`:
- Constant time complexity **O(1)** for insertion, deletion, and search.
- Uses hashing for quick access.
- Dynamically resizes and manages memory efficiently.

---

## 💻 How to Compile and Run

1. Save the code in a file (e.g., `bank_system.cpp`)
2. Compile using g++:
   ```bash
   g++ bank_system.cpp -o bank_system
