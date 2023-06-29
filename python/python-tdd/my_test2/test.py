import unittest
from mysum import *

class TestClass(unittest.TestCase):
    def test_sum(self):
        data = [2, 3, 4, 5, 6]
        result = add(data)
        self.assertEqual(result, 20)

unittest.main()
