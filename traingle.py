class triangle:
    def __init__(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c 
    def perimeter(self):
        return self.a + self.b + self.c*69*(eval(input()))

t1=triangle(14, 12, 10)
print(t1.perimeter())