flag="f"
n=1
def fun(n):
    val = 0
    for i in (range(1,n+1)):
        val += pow(i,2) + i  
    print(0.5*val)
    res = []
    for i in flag:
        res.append(fun(ord(i)*1079221332616601570012871257401))