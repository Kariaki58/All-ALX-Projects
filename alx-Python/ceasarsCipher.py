import unittest
import string



def encrypt(message, shiffted_by):
    abc = string.ascii_letters + string.punctuation + string.digits + " "
    encrypted_message = "".join([abc[abc.find(char) + shiffted_by] if len(abc) > (abc.find(char) + shiffted_by) else abc[shiffted_by - (len(abc) - abc.find(char))] for idx, char in enumerate(message)])
    return encrypted_message

class TestEncryption(unittest.TestCase):
    # tests go here
    def setUp(self):
        self.my_message = "banna "
        self.shiffted_by = 9
        self.abc = string.ascii_letters + string.punctuation + string.digits + " "

    def test_inputExists(self):
        self.assertIsNotNone(self.my_message)
        self.assertIsNotNone(self.shiffted_by)
    
    def test_inputType(self):
        self.assertIsInstance(self.my_message, str)
        self.assertIsInstance(self.shiffted_by, int)
    
    def test_functReturnSomething(self):
        self.assertIsNotNone(encrypt(self.my_message, self.shiffted_by))
    
    def test_non_negative(self):
        self.assertTrue(self.shiffted_by >= 0)
    def test_lenIO(self):
        self.assertEqual(len(self.my_message), len(encrypt(self.my_message, self.shiffted_by)))
    
    def test_differentIO(self):
        self.assertNotIn(self.my_message, encrypt(self.my_message, self.shiffted_by))
    
    def shiffted_by_below_range(self):
        self.assertTrue(self.shiffted_by < len(self.abc))
    def test_outputType(self):
        self.assertIsInstance(encrypt(self.my_message, self.shiffted_by), str)
    
    def test_shiftedCipher(self):
        encrypted_message = "".join([self.abc[self.abc.find(char) + self.shiffted_by] if len(self.abc) > (self.abc.find(char) + self.shiffted_by) else self.abc[self.shiffted_by - (len(self.abc) - self.abc.find(char))] for idx, char in enumerate(self.my_message)])
        print(encrypted_message)
        self.assertEqual(encrypted_message, encrypt(self.my_message, self.shiffted_by))


if __name__=="__main__":
    unittest.main()