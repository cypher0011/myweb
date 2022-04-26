lst = list(map(int, "102 109 99 106 127 53 116 95 122 113 120 118 100 55 51 103 57 128".split()))
for i in range(len(lst)):
      lst[i] -= i % 7

      print("".join([chr(n) for n in lst]))


lst = list(map(int, "102 109 99 106 127 53 116 95 122 113 120 118 100 55 51 103 57 128".split()))
for i in range(len(lst)):
    print(i)
    lst[i] -= i % 7
    print("".join([chr(n) for n in lst]))
    