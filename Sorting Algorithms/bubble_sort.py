def bubble_sort(arr):
    sorted = False
    n = len(arr)

    while not sorted:
        sorted = True
        for i in range(n-1):
            if arr[i]>arr[i+1]:
                sorted = False
                arr[i], arr[i+1] = arr[i+1], arr[i]

nums = [7, 4, 8, 2, 9, 4, 9, 2, 0, 1, 8, 3, 7]
bubble_sort(nums)
print(nums)