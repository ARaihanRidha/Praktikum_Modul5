def hitung(Nilai1,Nilai2):
    return Nilai1-Nilai2
def mutlak(angka):
    return abs(angka)

a,c,b,d =input().split()
a=int(a)
c=int(c)
b=int(b)
d=int(d)
Hasil=hitung(a,b) + hitung(c,d)
print(mutlak(Hasil))