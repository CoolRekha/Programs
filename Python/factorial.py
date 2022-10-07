#taking an integer input from user
num=int(input("Enter the whole number to find the factorial: "))
factorial = 1
if num < 0:
   	print("Factorial can't be calculated for negative number")
elif num == 0:
   print("Factorial of 0 is 1")
else:
#calculating the factorial of the input number
for i in range(1,num + 1):
  factorial = factorial*i
print("Factorial of",num,"is",factorial)
