import random
import time

a=[[0]*1000]*1000
b=[[0]*1000]*1000
res=[[0]*1000]*1000
for i in range(1000):
    for j in range(1000):
        a[i][j]=random.randint(1,100)
        b[i][j]=random.randint(1,100)
start = time.time()
for i in range(1000):
    print("Row: ", i)
    for j in range(1000):
        for k in range(1000):
            res[i][j]+=a[i][k]*b[k][j]
end = time.time()
print("Multiplication completed. Time taken {} s".format(end-start))
