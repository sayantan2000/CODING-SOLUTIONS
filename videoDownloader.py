from pytube import YouTube
import requests
import re
import urllib.request

def FBVideoDownloader(url):
    #get the Html Data   
    html = requests.get(url)
     #processing the data
    try:
           
             #hd video
            url=re.search('hd_src:"(.+?)"', html.text)[1]
            print("Hd format")
    except Exception as e:
            print("Wrong Link ,Try again Later--")

            url=re.search('sd_src:"(.+?)"', html.text)[1]
            print("Sd format")
    #downloading the video
    urllib.request.urlretrieve(url, "fb-video.mp4")

def YTVideoDownloader(url):
    try:
            yt = YouTube(url)
            print(yt.title)
            print("Downloading ......")
            yt.streams.filter(progressive=True, file_extension='mp4').order_by('resolution').desc().first().download()
    except Exception as e:
            print("Wrong Link ,Try again Later--")


        
if __name__=="__main__":
    #print("Hello World")
    url=str(input("Enter Video Link : "))
    YTVideoDownloader(url)
    #FBVideoDownloader(url)
    url=str(input("Enter fb Video Link : "))
    FBVideoDownloader(url)