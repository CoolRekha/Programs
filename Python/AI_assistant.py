import speech_recognition as sr  # pip install speechRecognition
import pyttsx3  # pip install pyttsx3
import time
import datetime
import webbrowser as web  # pip install webbrowser
import wikipedia as wiki  # pip install wikipedia
import os
import json  # pip install json
import requests  # pip install requests


engine = pyttsx3.init("sapi5")
voices = engine.getProperty("voices")
# print(voices)
engine.setProperty("voice", voices[1].id)  # sets a female voice.


# function to speak.
def speak(audio):
    engine.say(audio)
    time.sleep(2)
    engine.runAndWait()  # makes audible.
    time.sleep(2)


def wish_me():
    hours = int(datetime.datetime.now().hour)

    if hours >= 0 and hours < 12:
        speak("Good Morning")
    elif 12 <= hours < 16:  # hours >= 12 and hours , 16
        speak("Good After Noon")
    else:
        speak("Good Evening")
    speak("Sir, What can I do for you.")


# function takes voice command from users.
def listening():

    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening...")
        r.pause_threshold = 1
        audio = r.listen(source)
    try:
        print("Recognizing...")
        query = r.recognize_google(audio, language="en-IN")  # using google for voice recognition.
        print(f"User said: {query}\n")

    except Exception as e:
        # print(e)
        print("Say that again please...")
        return "None"
    return query


def read_news():
    url = "https://newsapi.org/v2/top-headlines?country=in&apiKey=e12f38df643a40e1971d6428d52de3ac"
    r = requests.get(url)
    cont = r.text
    head = json.loads(cont)
    articles = head["articles"]  # list of dictionaries of articles
    for article in articles:
        title = article["title"].split('-')
        print(title[0])  # prints Titles of news
        speak(title[0])

        print(article['description'])
        speak(article['description'])

        if article != articles[-1]:
            speak ( "Moving to next news..." )
        else:
            speak("Thankyou...")


if __name__ == '__main__':
    # speak("Hello World!")
    wish_me()
    web_app = web.get(using="C:/Program Files (x86)/Google/Chrome/Application/chrome.exe %s")  # opens Google chrome

    while True:

        query = listening().lower()

        if 'wikipedia' in query:
            speak('Searching Wikipedia....')
            query = query.replace("wikipedia", "")
            results = wiki.summary(query, sentences=2)
            speak(f"According to Wikipedia... {results}")
            print(results)

        elif 'open youtube' in query:
            speak("Opening YouTube")
            web_app.open("youtube.com")  # opens YouTube in browser

        elif 'open google' in query:
            speak("opening Google")
            web_app.open("google.com")  # opens google in browser

        elif "play music" in query:
            speak("Playing Music")
            music_dir = "C:\\Users\\Anandhu\\Desktop\\Music car"
            songs = os.listdir(music_dir)  # creates a list of items in the directory.
            print(songs)
            os.startfile(os.path.join(music_dir, songs[0]))

        elif "the time" in query:
            strTime = datetime.datetime.now().strftime("%H:%M:%S")
            speak(f"The Time is {strTime}")

        elif "read news" in query:
            read_news()

        elif 'your name' in query:
            speak("My Name is EDITH")

        elif "who are you" in query:
            speak("I am EDITH , I'm  an AI made using Python.")
        elif "how are you" in query:
            speak("I am Fine, Thank You.")
            speak("What about you.")
