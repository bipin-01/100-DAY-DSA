def denomination(n, denoms):
    ways = [0 for amount in range(n+1)]
    ways[0] = 1
    for x in denoms:
        print("Inside denoms loop for denom", x)
        for amount in range(1, n+1):
            if x<=amount:
                ways[amount] += ways[amount - x]
                print(ways)
    print(ways)
    return ways[n]

n = 10
denoms = [1, 2, 5]
print(denomination(n, denoms))