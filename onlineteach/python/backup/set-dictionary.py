# 集合的運算

s1={3,4,5}
print(3 in s1)
print(10 in s1)
print(10 not in s1)
s2={4,5,6,7}

# 交集，兩個集合中相同資料

s3= s1 & s2
print(s3)

# 連集：取兩個集合中的所有項目，但不重複
# | 在enter上方

s3= s1|s2
print(s3)

# 差集：s1中減去和s2重疊部分

s3=s1-s2
print(s3)

# 反交集：兩個集合中，不重疊的部分

s3=s1^s2
print(s3)

#set(string)，字串拆成集合

s=set("hi")
print(s)
print("h" in s)
print("H" in s)

# 字典的運算
# key-vaule

dic={"apple":"蘋果","bug":"蟲"}
print(dic["apple"])
dic["bug"]="有問題"
print(dic["bug"])

# 判斷key是否存在

print("apple" in dic)
print("hi" in dic)

# 刪除字典中的鍵值對(key-vaule pair)

del dic["apple"]
print(dic)

# dic={x:x*2 for x in 列表}
# 從列表的資料產生字典

dic={x:x*2 for x in [3,4,5]}
print(dic)