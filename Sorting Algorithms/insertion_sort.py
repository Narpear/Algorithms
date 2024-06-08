def insertion_sort(arr):
    n = len(arr)
    for i in range(1, n):
        temp = arr[i]
        j = i
        while (j>0 and arr[j-1]>temp):
            arr[j] = arr[j-1]
            j -= 1
        arr[j] = temp

nums = [3, 1, 5, 2, 8, 6, 7, 8, 0, 9]
insertion_sort(nums)
print(nums)