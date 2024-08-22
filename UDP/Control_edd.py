class Libro:
    def __init__(self,titulo,autor,venta,criticas,especialidad,comentarios):
        self.title=titulo
        self.aut=autor
        self.ven=venta
        self.crit=criticas
        self.esp=especialidad
        self.com=comentarios

class Libreria:
    def __init__(self,size):
        self.size=size
        self.list=[None*size
        self.aux=[None]*size

    def hashing(self,libro):
        ctr=libro.crit
        ventas=libro.ven
        posicion=(ctr+ventas)%self.size
        return posicion

    def crear (self,libro):
        pos=self.hashing(libro)
        if self.list[pos] is not None:
            ok=False
            for t in self.list[pos]:
                if t[0] is libro:
                    t[1] = libro.aut
                    t[2] = libro.esp
                    t[3] = libro.title
                    t[4] = libro.crit
                    ok = True
            if not ok:
                self.list[pos].append([libro,libro.aut,libro.esp,libro.title])
        else:
            self.list[pos]=[]
            self.list[pos].append([libro,libro.aut,libro.esp,libro.title])

    def getNombre(self,libro):
        pos=self.hashing(libro)
        for t in self.list[pos]:
                if t[0] is libro:
                    return t[3]
    def listado(self,esp):
        for i in range(0,self.size):
            if self.list[i] is not None:
                for t in self.list[i]:
                    if t[2] is esp:
                        print ('Libros del genero: '+esp)
                        print ('titulo: '+ t[3])
                        print ('autor: ' + t[1])

    def compraSegura (self,autor):
        k=0
        for i in range(0,self.size):
            if self.list[i] is not None:
                for t in self.list[i]:
                    if t[1] is autor:
                        self.aux[i].append([self.list[i],t[4]])
                        k+=1
        for i in range(0,k) :
            if self.aux[i] is not None:
                if t[1] is max:
                    print ('Libros con mejores criticas del autor: '+ autor)
                    print ('titulo: '+ self.aux[i].title)
                    print ('genero: ' + self.aux[i].esp)

l1= Libro('doors of perception','Aldus huxley',100,7,'divulgacion','un buen libro sobre psicologia')
l2= Libro('a happy world','Aldus huxley',155,9,'literatura','un buena critica a la sociedad moderna')
l3= Libro('sign of the four','Arthur Conan Doyle',10,7,'literatura','de los mejores de sherlock holmes')
lib=Libreria(45)
lib.crear(l1)
lib.crear(l2)
lib.crear(l3)
lib.listado('literatura')
lib.compraSegura('Aldus huxley')
