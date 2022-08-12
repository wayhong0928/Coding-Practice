# 抓取 Medium.com 的文字資料
import urllib.request as req
url = "https://medium.com/_/api/home-feed"

# 建立一個 Request 物件，附加 Request Headers 的資訊
request = req.Request(url, headers = {
    "User-Agent":"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/84.0.4147.125 Safari/537.36"
})
with req.urlopen(request) as response:
    data = response.read().decode("utf-8") # 根據觀察，取得的資料是 JSON 格式

# 解析 Json 格式的資料，取得每篇文章的標題
import json
data = data.replace("])}while(1);</x>","")
data = json.loads(data)   # 把原始的資料解析成字典/列表的表示形式

# 取得 json 資料中的文章標題
posts = data["payload"]["references"]["Post"]
for key in posts:
    post = posts[key]
    print(post["title"])