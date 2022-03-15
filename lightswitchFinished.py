import tkinter as tk
window = tk.Tk()

button = tk.Button(text='...', bg="white", fg="black")
button.pack(pady = 200, padx = 200)

#<schijf hier tussen je code>
from shortcuts import coloredText,color #late import cause writing restriction
#sets initial colors and text
button.configure(text='Switch light ON')
window.configure(bg="black")
pressed = False

def updateWindow(background,buttonText,loggedText,color):
    window.configure(bg=background)
    button.configure(text=buttonText)
    print(coloredText("",color,f'Light switched {loggedText}'))

def switching(numEventYeet):
    global pressed
    if pressed:
        updateWindow('black','Switch light ON','off',color.BLUE)
        pressed = False
    elif not pressed:
        updateWindow('yellow','Switch light OFF','on',color.YELLOW)
        pressed = True

button.bind('<Button>',switching)

#<schijf hier tussen je code\>
window.mainloop()