import PyPDF2


file=open("file.pdf","rb")

fileobj=PyPDF2.PdfFileReader(file)
print(fileobj.numPages)

page=fileobj.getPage(0)

data=page.extractText()
print(data)
file.close()