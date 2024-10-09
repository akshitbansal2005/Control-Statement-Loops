# Control-Statement-Loops
### Experiment_6: Loops

---

#### **AIM**  
To explore the use of `for`, `while`, and `do-while` loops in C++.

---

#### **Software Used**  
- VS Code

---

### **Theory**

Loops in C++ are control flow structures that allow repeated execution of a block of code. They automate repetitive tasks, making it easier to iterate over data and implement algorithms efficiently.

#### **Types of Loops:**

1. **For Loop:**  
   - Used when the number of iterations is known beforehand.
   - **Syntax:**
     ```cpp
     for (initialization; condition; increment/decrement) {
         // loop body
     }
     ```
   - **Example:**
     ```cpp
     #include <iostream>

     using namespace std;

     int main() {
         for (int i = 1; i <= 5; i++) {
             cout << "Iteration " << i << endl;
         }
         return 0;
     }
     ```

2. **While Loop:**  
   - Used when the number of iterations is unknown, and the loop continues as long as a condition is true.
   - **Syntax:**
     ```cpp
     while (condition) {
         // loop body
     }
     ```
   - **Example:**
     ```cpp
     #include <iostream>

     using namespace std;

     int main() {
         int number = 1;
         while (number <= 5) {
             cout << "Number: " << number << endl;
             number++;
         }
         return 0;
     }
     ```

3. **Do-While Loop:**  
   - Executes the loop body at least once, then checks the condition. Useful when the loop must run at least once, regardless of the initial condition.
   - **Syntax:**
     ```cpp
     do {
         // loop body
     } while (condition);
     ```
   - **Example:**
     ```cpp
     #include <iostream>

     using namespace std;

     int main() {
         int number = 1;
         do {
             cout << "Number: " << number << endl;
             number++;
         } while (number <= 5);
         return 0;
     }
     ```

---

### **Algorithms**

1. **Inverse Right Triangle Pattern:**
   - **Objective:** Print an inverse right triangle using asterisks or numbers.
   
   **Algorithm:**
   - **Input:**  
     Read the desired height of the triangle (`n`) from the user.
   
   - **Initialization:**  
     Set a counter variable `row` to `n`.
   
   - **Outer Loop:**  
     Repeat while `row` is greater than or equal to 1.
   
   - **Inner Loop:**  
     Repeat while `col` is less than or equal to `row`:
     - Print the desired character (e.g., `*` or `col`) depending on the desired pattern.
     - Increment `col` by 1.
   
   - **Newline:**  
     Print a newline character to move to the next row.
   
   - **Decrement:**  
     Decrement `row` by 1.

   - **End.**

   **Code Example:**
   ```cpp
   #include <iostream>

   using namespace std;

   int main() {
       int n;
       cout << "Enter the height of the triangle: ";
       cin >> n;

       for (int row = n; row >= 1; row--) {
           for (int col = 1; col <= row; col++) {
               cout << "* ";
           }
           cout << endl;
       }
       return 0;
   }
   ```

2. **Reverse PRN (Roll Number):**
   - **Objective:** Reverse a given integer (PRN) using loops.
   
   **Algorithm:**
   - **Input:**  
     Read an integer PRN from the user.
   
   - **Initialization:**  
     Create a variable `num` to store the extracted digit.
   
   - **Reversing Loop:**  
     While `PRN` is greater than 0:
     - Extract the last digit of `PRN` using `num = PRN % 10`.
     - Print the extracted digit `num`.
     - Remove the last digit from `PRN` using `PRN = PRN / 10`.
   
   - **Output:**  
     The reversed number is printed to the console.

   **Code Example:**
   ```cpp
   #include <iostream>

   using namespace std;

   int main() {
       int PRN, num;
       cout << "Enter a number to reverse: ";
       cin >> PRN;

       cout << "Reversed number: ";
       while (PRN > 0) {
           num = PRN % 10;
           cout << num;
           PRN = PRN / 10;
       }
       cout << endl;

       return 0;
   }
   ```

---

### **Conclusion**  
From this experiment, we learned and understood the use of `for`, `while`, and `do-while` loops in C++ to perform repeated operations. We also applied loops to create patterns and reverse a number. 

---
