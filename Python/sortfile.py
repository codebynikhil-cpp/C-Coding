fp = open("read.txt",'r')
word_lst = []  
for l in fp:
    word_lst += l.split()  
fp.close()  
word_lst.sort()
sorted_str = " ".join(word_lst)
fp = open("sorted.txt","w")
fp.write(sorted_str)
fp.close()
