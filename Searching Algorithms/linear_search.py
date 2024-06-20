# function returning if the target is present in the array or not.
def linear_search(arr, target):
    for a in arr:
        if a==target:
            return True
    return False

arr = [4,7,3,5,6,1,8,2,9]
print(linear_search(arr, 5))
print(linear_search(arr, 10))

# function returning the index of the target in the array, if present (otherwise returns -1)
def linear_search_index(arr, target):
    index = -1
    for i, a in enumerate(arr):
        if a==target:
            index = i
            return index
    return index

print(linear_search_index(arr, 5))
print(linear_search_index(arr, 10))
