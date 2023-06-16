import numpy as np
from numpy import random

def main():
    
    arr = [0 for x in range(5)]
    
    for x in range(5):
        arr[x] = random.randint(0,10)
            
    calcMax(arr.copy())
    calcMin(arr.copy())
 
def calcMax (arr):
    
    maxValues = [0 for x in range(4)]
    for x in range(4):
        m = np.max(arr)
        maxValues[x] = m
        arr.pop(arr.index(m))
    print(maxValues)
    print(sum(maxValues))
    
def calcMin (arr):
    minValues = [0 for x in range(4)]
    for x in range(4):
        m = np.min(arr)
        minValues[x] = m
        arr.pop(arr.index(m))
    print(minValues)
    print(sum(minValues))
    
if __name__ == "__main__":
    main()