import sys
print (sys.getsizeof(object))
data = 10
print (sys.getsizeof(data))
data = 100000
print (sys.getsizeof(data))
data = 100000000
print (sys.getsizeof(data))
data = 10.0
print (sys.getsizeof(data))
data = 100000.5
print (sys.getsizeof(data))
data = 100000000.5
print (sys.getsizeof(data))

print (sys.getsizeof(int()))
print (sys.getsizeof(str()))
print (sys.getsizeof(float()))
print (sys.getsizeof(bool()))
