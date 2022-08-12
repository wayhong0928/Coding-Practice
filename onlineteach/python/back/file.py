# 儲存檔案
# utf-8 加上去才可以有中文

# file=open("data.txt",mode="w",encoding="utf-8") # 開啟
# file.write("hello file\nsecond line\n我是中文")  # 操作
# file.close()                                    # 關閉

# with open("data.txt",mode="w",encoding="utf-8") as file:
#     file.write("5\n3")

# 讀取檔案
# 把檔案中的數字資料，讀取並加總 

# sum=0
# with open("data.txt",mode="r",encoding="utf-8") as file:
#     for line in file:   #一行一行讀取
#         sum+=int(line)
# print(sum)

# 使用 JSON 格式讀取，副寫檔案

# 從檔案中讀取 JSON 資料，放入變數 data 裡面

import json
with open("config.json",mode="r") as file:
    data=json.load(file)
print(data)     # data 是一個字典資料
data["name"]="new name"     # 修改變數中的資料

# 把最新的資料複寫回檔案中

with open("config.json",mode="w") as file:
    json.dump(data, file)