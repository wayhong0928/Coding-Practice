# 有序可變動列表 list

grades=[21,60,5,48,64]
print(grades[0:2])
grades[0]=55
print(grades)

# 連續刪除編號資料

grades[1:4]=[] 
print(grades)

# 加入資料

grades+=[12,33]
print(grades)

# 顯示長度

length=len(grades)
print(length)

# 多層列表

data=[[3,4,5],[6,7,8]]
print(data)
data[0][0:2]=[5,5,5]
print(data)

# 有序不可變動列表 tuple

data=(3,4,5)
print(data[0:2])

from ipywidgets import interact
def sqt(x):
    return x**(1/2)
interact(sqt, x=3)
def var_1(sch, dept):
    print("歡迎蒞臨{}大學{}系".format(sch, dept))
interact(var_1, sch=["中原", "中央"], dept=["資管", "國貿"])