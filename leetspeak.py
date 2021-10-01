import random

def converttoleet(str):
    leetmessage = ""
    charMapping = { 'a': ['4', '@', '/-\\'], 'b': ['5', '^', '\\'],'c': ['('], 'd': ['|)'], 'e': ['3'], 'f': ['ph'], 'h': [']-[', '|-|'], 'i': ['1', '!', '|'], 'k': [']<'], 'o': ['0'], 's': ['$', '5'], 't': ['7', '+'], 'u': ['|_|'], 'v': ['\\/']}
    for char in str:
        if (char.lower() in charMapping.keys()) and (random.random() <=0.70):
            possiblereplacements = charMapping.get(char.lower(),"")
            leetmessage += random.choice(possiblereplacements)
        else:
            leetmessage += char
    return leetmessage

input_txt = input("Enter message to be converted: ")
output_txt = converttoleet(input_txt)
print("Leetspeak for {} is {}".format(input_txt,output_txt))