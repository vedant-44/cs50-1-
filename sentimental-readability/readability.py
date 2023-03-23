from cs50 import get_string
def main():
    text=get_string('Text:')
    letters=count_letters(text)
    words=count_words(text)
    sentences=count_sentences(text)
    index=0.0588*(letters*100/words)-0.296*(sentences*100/words)-15.8
    grade=round(index)
    if grade>16:
        print('Grade 16+')
    elif grade<1:
        print('Before Grade 1')
    else:
        print(f'Grade {grade}')








def count_letters(text):
    count=0
    for i in range(len(text)):
        if (text[i]>='a' and text[i]<='z') or (text[i]>='a' and text[i]<='z'):
            count+=1
    return count

def count_words(text):
    count=0
    for i in range(len(text)):
        if text[i]==' ':
            count+=1
    return count

def count_sentences(text):
    count=0
    for i in range(len(text)):
        if text[i]=='.' or text[i]=='!' or text[i]=='?':
            count+=1
    return count

main()


