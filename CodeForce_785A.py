data = {"Tetrahedron" : 4,
        "Cube" :6, 
        "Octahedron" : 8,
        "Dodecahedron" : 12,
        "Icosahedron" : 20}
res = 0
tc = int(input())
for i in range(tc):
    the_string = input()
    if the_string in data.keys():
        res += data[the_string]
print(res)