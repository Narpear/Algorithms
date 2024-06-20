def binary_search(arr, target):
    left = 0
    right = len(arr) - 1

    while(left<=right):
        mid = (left+right)//2
        # for optimization and to prevent overflow if left and right are big numbers: mid = left + (right-left)//2
        print(arr[mid])
        if arr[mid]<target:
            left = mid+1
        elif arr[mid]>target:
            right = mid-1
        else:
            if arr[mid]==target:
                return mid
    return -1

arr = [1,2,3,4,5,6,7,8,9]
print(binary_search(arr, 5))