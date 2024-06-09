def merge(arr, left, right, mid):
    left_copy = arr[left:mid+1]
    right_copy = arr[mid+1: right+1]

    left_counter, right_counter = 0, 0
    sorted_counter = left

    while left_counter<len(left_copy) and right_counter<len(right_copy):
        if left_copy[left_counter] <= right_copy[right_counter]:
            arr[sorted_counter] = left_copy[left_counter]
            left_counter += 1
        else:
            arr[sorted_counter] = right_copy[right_counter]
            right_counter += 1
        sorted_counter += 1

    while left_counter<len(left_copy):
        arr[sorted_counter] = left_copy[left_counter]
        left_counter += 1
        sorted_counter += 1
    while right_counter<len(right_copy):
        arr[sorted_counter] = right_copy[right_counter]
        right_counter += 1
        sorted_counter += 1
      
def merge_sort(arr, left, right):

    if left>=right:
        return
    
    mid = (left+right)//2
    merge_sort(arr, left, mid)
    merge_sort(arr, mid+1, right)

    merge(arr, left, right, mid)


# arr = [4, 7, 2, 9, 2, 0, 1, 7, 3, 8, 0, 4, 2, 6]
arr = [5, 3s, 7, 8, 4, 1]
merge_sort(arr, 0, len(arr))
print(arr)