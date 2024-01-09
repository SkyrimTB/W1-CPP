#Why is C++ called C++ and not ++C?
As we know there are many case with **"i++"** and **"++i"**, but they are kindly different. **"i++"** returns the current value first, then increments; **"++i"** increments i by 1 first, then returns the new value of i.

```
    #include<iostream>
    using namespace std;

    int main() {
        int x = 3, y, z;
        y = x++;
        z = ++x;
        cout << x << ", " << y << ", " << z;
        return 0;
    }
```

In this code, the output will be ```5, 3, 5```. As we can see, the value of **y** still remains 3. I guess this is the reason, **C++** extends **C** but is still a programming language like **Python** and **Java**. However, **++C** holds the different value actually, so it cannot define as a programming language.

```
Assume all programming languages holds value 1
We've know that C, Python are programming languages, then C = 1, Python = 1

    if C++ is a programming language:
        True  \\ the value is still 1

    if ++C is a programming language:
        False \\ Since the value of ++C is 2 not 1
```