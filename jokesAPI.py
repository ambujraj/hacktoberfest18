from bs4 import BeautifulSoup as bs
import urllib2
from time import sleep
from way2sms import sendSMS
import math
def getJokes():
    url="http://jokes.cc.com/"
    data=urllib2.urlopen(url)
    sp=bs(data.read(),'html.parser')

    dailyJoke=sp.find('span',rel='nofollow')
    dailyJokeString=dailyJoke.string
    # print str(dailyJokeString)
    return str(dailyJokeString)

jk=getJokes()
l=len(jk)
print jk
# for i in range(int(math.ceil(l*1.0/140))):
#     sendSMS('9151643205',jk[i*140:(i+1)*140])
#     sleep(2)
