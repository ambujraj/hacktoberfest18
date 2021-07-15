import numpy as np

def polyhello(x):
    """
    Polynomial interpolation of the letters of "Hello world".
    We try to get to all the points defined by : [ord(c) for c in "Hello world"].
    Wich means we need to find a fonction that passes trought these points:
    (0,72)(1,101)(2,108)(3,108)(4,111)(5,32)(6,119)(7,111)(8,114)(9,108)(10,100).
    Take a look at https://en.wikipedia.org/wiki/Polynomial_interpolation.
    """
    retour = (x**10)*5507/907200
    retour -= (x**9)*5237/17280
    retour += (x**8)*97919/15120
    retour -= (x**7)*1559633/20160
    retour += (x**6)*24452771/43200
    retour -= (x**5)*15044903/5760
    retour += (x**4)*683659441/90720
    retour -= (x**3)*56016979/4320
    retour += (x**2)*8327237/700
    retour -= x*604657/140
    retour += 72
    return int(np.round(retour))

for i in range(11):
    print(chr(polyhello(i)), end="")
