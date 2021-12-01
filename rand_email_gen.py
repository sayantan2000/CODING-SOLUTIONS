import random
import string
file=open("email.txt","wb")
upper = string.ascii_uppercase
lower = string.ascii_lowercase
all=lower+upper
host="@gmail.com"
file.write("Some random emails are:\n".encode())

file.write("............................".encode())
file.write("\n".encode())
for i in range(10000+1):
    
    email=random.sample(all,15)
    list(email)
    f_email=("".join(email)+host)
    file.write("your Email no {} is ->".format(i).encode("utf-8"))
    file.write(f_email.encode())
    file.write("\n".encode())
    file.write("-----------------------------".encode())
    file.write("\n".encode())
   
file.close()