#!/bin/python
# This is a unittest

import unittest
import calc

class test(unittest.TestCase):
    def test_add(self):
        calc_test = calc.calc(3, 4)
        self.assertEqual(calc_test.add(), 7)

    def test_sub(self):
        calc_test = calc.calc(4, 5)
        self.assertEqual(calc_test.sub(), -1)

    def test_div(self):
        calc_test = calc.calc(20, 4)
        self.assertEqual(calc_test.div(), 5)

    def test_mul(self):
        calc_test = calc.calc(12, 8.5)
        self.assertEqual(calc_test.mul(), 102)
