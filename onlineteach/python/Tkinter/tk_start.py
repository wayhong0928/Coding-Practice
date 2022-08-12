import tkinter as tk
win=tk.Tk()
win.title("hello wolrd")
win.geometry("400x200")
win.minsize(width=400,height=200)
win.maxsize(width=1024,height=768)
# 不縮放的話
# win.resizable(False,False) 0=False

# ICON  畫面左上角圖案
# win.iconbitmap()  # .ico檔
# 顏色
win.config(background="skyblue")

# 透明度
win.attributes("-alpha",1)

# 置頂
win.attributes("-topmost", True)

# img=tk.PhotoImage(file="")
# btn.config(image=img)  按鈕改成圖片

def out():
    print("hello world")

btn=tk.Button()
btn.config(text="click",background="white")
btn.config(width=10,height=5)
btn.config(command=out)
btn.pack()



win.mainloop()

