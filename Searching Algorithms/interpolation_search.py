def interpolation_search(arr, target):
    left = 0
    right = len(arr) - 1

    while(left<=right and target>=arr[left] and target<=arr[right]):
        probe = left + (right-left)*(target-arr[left])//(arr[right]-arr[left])
        if arr[probe]<target:
            left = probe+1
        elif arr[probe]>target:
            right = probe-1
        else:
            if arr[probe]==target:
                return probe
    return -1

arr = [1, 4, 7, 8, 10, 12]
print(interpolation_search(arr, 7))
print(interpolation_search(arr, 15))



