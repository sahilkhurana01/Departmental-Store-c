#include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 // Structure to represent a product
 struct Product {
    int id;
    char name[50];
    float price;
    int quantity;
 };

 // Function prototypes
 void displayMenu();
 void addProduct(struct Product products[], int *productCount);
 void displayProducts(struct Product products[], int productCount);
 void makeSale(struct Product products[], int productCount);
 
 int main() {
    struct Product products[100];  // Assuming a maximum of 100 products
    int productCount = 0;
    int choice;

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addProduct(products, &productCount);
                break;
            case 2:
                displayProducts(products, productCount);
                break;
            case 3:
                makeSale(products, productCount);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
 }

 // Function to display the main menu
 void displayMenu() {

    printf("\n========== Maheshmatii Departmental Store ==========\n");
    printf("1. Add Product\n");
    printf("2. Display Products\n");
    printf("3. Make Sale\n");
    printf("4. Exit\n");
 }

  // Function to add a new product
 void addProduct(struct Product products[], int *productCount) {
    struct Product newProduct;

    printf("\nEnter product details:\n");
    printf("Product ID: ");
    scanf("%d", &newProduct.id);
    printf("Product Name: ");
    scanf("%s", newProduct.name);
    printf("Price: ");
    scanf("%f", &newProduct.price);
    printf("Quantity: ");
    scanf("%d", &newProduct.quantity);

    products[*productCount] = newProduct;
    (*productCount)++;

    printf("Product added successfully.\n");
 }

  // Function to display all products
 void displayProducts(struct Product products[], int productCount) {
    if (productCount == 0) {
        printf("No products available.\n");
    } else {
        printf("\n========== Product List ==========\n");
        printf("ID\tName\t\tPrice\t\tQuantity\n");

        for (int i = 0; i < productCount; i++) {
            printf("%d\t%s\t%f\t%d\n", products[i].id, products[i].name,                                                       
 products[i].price, products[i].quantity);
        }
    }
 }

 // Function to make a sale
 void makeSale(struct Product products[], int productCount) {
    int productId, quantity;

    if (productCount == 0) {
        printf("No products available for sale.\n");
        return;
    }

    displayProducts(products, productCount);

    printf("\nEnter product ID for sale: ");
    scanf("%d", &productId);

    // Find the product in the array
    int index = -1;

    for (int i = 0; i < productCount; i++) {
        if (products[i].id == productId) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Product not found.\n");
        return;
    }

    printf("Enter quantity for sale: ");
    scanf("%d", &quantity);

    if (quantity > products[index].quantity) {
        printf("Insufficient stock for the requested quantity.\n");
    } else {
        // Update product quantity after sale
        products[index].quantity -= quantity;
        printf("Sale successful. Total cost: %f\n", products[index].price * quantity);
    }
 }

