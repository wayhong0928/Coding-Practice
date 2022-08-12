# 定義生成器函式子
# def test():
#     print("階段一")
#     yield 5
#     print("階段二")
#     yield 10

# 呼叫並回傳生成器
# gen=test()

# 搭配 for 迴圈中使用
# for d in gen:
#     print(d)

def generateEven(maxNumber):
    number=0
    while number<maxNumber:
        yield number
        number+=1

evenGenerator=generateEven(1000000)
for data in evenGenerator:
    print(data)