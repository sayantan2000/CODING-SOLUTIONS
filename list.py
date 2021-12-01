a="sayantan"
b=list(a)
c="sadhukhan"
d=list(c)

list_e=b.extend(d)

for k in b:
    if k=="a" or k=="e" or k=="i" or k=="o" or k=="u":
         b.remove(k)



print(b)
