# Recursive Binary Search
# Tejas Nanaware


# Returns element index if it is present or returns -1
def binary_search(array, low, high, element):
	if high >= low:
		mid = (high + low) // 2
		
		# Check if element is at mid
		if array[mid] == element:
			return mid
		
		else:
			if array[mid] > element:
				return binary_search(array, low, mid-1, element)
			if array[mid] < element:
				return binary_search(array, mid+1, high, element)
			else:
				return -1

arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

result = binary_search(arr, 0, len(arr)-1, 5)

# returns None if element is not found
print("Element is at index", str(result))
