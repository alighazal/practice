from tkinter import *

secondWindowOpen = False

def closeTop () :
    global secondWindowOpen
    secondWindowOpen  = False



def open ():
    global secondWindowOpen
    if (secondWindowOpen == False):
        secondWindowOpen  = True
        top = Toplevel()
        top.title("second")

        Label(top, text = "hello, from second window").pack()
        Button(top, text = "close", command = lambda: [top.destroy(),closeTop()] ).pack()
   



root = Tk()
root.title("root")



Button(root, text = "open", command = open).pack()



root.mainloop()