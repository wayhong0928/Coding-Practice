# 載入 pandas 模組
import pandas as pd

# 篩選練習 - Series
# data=pd.Series([30, 15, 20])
# condition=data>18
# filteredData=data[condition]
# print(filteredData)
# print("=================")
# data=pd.Series(["嗨", "hello", "python"])
# condition=data.str.contains("o")
# print(condition)
# filteredData=data[condition]
# print(filteredData)
# print("=================")
# 篩選練習 - DaraFrame

data=pd.DataFrame(
    {
        "name":["a", "b", "c"],
        "salary":[3, 4, 5]
    }
)
# print(data)
condition=data["name"]=="a"
print(condition)
filteredData=data[condition]
print(filteredData)
