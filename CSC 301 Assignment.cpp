#include <iostream>
#include <cstring>
using namespace std;

// Question 2a to check if a number is prime or not
void checkPrime();
void checkPrime() {
    int num, i;
    bool isPrime = true;
    num = 13; // Test number

    if (num <= 1)
        isPrime = false;
    else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << num << " is a prime number.";
    else
        cout << num << " is not a prime number.";
}

// Question 2b to find the sum of elements in an array
void sumOfArray();
void sumOfArray() {
    int arr[] = {2, 5, 8};
    int sum = 0;

    for (int num : arr)
        sum += num;

    cout << "Sum of elements in array: " << sum << endl;
}

// Question 3a to use bubble sort to sort a list of elements
void bubbleSort();
void bubbleSort() {
    int arr[] = {15, 26, 42, 82, 35};
    int n = 5;

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Question 3b to find the sum and average of numbers
void sumAndAverage();
void sumAndAverage() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0, n = 10;

    for (int num : arr)
        sum += num;

    cout << "Sum = " << sum << "Average = " << (float)sum / n << endl;
}

// Question 4a to compute the length of a given string
void stringLength();
void stringLength() {
    string str = "Learn C Programming";
    cout << "Length of the string: " << str.length() << endl;
}

// Question 4b to find the position of a target value using linear search
void linearSearch();
void linearSearch() {
    int arr[] = {23, 60, 90, 50, 20, 56, 100, 10};
    int target = 50, index = -1, n = 8;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1)
        cout << "Target " << target << " found at index: " << index << endl;
    else
        cout << "Target not found.";
}

// Question 5a to add two numbers using pointers
void addUsingPointers();
void addUsingPointers() {
    int a = 5, b = 6, *p1 = &a, *p2 = &b;
    cout << "Sum = " << (*p1 + *p2) << endl;
}

// Question 5b to check whether a number is a palindrome or not
void checkPalindrome();
void checkPalindrome() {
    int num = 121, rev = 0, temp = num;

    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    if (rev == num)
        cout << num << " is a palindrome.";
    else
        cout << num << " is not a palindrome.";
}

// Structure to be used in Question 6a
struct Student {
    string name;
    int age, totalMarks;
};

// Question 6a to display student information
void studentStructure();
void studentStructure() {
    Student s[2] = {{"Alice", 20, 85}, {"Bob", 22, 90}};

    float avg = (s[0].totalMarks + s[1].totalMarks) / 2.0;
    cout << "Student 1: " << s[0].name << ", Age: " << s[0].age << ", Marks: " << s[0].totalMarks << endl;
    cout << "Student 2: " << s[1].name << ", Age: " << s[1].age << ", Marks: " << s[1].totalMarks << endl;
    cout << "Average Marks: " << avg << endl;
}

// Question 6b to check number type, whether positive, negative, even or odd
void checkNumberType();
void checkNumberType() {
    int num = 12;

    if (num == 0)
        cout << "Zero\n";
    else if (num > 0) {
        if (num % 2 == 0)
            cout << "Positive Even\n";
        else
            cout << "Positive Odd\n";
    } else {
        if (num % 2 == 0)
            cout << "Negative Even\n";
        else
            cout << "Negative Odd\n";
    }
}

int factorialHelper(int n) {
    if (n <= 1) return 1;
    return n * factorialHelper(n - 1);
}

// Question 7a to calculate the factorial of a number
void factorial();
void factorial() {
    int num = 5;
    cout << "Factorial of " << num << " is " << factorialHelper(num) << endl;
}

void printDetails();
void printDetails() {
    string name = "Alexandra Abramov";
    string dob = "July 14, 1975";
    int mobile = 99-9999999999;
    cout << "Name: " << name << "DOB: " << dob << "Mobile: " << mobile << endl;
}

// Main Function
int main() {
    checkPrime();
    sumOfArray();
    bubbleSort();
    sumAndAverage();
    stringLength();
    linearSearch();
    addUsingPointers();
    checkPalindrome();
    studentStructure();
    checkNumberType();
    factorial();
    printDetails();

    return 0;
}
