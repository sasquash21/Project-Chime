import winsound
import time

def emit_password(password):
    for i in password:
        if i == "0":
            winsound.Beep(550, 2000)
            print("1: 550")
            time.sleep(.5)
        elif i == "1":
            winsound.Beep(600, 2000)
            print("1: 600")
            time.sleep(.5)
        elif i == "2":
            winsound.Beep(650, 2000)
            print("2: 650")
            time.sleep(.5)
        elif i == "3":
            winsound.Beep(700, 2000)
            print("3: 700")
            time.sleep(.5)
        elif i == "4":
            winsound.Beep(750, 2000)
            print("4: 750")
            time.sleep(.5)
        elif i == "5":
            winsound.Beep(800, 2000)
            print("5: 800")
            time.sleep(.5)
        elif i == "6":
            winsound.Beep(850, 2000)
            print("6: 850")
            time.sleep(.5)
        elif i == "7":
            winsound.Beep(900, 2000)
            print("7: 900")
            time.sleep(.5)
        elif i == "8":
            winsound.Beep(950, 2000)
            print("8: 950")
            time.sleep(.5)
        elif i == "9":
            winsound.Beep(1000, 2000)
            print("9: 1000")
            time.sleep(.5)

user_password = input("What is your password?: ")
emit_password(user_password)
