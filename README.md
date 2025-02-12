# Maheshmatii Departmental Store Management System

## 📌 Project Overview

The **Maheshmatii Departmental Store Management System** is a simple C-based console application designed to efficiently manage products in a departmental store. It allows users to **add products, view available inventory, and process sales transactions**. The program provides a seamless interface for store owners to manage stock effectively.

---

## 🚀 Features

- 🏷️ **Add New Products**: Store managers can add new products by entering their details.
- 📋 **Display Product List**: View all available products with their respective IDs, names, prices, and quantities.
- 💰 **Process Sales**: Customers can purchase products, and the system automatically updates stock levels.
- 🛑 **Error Handling**: Prevents sales of unavailable products and displays appropriate error messages.

---

## 🏗️ Project Structure

```
📂 Maheshmatii_Store_Management
├── 📄 main.c       # Main program file
├── 📄 README.md    # Project documentation
└── 📄 LICENSE      # License file
```

---

## 📜 How to Use

### 1️⃣ Compile the Program

Use a C compiler (such as GCC) to compile the program:

```sh
gcc main.c -o store_management
```

### 2️⃣ Run the Program

Execute the compiled file:

```sh
./store_management
```

### 3️⃣ Interact with the Menu

After running the program, you will see the following menu:

```
========== Maheshmatii Departmental Store ==========
1. Add Product
2. Display Products
3. Make Sale
4. Exit
```

Choose an option by entering the corresponding number.

---

## 📂 Code Explanation

### 📝 Structure Definition

```c
struct Product {
    int id;
    char name[50];
    float price;
    int quantity;
};
```

Defines a `Product` structure to store product details.

### 📌 Functionality

- **displayMenu()**: Displays the available options.
- **addProduct()**: Adds a new product to the inventory.
- **displayProducts()**: Lists all available products.
- **makeSale()**: Processes a sale and updates stock.

---

## 🔧 Future Enhancements

- 📊 **Sales Reports**: Generate daily, weekly, or monthly sales reports.
- 🔎 **Product Search**: Allow users to search for products by name or ID.
- 🌐 **Graphical User Interface (GUI)**: Implement a user-friendly interface for better usability.

---

## 👨‍💻 Author

- **Your Name**  
- 📧 Email: [ykhuranasahil099@gmail.com](mailto:khuranasahil099@gmail.com)  
- 🔗 GitHub: [sahilkhurana01](https://github.com/sahilkhurana01)

---

### ⭐ If you found this project helpful, don't forget to give it a star on GitHub! ⭐
