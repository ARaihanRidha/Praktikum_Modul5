def maks(a,b):
    if a>b : return a
    else : return b
def min(a,b):
    if a<b : return a
    else : return b
batas =0
maksimal=-100000
minimal=100000
bil=int(input()) 
while batas < bil:
    nilai=map(int,input().split())
    for item in nilai:
        maksimal=maks(maksimal,item)
        minimal=min(minimal,item)
        batas+=1
print(maksimal,minimal)               