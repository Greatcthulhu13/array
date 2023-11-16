def sum_array(arr):
    return sum(arr)

def display_array(arr):
    print("Array elements:", end="")
    print(*arr)

size = int(input("Enter the size of the array: "))
array = [int(input(f"Enter element {i+1}: ")) for i in range(size)]

display_array(array)

print(f"Sum of array elements: {sum_array(array)}")
