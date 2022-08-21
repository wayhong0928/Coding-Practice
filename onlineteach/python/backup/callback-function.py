def test(arg):
    arg("hello")   # 呼叫回呼函式

# 定義一個回呼函式


def handle(da):
    print(da)


test(handle)

#-----------------------------#


def add(n1, n2, cb):
    cb(n1+n2)


def handle1(result):
    print("ans", result)


add(3, 4, handle1)
