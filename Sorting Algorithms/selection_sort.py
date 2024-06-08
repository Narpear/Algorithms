def selection_sort(arr):
    n = len(arr)
    for i in range(n-1):
        min_index = i
        for j in range(i+1, n):
            if arr[j]<arr[min_index]:
                min_index = j
        if i!=min_index:
            temp = arr[i]
            arr[i] = arr[min_index]
            arr[min_index] = temp

nums = [7, 3, 7, 2, 0, 4, 7, 6, 9, 1, 5, 8]
selection_sort(nums)
print(nums)