import numpy as np
from numpy import random

def main():
    
    arr = [0 for x in range(5)]   
    for x in range(5):
        arr[x] = random.randint(1,4)
    m = np.max(arr)
    x = [i for i in range(len(arr)) if(arr[i]==arr[arr.index(m)])]
    totalTall = len(x)
    print(arr)
    print(x)
    print(totalTall)
    

if __name__ == "__main__":
    main()