input_exp=input()
arr=input_exp.split("+")
arr.sort()
# print('+'.join(arr))
#method 2
print(arr[0],end='')
for i in range(1,len(arr)):
    print('+'+arr[i],end='')
