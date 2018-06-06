'''

Given an array a that contains only numbers in the range from 1 to a.length,
find the first duplicate number for which the second occurrence has the minimal index.
In other words, if there are more than 1 duplicated numbers, return the number for which
the second occurrence has a smaller index than the second occurrence of the other number does.
If there are no such elements, return -1.

'''

def firstDuplicate(a):
    duplicate_and_index = {} #duplicate item value: duplicate item index
    i = 0
    minimum_duplicate_index = len(a)
    minimum_duplicate_key = -1
    while i < len(a):
        item1 = a[i]
        j = i + 1
        while j < len(a):
            item2 = a[j]
            if item1 == item2:
                if item1 not in duplicate_and_index or duplicate_and_index[item1] > j:
                    duplicate_and_index[item1] = j
            j += 1
        i += 1
    print('duplicate_and_index: ' + str(duplicate_and_index))
    for key, index in duplicate_and_index.items():
        if index < minimum_duplicate_index:
            minimum_duplicate_index = index
            minimum_duplicate_key = key
            print('minimum_duplicate_index: ' + str(minimum_duplicate_index))
    return minimum_duplicate_key

a = [0, 1, 2, 3, 2, 1]
print(str(firstDuplicate(a)))
