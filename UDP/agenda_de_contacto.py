import os

contactos = []
class Contacto:
    self.nombre = ""
    self.apellido = ""
    self.telefono = ""
    self.email = ""

def limpiar():
    os.system("cls")

limpiar()

def menu(:)
    print("Bienvenido a la libreta")
    print("Agregar contacto")
    print("Buscar contacto")
    print("Eliminar contacto")
    print("Para salir, pulse 0 ")
    opcion = input("Escriba una opcion:")
    if opcion =="1":
        limpiar()
        print("agregue el contacto")
        contacto= new Contacto()
        contacto.nombre = imput("Escriba nombre:")
        contacto.apellido = imput("Escriba apellido:")
        contacto.telefono = imput("Escriba telefono:")
        contacto.email = imput("Escriba email:")
        contactos.insert(contacto)
        menu()

    elif opcion == "2":
        print("busque el contacto")
        imput()
        menu()


    elif opcion == "3":
        print("elimine el contacto")
        imput()
        menu()


    elif opcion == "0";
    print("Salir")
    imput()

else:
    print("escriba una opcion valida")
    imput()
    menu()
