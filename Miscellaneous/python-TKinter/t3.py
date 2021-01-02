from tkinter import *

root = Tk()

e = Entry(root)
e.insert(2, "Name")

def myFunction ():
    myLabel = Label(root, text = "Hello, "  + e.get())
    myLabel.pack()


myButton = Button(root, text = "Enter ur name!!",
                    state = 'active', padx = 50,  pady = 50,
                    bg = "green", fg = "yellow",
                    command = myFunction )

e.pack()
myButton.pack()

root.mainloop()