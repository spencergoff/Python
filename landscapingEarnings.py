#note that this is a "knapsack" problem
def landscapingEarnings(time):
    highest = 0
    testing = 0
    timeUsed = 0
    values = {"tree_removal": {"time": 120, "money": 30}, "mowing": {"time": 30, "money": 14}, "raking": {"time": 10, "money": 7}, "trimming": {"time": 5, "money": 4}, "digging": {"time": 4, "money": 3}}

    #NOTE: using dynamic programming would yield the optimal solution, but for simplicity I'll use Greedy approach here

    '''while True:
        for x in values:
            for y in x:
                print(y)
        if timeUsed + values[]'''
    print("value: " + values[0])

    for x in values:
        print(x, "", end = "")
        for y in x:
            print(y, "", end = "")



landscapingEarnings(20)
