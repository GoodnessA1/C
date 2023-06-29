import unittest
from hello import *

class TestClass(unittest.TestCase):
    def test_hello(self):
        self.assertEqual(hello_world(), 'Hello world')

unittest.main()
