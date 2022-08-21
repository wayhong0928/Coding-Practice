# 定義凾式
# 凾式內部的程式碼如果沒有做凾式呼叫就不會執行

def multiply(x, y):

    return x*y

# 呼叫凾式

# vaule=multiply(3,4)+multiply(2,5)
# print(vaule)

# 凾式的包裝


def calculate(max):
    sum = 0
    for n in range(1, max+1):
        sum += n
    print(sum)


calculate(int(input("input:")))
