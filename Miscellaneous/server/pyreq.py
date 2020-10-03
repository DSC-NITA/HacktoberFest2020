
#file to check the api running

import requests

p =requests.post("http://localhost:8080/user" , params = {'id' : '1'})

print(p)