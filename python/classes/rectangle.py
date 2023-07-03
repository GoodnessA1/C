#!/bin/python

class Rectangle:
    def __init__(self, length, breadth):
        """
        __init__ - Initializes rectangle
        @length: length of rectangle
        @breadth: breadth of rectangle
        """
        if length <= 0 | breadth <= 0:
            raise ValueError("A positive number is required")
        else:
            
            if length > breadth:
                self.length = length
                self.breadth = breadth
            else:
                self.length = breadth
                self.breadth = length

    def calculate_perimeter(self):
        perimeter = 2*(self.length + self.breadth)
        return perimeter

    def calculate_area(self):
        area = self.length * self.breadth
        return area

    def calculate_diagonal(self):
        l = self.length**2
        b = self.breadth**2
        d = l + b

        diagonal = d ** 0.5
        return diagonal
