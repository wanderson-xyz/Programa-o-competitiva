entrada = input().strip()

naipes= {'C': set(), 'E': set(), 'U': set(), 'P': set()}
duplicatas = {'C': False, 'E': False, 'U': False, 'P': False}


for i in range(0, len(entrada), 3):
    valor = entrada[i:i+2]
    naipe = entrada[i+2]
    
    
    carta = valor
    
    if carta in naipes[naipe]:
        duplicatas[naipe] = True
        
    else:
        naipes[naipe].add(carta)
        
for n in ['C', 'E', 'U', 'P']:
    if duplicatas[n]:
        print('erro')
    else:
        faltando = 13 - len(naipes[n])
        print(faltando)