# 網路連線

# import urllib.request as request
# src="https://www.ntu.edu.tw/"
# with request.urlopen(src) as response:
#      data=response.read().decode("utf-8")    # NTU網頁原始碼 ( HTML、CSS、JS)
# print(data)

# 串接，截取公開資料

import urllib.request as request
import json
src="http://data.tycg.gov.tw/api/v1/rest/datastore/33460ef3-be1f-4531-8d23-7347b4d6af5f?format=json"
with request.urlopen(src) as response:
    data=json.load(response)   

# 取得桃園市補習班名稱並列表

count=0     # 如果沒重複就可以算有幾家
clist=data["result"]["records"]
with open("data.txt","w", encoding="utf-8") as file :
    for company in clist:
        count+=1
        file.write(company["補習班名稱"]+"\n")
print("家數：",count)
