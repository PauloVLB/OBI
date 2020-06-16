
s = raw_input()
r = list()

while (s != '*'):
    linha = s.split(' ')
    
    letra = linha[0][0]
    cont = 0
    for palavra in linha:
        if palavra[0].lower() == letra.lower():
            cont += 1

    if (cont == len(linha)):
        r.append('Y')
    else:
        r.append('N')

    s = raw_input()

for i in r:
    print(i)