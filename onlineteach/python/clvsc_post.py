# 抓取 CLVSC 最新公告頁面的網頁原始碼 (HTML)
import urllib.request as req

def gettitle(url):
    # 建立一個 Request 物件，附加 Request Headers 的資訊
    request = req.Request(url, headers={
        "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/84.0.4147.125 Safari/537.36"
    })
    with req.urlopen(request) as response:
        data = response.read().decode("utf-8")
    # print(data)

    # 解析原始碼，取得每篇文章的標題
    import bs4
    root = bs4.BeautifulSoup(data, "html.parser")
    titles = root.findAll("span", class_="ptname")
    with open("data.txt", "a", encoding="utf-8") as file:
        for title in titles:
            file.write(title.a.string + "\n")
    # 抓取上一頁的連結
    nextLink = root.find("a", string="下一頁")  # 找到內文是"__"的 a標籤
    return nextLink["href"]

pageURL = "http://www.clvsc.tyc.edu.tw/files/40-1000-173-1.php"

# 主程式：抓取一個頁面的標題

count = 0
# 公告目前40頁
while count < 40:
    pageURL = gettitle(pageURL)
    count += 1
