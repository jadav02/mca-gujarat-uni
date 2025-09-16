"""#1A:Create a string made of the first, middle and last character

str1 = "vivek"
print("Original String is", str1)

res=str1[0]

l=len(str1)
mi = int(1/2)
res = res+str1[mi]

res= res+str1[l-1]

print("New String:",res)"""

"""
# 1B: Create a string made of the middle three characters

str1 = "JhonDipPeta"
str2 = "JaSonAy"

def get_middle_three_chars(str1):
    print("Original String is ",str1)

    mi=int(len(str1)/2)

    res=str1[mi-1:mi+2]
    print("Middle three chars are:", res)

get_middle_three_chars("JhonDipPeta")
get_middle_three_chars("JaSonAy")
"""

"""
# 2: Append new string in the middle of a given string

s1 = "Atul"
s2 = "Kelly"

def append_middle(s1,s2):
    print("Original String are",s1,s2)

    mi = int(len(s1)/2)

    x=s1[:mi:]

    x=x+s2

    x=x+s1[mi:]
    print("After appending new string in middle:", x)

append_middle("Ault","Kelly")
"""
"""
#3: Create a new string made of the first, middle, and last characters of each input string
s1 = "America"
s2 = "Japan"

def mix_string(s1,s2):
    first_char = s1[0] + s2[0]
    middle_char = s1[int(len(s1)/2):int(len(s1)/2)+1] +s2[int(len(s2)/2):int(len(s2)/2)+1]
    last_char = s1[len(s1) - 1] + s2[len(s2) - 1]

    res = first_char + middle_char + last_char
    print("Mix String is ", res)

mix_string(s1,s2)
"""
"""
#4 : Arrange string characters such that lowercase letters should come first

str1 = "PYnAtivE"
print("Original String:", str1)
lower=[]
upper=[]
for char in str1:
    if char.islower():
        lower.append(char)
    else:
        upper.append(char)

sorted_str = ''.join(lower+upper)
print('Result:', sorted_str)
"""
"""
#5:Count all letters, digits, and special symbols from a given string
str1 = "P@#yn26at^&i5ve"

def find_digits_chars_symbols(str1):
    char_count = 0
    digit_count = 0
    symbol_count = 0
    for char in str1:
        if char.isalpha():
            char_count +=1
        elif char.isdigit():
            digit_count +=1
        else:
            symbol_count +=1

    print("Chars =", char_count, "Digits =", digit_count, "Symbol =", symbol_count)

print("total counts of char, digits and symbols \n")
find_digits_chars_symbols(str1)
"""
"""
#6: Create a mixed String using the following rules
#Given two strings, s1 and s2. Write a program to create a new string s3 made of the first char of s1, then the last char of s2, Next, the second char of s1 and second last char of s2, and so on. Any leftover chars go at the end of the result.

s1 = "Abc"
s2 = "Xyz"

s1_length = len(s1)
s2_length = len(s2)

length = s1_length if s1_length > s2_length else s2_length

result = ""

s2 = s2[::-1]

for i in range(length):
    if i< s1_length:
        result = result +s1[i]
    if i< s2_length:
        result = result + s2[i]

print(result)
"""
"""
#7: String characters balance Test

def string_balance_test(s1,s2):
    flag = True
    for char in s1:
        if char in s2:
            continue
        else:
            flag = False
    return flag

s1 = "Yn"
s2 = "PYnative"
flag = string_balance_test(s1,s2)
print("s1 and s2 are balanced:", flag)

s1 = "Ynf"
s2 = "PYnative"
flag = string_balance_test(s1,s2)
print("s1 and s2 are balanced: ",flag)
"""
"""
#8: Find all occurrences of a substring in a given string by ignoring the case
str1 = "Welcome to USA. usa awesome, isn't it?"
sub_string = "USA"

temp_str = str1.lower()

count = temp_str.count(sub_string.lower())
print("The USA count is:", count)
"""
"""
#9: Calculate the sum and average of the digits present in a string

str1 = "PYnative29@#8496"
total = 0
cnt = 0

for char in str1:
    if char.isdigit():
        total+=int(char)
        cnt +=1

avg = total/cnt
print("Sum is:", total,"Average is:",avg)
"""
"""
#10: Write a program to count occurrences of all characters within a string
str1 = "Apple"

char_dict = dict()

for char in str1:
    count = str1.count(char)

    char_dict[char] =count
print('Result:', char_dict)
"""
"""
#11: Reverse a given string

str1 = "PYnative"
print("Original strinng is :",str1)

str1 = str1[::-1]
print("Reversed string is:",str1)
"""
"""
#12: Find the last position of a given substring
str1 = "Emma is a data scientist who knows Python. Emma works at google."
print("Original String is:",str1)

index = str1.rfind("Emma")
print("Last occurrence of Emma starts at index:", index)
"""
"""
#13: Split a string on hyphens

str1 = "Emma-is-a-data-scientist"
print("Original string is:", str1)

sub_strings = str1.split("-")

print("Displaying each substring")

for sub in sub_strings:
    print(sub)
"""
"""
#14: Remove empty strings from a list of strings
str_list=["Emma","Jon","","Kelly",None,"Eric",""]
res_list=[]
for s in str_list:
    if s:
         res_list.append(s)       
print(res_list)
"""

"""
#15: Remove special symbols / punctuation from a string

import string

str1 = "/*Jon is @developer & musician"
print("Oiginal sting is ",str1)

new_str = str1.translate(str.maketrans('','',string.punctuation))

print("New string is ", new_str)
"""
"""
#16: Removal all characters from a string except integers
str1 = 'I am 25 years and 10 months old'
print("Original string is", str1)

res = "".join([item for item in str1 if item.isdigit()])

print(res)

"""
"""
#17: Find words with both alphabets and numbers

str1 = "Emma25 is Data scientist50 and AI Expert"
print("The original string is:" + str1)

res=[]

temp = str1.split()

for item in temp:
    if any(char.isalpha() for char in item) and any(char.isdigit() for char in item):
        res.append(item)

print("Displaying words with alphabets and numbers")
for i in res:
    print(i)

"""

#18: Replace each special symbol with # in the following string

import string

str1 = '/*Jon is @developer & musician!!'
print("The original string is :", str1)

replace_char = '#'

for char in string.punctuation:
    str1 = str1.replace(char, replace_char)

print("the string after replacement: ", str1)
