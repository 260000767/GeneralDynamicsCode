from math import *

def thisFunction(d1, d2, b, a):
    c = sqrt( (d1**2) + (7.5**2) - 15*d1*degrees(cos(b)) )
    e = degrees(asin(d1*degrees(sin(b))/c))
    d = sqrt( 300 +c**2 -60*c*degrees( cos(90+e) ) )
    theta = degrees( asin( (c*degrees(sin(90+e)))/d ) )
    if d1 > d2:
        return 360-theta
    else:
        return theta


thisFunction(30,30,10,20)
while True:
    inD1 = int(input('d1: '))
    inD2 = int(input('d2: '))
    inA = int(input('a: '))
    inB = int(input('b: '))
    print(f'The bearing is {thisFunction(inD1, inD2, inB, inA)}')
