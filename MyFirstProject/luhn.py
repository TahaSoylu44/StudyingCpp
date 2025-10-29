#The pattern follows 2,1,2,1...
#I should check if it is bigger than 10 or not.

creditnum = "6500830926349532"
multiply = 1
sum = 0
temp = 0

for i in creditnum:
    if multiply == 1:
        multiply = 2
    else:
        multiply = 1

    temp = int(i) * multiply
    

    if temp > 9:
        temp = (temp % 10) + int(temp / 10)
    
    sum += temp

if sum % 10 == 0:
    print("The cart is valid")
else:
    print("The cart is not valid")