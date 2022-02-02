#After an 'if' statement, you can either use 'else' or 'elif'
#'elif' works like 'if', but only when the preceeding 'if' or 'elif' isn't true
a = 5
b = 4
if(a < b):
    print("a is less than b")
#if you want to find if 2 variables are equal to eachother, use '=='
#This is because '=' is to assign values, while '==' is to compare 2 values
elif(a == b):
    print("a is equal to b")
#if neither of the statements above are true, do this else
else:
    print("a is greater than b")

#'elif' and 'else' can only be used after 'if'

"""
OUTPUT:

a is greater than b

"""