
linha = raw_input().split(' ')

r = list()

while linha[0] != '0' and linha[1] != '0':
    n1 = linha[0]
    n2 = linha[1]

    for i in range (0, len(n2)):
        n2 = n2.replace(n1, '')
    
    acm = 0
    k = 1

    for i in range(len(n2)-1, -1, -1):
        acm += int(int(n2[i])*k)
        k *= 10

    r.append(acm)
    linha = linha = raw_input().split(' ')

for i in r:
    print i