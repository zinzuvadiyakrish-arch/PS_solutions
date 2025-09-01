import enchant
line = input("Enter the line to be decoded: ")
d = enchant.Dict("en_US")
words = line.split()

for i in range(0, 26):
    decoded_sentence = ''

    for word in words:
        word = word.lower()
        singleword = ''

        for j in range(0, len(word)):
            if ord(word[j]) - i < 97:
                letter = chr(ord(word[j]) - i + 26)
            else:
                letter = chr(ord(word[j]) - i)
            singleword = singleword + letter

        if d.check(singleword) :
            decoded_sentence = decoded_sentence + " " + singleword
    print(decoded_sentence.strip())

