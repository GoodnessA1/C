#!/bin/python

from test import test
import calc

print("WELCOME TO GOODNESS CALCULATOR BUILT IN PYTHON\n")
def func():
    x = int(input("Enter a number: "))
    y = int(input("Enter the second number: "))
    z = input("Enter '+' for addition, '-' for subtraction\n'*' for multiplication and '/' for division: ")

    cal = calc.calc(x, y)
    if z == "+":
        a = cal.add()
        print("The sum is: " + str(a))

    elif z == "-":
        print("The difference is: " + str(cal.sub()));

    elif z == "*":
        print("The product is: " + str(cal.mul()))

    elif z == "/":
        print("The dividend is: " + str(cal.div()))

    else:
        print("Invalid function\n")
        

func()
while True:
    n = input("Do you still want to perform another function(Y/N): ")
    if n == "Y":
        func()
    elif n == "N":
        break
