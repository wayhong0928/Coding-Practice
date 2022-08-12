# Point 實體物件的設計： 平面座標上的點
class Point:
    def __init__(self, x, y):
        self.x=x
        self.y=y
    # 定義實體方法
    def show(self):
        print(self.x, self.y)
    def distance(self, targetx, targety):
        return(((self.x-targetx)**2)+((self.y-targety)**2))**0.5    
# 建立第一個實體物件
p=Point(3,4)
p.show()  # 呼叫實體方法 / 函式
result=p.distance(0,0) # 計算座標 3,4 和座標 0,0 之間的距離
print(result)
# 建立第二個實體物件
p2=Point(5,6)
print(p2.x,p2.y)

# File 實體物件的設計： 包裝檔案的程式

class file:
    # 初始化函式
    def __init__(self, name):
        self.name=name
        self.file=None # 尚未開啟檔案： 初期是 None
    # 實體方法
    def open(self):
        self.file=open(self.name, mode="r", encoding="utf-8")
    def read(self):
        return self.file.read()
# 讀取第一個檔案
f1=file("example/data1.txt")        
f1.open()
data=f1.read()
print(data)
# 讀取第二個檔案
f2=file("example/data2.txt")
f2.open()
data=f2.read()
print(data)

# FullName  實體物件的設計： 分開記錄姓、名資料的全名 

class FullName:
    def __init__(self, first, last):
        self.first=first
        self.last=last
name1=FullName("hello","world")
print(name1.first,name1.last)
name2=FullName("he","llo")
print(name2.first,name2.last)