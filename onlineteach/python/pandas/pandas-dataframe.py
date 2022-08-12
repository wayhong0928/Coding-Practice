# 載入 pandas 模組
import pandas as pd

# 資料索引： DataFrame(字典，index=索引列表)
data=pd.DataFrame(
    {
        "name":["a","b","c"],
        "salary":[3,5,4]
    },index=["A","B","C"]
)
print(data)
print("============================")

# 觀察資料
print("資料數量", data.size)
print("資料型狀(列,欄)", data.shape)
print("資料索引", data.index)
print("============================")

# 取得列（Row/橫向）Series 資料：根據順序、根據索引
print("取得第二列", data.iloc[1], sep="\n")
print("取得第 c 列", data.loc["C"], sep="\n")

# 取得欄（Column/直向） Series 資料：根據欄位名稱
print("取得 name 欄位", data["name"], sep="\n")
names=data["name"] # 取得單維度的 Series 資料
print("把 name 全部轉大寫", names.str.upper(), sep="\n")

# 計算平均值
salaries=data["salary"]
print("平均值", salaries.mean())

# 建立新的欄位
data["revenue"]=[50,40,30] # data[新欄位的名稱]=列表
data["rank"]=pd.Series([3,6,1], index=["A","B","C"]) # data[新欄位的名稱]= Series 的資料
data["cp"]=data["revenue"]/data["salary"]
print(data)