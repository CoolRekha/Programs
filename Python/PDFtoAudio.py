#Import the required packages
!pip install pyttsx3
!pip install PyPDF2
import pyttsx3
import PyPDF2

file = open("sample.pdf", mode= "rb")
pdf_reader = PyPDF2.PdfFileReader(file)
pages - pdf_reader.getPage(1)
#page no which you want to convert into audio

text = pages.extractText()

melo = pyttsx3.init()
melo.say(text)
melo.runAndWait()
