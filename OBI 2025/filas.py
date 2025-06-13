entrada = int(input())
alunos = []
count = 0
if entrada > 0 and entrada <= 100000:
    for i in range(entrada):
        alu = int(input())
        alunos.insert(i, alu)
    
verificador = entrada -1 

for i in range(entrada-2, -1, -1):
    
    if alunos[verificador] > alunos[i]:
        count +=1
        
    elif alunos[verificador] == alunos[i]:
        count +=1
    else:
        verificador -=2
        



print(count)
