# Cheatsheet

## **Syntax**  
  
## & Operator (Address Of)
### Usage
```c++
int i = 10;

cout << &i << endl; // 0x01234567
```  

### Professor notes:
> The '&' symbol can be used to retrieve the address of the variable that follows.
> new keyword -> heap
> only way to instantiate something on the heap is with the new keyword.
---
## * Operator (Pointer Declaration)
### Usage
```c++
int i = 10;
int* j;
j = &i;

cout << &i << endl; // 0x01234567
cout << j << endl; // 0x01234567
```  

### Notes:
> The * operator has two meanings dependent on syntax.  
> This usage is for variable type declarations.
---
## * Operator (Dereference)
### Usage
```c++
int i = 10;
int* j;
j = &i;

cout << &i << endl; // 0x01234567
cout << j << endl; // 0x01234567
cout << i << endl; // 10
cout << *j << endl; // 10
```  

### Notes:
> I tend to read things like *j as "value of the thing j is pointed at."
---
## * Operator (Dereference)
### Usage
```c++
int i = 10;
int* j;
j = &i;

cout << &i << endl; // 0x01234567
cout << j << endl; // 0x01234567
cout << i << endl; // 10
cout << *j << endl; // 10
```  

### Notes:
> I tend to read things like *j as "value of the thing j is pointed at."
---
## struct Operator (Structure)
### Usage
```c++
struct coordinates
{
    int x;
    int y;
};
coordinates myCoords;

myCoords.x = 35;
myCoords.y = 110;

cout << "myCoords.x = " << myCoords.x << endl;
cout << "myCoords.y = " << myCoords.y << endl;
```  

### Notes:
> N/A
---
## -> Operator (Dereferenced value of)
### Usage
```c++
struct coordinates
{
    int x;
    int y;
};
coordinates myCoords;
coordinates* ptrCoords;

ptrCoords = &myCoords;
myCoords.x = 35;
myCoords.y = 110;

cout << "myCoords.x = " << myCoords.x << endl; // myCoords.x = 35
cout << "myCoords.y = " << myCoords.y << endl; // myCoords.y = 110
cout << "ptrCoords->x = " << ptrCoords->x << endl; // ptrCoords->x = 35
cout << "ptrCoords->y = " << ptrCoords->y << endl; // ptrCoords->y = 110

myCoords->x = 7;
myCoords->y = 22;

cout << "myCoords.x = " << myCoords.x << endl; // myCoords.x = 7
cout << "myCoords.y = " << myCoords.y << endl; // myCoords.y = 22
cout << "ptrCoords->x = " << ptrCoords->x << endl; // ptrCoords->x = 7
cout << "ptrCoords->y = " << ptrCoords->y << endl; // ptrCoords->y = 22

```  

### Notes:
> The -> arrow, in my opinion, is basically dot notation for pointers.  
> Can be used for assignment and value.
---
