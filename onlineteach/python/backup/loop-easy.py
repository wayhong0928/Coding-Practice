# while迴圈

n=1
sum=0 

# 紀錄累加的結果，注意縮排

while n<6:
    print(n)
    sum+=n
    n+=1
print(sum)

# for迴圈
# range(a,b) 類似 (i=0;i<10:i++)

print("for")
sum=0   
for x in range(5,10):
    print(x)
    sum+=x
print(sum)
