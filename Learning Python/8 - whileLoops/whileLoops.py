#While loops loop until the condition inside the parentheses is false

i = 1
#Do the while until i is less than or equal to 5
while(i <= 5):
    #We can use the variable 'i' in the print statement
    #str(i) converts whatever is in the parentheses into a string, to be able to put together multiple strings
    print("current number " + str(i))

    #adding 1 to 'i' every time the while loop gets to the end
    i += 1

print("Completed the while loop")

"""
OUTPUT:

current number 1
current number 2
current number 3
current number 4
current number 5
Completed the while loop

"""