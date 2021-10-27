import requests

import time


rsp=requests.get("https://api.rootnet.in/covid19-in/unofficial/covid19india.org/statewise")
data=rsp.json()
#print(data)
info=data['statewise']
for i,j in info.items():
    print(i,j)