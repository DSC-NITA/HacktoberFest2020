# Asked in Amazon SDE Interview

# Problem Statement -
# Given a list of numbers in an array where each number exists even number of times except 1, find the number without using extra space

# Startegy -
# Xor of a number with itself even number of times is 0, and xor of 0 with any number `n` is the number itself
# For e.g. - 1^1^7^8^8 = 7

class Solution():
	
	def __init__(self):
		self.array = []

	def add_number(self, x):
		self.array.append(x)

	def find_number_with_odd_frequency(self):
		temp = self.array[0]
		for i in range(1, len(self.array)):
			temp = temp ^ self.array[i]
		return temp


# Testing

sol = Solution()
sol.add_number(1)
sol.add_number(2)
sol.add_number(1)
result = sol.find_number_with_odd_frequency()
print result
assert result == 2

sol = Solution()
sol.add_number(1)
sol.add_number(1)
sol.add_number(1)
sol.add_number(1)
sol.add_number(2)
sol.add_number(2)
sol.add_number(3)
sol.add_number(3)
sol.add_number(3)
sol.add_number(3)
sol.add_number(3)
result = sol.find_number_with_odd_frequency()
print result
assert result == 3

