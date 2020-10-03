
alphabet_pos = {'A':0,  'B':1,  'C':2,  'D':3, 
'E':4,  'F':5,  'G':6,  'H':7,  'I':8, 
'J':9, 'K':10,  'L':11,  'M':12,  'N': 13,
 'O':14,'P':15,  'Q':16,  'R':17, 
'S':18,  'T':19,  'U':20,  'V':21,  'W':22,
  'X':23,   'Y':24 , 'Z':25,  }

def movement(letter, rot):
    return 'a';
    print("need to work on")

def hash(word, key):
    secret = []    
    i = 0
    key = key.upper();
    for letter in word:
        code = key[i]  #get letter from key one by one
    #find movement amount 
        rotation = alphabet_pos[code]
    #check if letter is alphanumeric
        if letter.isalpha():            
            secret.append(movement(letter, rotation))  
        else:
            secret.append(letter)                       

    #implement for checking if at end of string misha
        

    return ''.join(secret)    

word = "AteststringjustforpracticehereinHouston"
key = input("Enter a key:")

print(hash(word,key))