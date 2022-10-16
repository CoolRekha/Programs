import random
print("!!Welcome to the py-number guessing game!!\nGuess a number between 1 and 50")
print("Careful!!You have only five chances!")
rand = random.randint(1,50)
num1 = int(input("Enter your guess\n"))
guesses = 5
if(num1==rand):
    print("Congratulations!You guessed it..")
else:
    while(guesses>1):
        if(num1>rand):
            num1=int(input("Guess lower!!\n"))
        elif(num1<rand):
            num1=int(input("Guess higher!!\n"))
        guesses-=1
    
    if(num1==rand):
        print("Congratulations!!You guessed it..")
    else:
        print("Oops:( Better luck next time!!")
        