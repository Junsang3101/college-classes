from ArrayList import ArrayList

L = ArrayList(50)

print("최초 ", L)
L.insert(0, 10)
L.insert(0, 20)
L.insert(1, 30)
L.insert(3, 40)
L.insert(2, 50)
print("삽입x5", L.array[0:L.size])
L.delete(2)
print("삽입(2)", L.array[0:L.size])
L.delete(3)
print("삽입(3)", L.array[0:L.size])
L.delete(0)
print("삽입(0)", L.array[0:L.size])
