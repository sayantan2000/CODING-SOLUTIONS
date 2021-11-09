import requests
import time


params = {
  'access_key': 'e901dc6af5a4691320527da322556104',
  'query': 'fetch:ip'
}

#auth = HTTPBasicAuth(apiKey, secret)
rsp = requests.get('http://api.weatherstack.com/current',params)
data=rsp.json()
#current=data[["current"]["temperature"],["cuurent"]["temperature"]]
temp=data['current']['temperature']
pressure=data['current']['pressure']
wind_speed=data['current']['wind_speed']
loacation=data['location']['name']
state=data['location']['region']
humidity=data['current']['humidity']
feelslike=data['current']['feelslike']
WeatherDescription=data['current']['weather_descriptions'][0]
#Location=data['Location']
windspeed=wind_speed

final_data={
            "City :":"Kolkata",
            "WeatherDescription :":WeatherDescription,
            "FeelsLike :":feelslike,
            "Humidity :":humidity,
            "WindSpedd :":wind_speed,
            "Location :" :loacation,
            "State :": state,
            "Temperature :":temp,
            "Air_Pressure :":pressure,
            "Wind_Speed :":wind_speed,
          }
print("Fetching Data : ")
time.sleep(2)

for i,j in final_data.items():
  print(i,j)
#pprint(data)
#print(data["data"]["statewise"])

