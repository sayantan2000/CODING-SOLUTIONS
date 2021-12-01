import random
from cryptography.fernet import Fernet
import base64
key = Fernet.generate_key()


def encrypt(txt):

        txt = str(txt)
        cipher_suite = Fernet(key)
        encrypted_text = cipher_suite.encrypt(txt.encode('ascii'))
        encrypted_text = base64.urlsafe_b64encode(encrypted_text).decode("ascii")
        return encrypted_text


def decrypt(txt):

        txt = base64.urlsafe_b64decode(txt)
        cipher_suite = Fernet(key)#(settings.ENCRYPT_KEY)
        decoded_text = cipher_suite.decrypt(txt).decode("ascii")
        return decoded_text 

file=open("new.txt","wb")
lower="abcdefghijklmnopqrstuvwxyz"
upper="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
numbers="0123456789"
special="!@#$%^&*(){}[]_-=+"
all=lower+upper+numbers+special
length=9
file.write("Some random passwords are -: ".encode("ascii"))
file.write("\n".encode("ascii"))
file.write(".....................".encode("ascii"))
file.write("\n".encode("ascii"))
for i in range(10000+1):
        password="".join(random.sample(all,length))
        file.write("your password no {} is ->".format(i).encode("utf-8"))
        file.write(password.encode())
        encrypted_password=encrypt(password)
        file.write("\n".encode())
        file.write("\n".encode())
        file.write("Encrypted form of password no {} is ->".format(i).encode("utf-8"))
        file.write(encrypted_password.encode())
        file.write("\n".encode())
        file.write("------------------------".encode())
        file.write("\n".encode())
    
file.close()


