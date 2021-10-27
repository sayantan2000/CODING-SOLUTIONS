import tkinter as tk  


top = tk.Tk()  
top.geometry("350x250")
label=tk.Label(text="hello")
label.pack()


entry= Entry(top, width= 40)
entry.focus_set()
entry.pack()
top.mainloop()