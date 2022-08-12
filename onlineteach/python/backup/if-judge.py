# 輸入數字判斷

x=input("請輸入數字：") #輸入的都是字串
x=int(x)    #string轉integer
if x>200:
    print("大於200")
elif x>100:
    print("大於100小於200")
else:
    print("小於100")

# 四則運算

n1=int(input("請輸入數字1："))
n2=int(input("請輸入數字2："))
op=input("請輸入運算：+、-、*、/：   ")

if op=="+":
    print(n1+n2)
elif op=="-":
    print(n1-n2)
elif op=="*":
    print(n1*n2)
elif op=="/":
    print(n1/n2)
else:
    print("不支援的運算")
