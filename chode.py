# https://www.codechef.com/problems/CHODE?tab=statement
# cook your dish here
# print(ord('z'))
def frequency(s):
    ch='a'
    frq_arr=[[chr(i+ord('a')),0] for i in range(26)]
    for i in s:
        if ord(i)-ord('a')<=25 and ord(i)-ord('a')>=0:
            frq_arr[ord(i)-ord('a')][1]+=1
    frq_arr.sort(key=lambda x: x[1])    
    return frq_arr

for _ in range(int(input())):
    freq_seq=input()
    encrypted_txt=input()
    e_txt_lc=encrypted_txt.lower()
    frq_arr=frequency(e_txt_lc)
    
    for i in range(26):
        frq_arr[i][1]=freq_seq[i]
    
    # print(encrypted_txt)
    
    frq_arr.sort(key=lambda x: x[0])
    # for i in range(26):
    #     encrypted_txt=encrypted_txt.replace(frq_arr[i][0],frq_arr[i][1])
    
    for i in range(len(encrypted_txt)):
        # print(chr(ord(encrypted_txt[i])+ord(frq_arr[ord(encrypted_txt[i])-ord('a')][1]-frq_arr[ord(encrypted_txt[i])-ord('a')][0])))
        if ord(encrypted_txt[i])>=ord('a') and ord(encrypted_txt[i])<=ord('z'):
            print(chr(ord(encrypted_txt[i])+ord(frq_arr[ord(encrypted_txt[i])-ord('a')][1])-ord(frq_arr[ord(encrypted_txt[i])-ord('a')][0])),end="")
        elif ord(encrypted_txt[i])>=ord('A') and ord(encrypted_txt[i])<=ord('Z'):
            print(chr(ord(encrypted_txt[i])+ord(frq_arr[ord(encrypted_txt[i])-ord('A')][1])-ord(frq_arr[ord(encrypted_txt[i])-ord('A')][0])),end="")
        else:
            print(encrypted_txt[i],end="")
        
    print("")    
    # print(frq_arr)
    # print(encrypted_txt)
    
    
    
    
    