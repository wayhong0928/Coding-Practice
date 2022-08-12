# 寄送 Email 程式
# 準備訊息物件設定

import email.message
msg=email.message.EmailMessage()
msg["From"]="714316@clvsc.tyc.edu.tw"
msg["To"]="714316@clvsc.tyc.edu.tw"
msg["Subject"]="hello world"

# 寄送純文字的內容

msg.set_content("let me try try")

# 寄送比較多樣式的內容(html)

msg.add_alternative("<h3>CLVSC</h3>is a ..ya you know", subtype="html")

# 連線到 SMTP Server，驗證寄件人身份並發送郵件

import smtplib

# 到網路上搜尋 gmail smtp server 或是 yahoo smtp sercer

server=smtplib.SMTP_SSL("smtp.gmail.com", 465)
# password
server.login("714316@clvsc.tyc.edu.tw", "password")
server.send_message(msg)
server.close()