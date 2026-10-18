secret = "GMBH|D0ef_Cb4t1d~"
flag = ""
for c in secret :
    ascii_code = ord(c)
    new_char =chr(ascii_code - 1)
    flag += new_char
    print("Flag tìm duoc là:",flag)
