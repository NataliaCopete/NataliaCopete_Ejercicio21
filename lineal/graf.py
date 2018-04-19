import numpy as np
import matplotlib.pyplot as plt


datos=np.loadtxt("datos.txt")
x=datos[:,0]
u=datos[:,1]
u1=datos[:,2]

plt.plot(x,u,label="inicial",color="r",)
plt.plot(x,u1,label="t=0.5")
plt.legend()
plt.savefig("grafica.png")
