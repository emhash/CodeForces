thestring = str(input())
thestring = thestring.replace('{', '')
thestring = thestring.replace('}', '')
thestring = thestring.replace(' ', '')
thestring = thestring.replace(',', '')
print(len(set(thestring)))