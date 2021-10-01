import random

def converttoeng(str):
    engmessage = ""
    charMapping = { '4': ['a'],'@': ['a'],'/': ['a'], '8': ['b'],'5': ['b'],'^': ['b'],
    '(': ['c'],'<': ['c'], '|)': ['d'],'3': ['e'], 'ph': ['f'], ']-[': ['h'], '|-|':['h'], '1': ['i'],'3y3': ['i'], '|<': ['k'], '0': ['o'],'oh': ['o'], '$': ['s'],'yes':['s'],
     '+': ['t'], '|_|': ['u'], '\/': ['v']}
    for char in str:
        if (char.lower() in charMapping.keys()) and (random.random() <=0.70):
            possiblereplacements = charMapping.get(char.lower(),"")
            engmessage += random.choice(possiblereplacements)
        else:
            engmessage += char
    return engmessage

input_txt = input("Enter message to be converted: ")
output_txt = converttoeng(input_txt)
print("Leetspeak for {} is {}".format(input_txt,output_txt))