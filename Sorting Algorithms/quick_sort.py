def quick_sort(arr, left, right):
    if left>=right:
        return

    partition_position = partition(arr, left, right)
    quick_sort(arr, left, partition_position-1)
    quick_sort(arr, partition_position+1, right)

# returns index of pivot after the step of quicksort
def partition(arr, left, right):
    i = left
    j = right-1 
    pivot = arr[right]

    while(i<j):
        while (i<right and arr[i]<pivot):
            i+=1
        while (j>left and arr[j]>=pivot):
            j-=1
        if i<j:
            arr[i], arr[j] = arr[j], arr[i]

    if arr[i]>pivot:
        arr[i], arr[right] = arr[right], arr[i]

    return i


arr = [3, 7, 1, 9, 5, 0, 2, 8, 4, 1, 5, 8, 2, 5, 2, 3, 7, 8, 4, 3, 6, 4]
quick_sort(arr, 0, len(arr)-1)
print(arr)