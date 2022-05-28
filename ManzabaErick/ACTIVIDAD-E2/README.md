[![Prgramacion2.jpg](https://i.postimg.cc/t4LKvfMn/Prgramacion2.jpg)](https://postimg.cc/K1DpR9Fm)





## *PROGRAMAS EN C++ DE  MANZABA ERICK*
**Nombre completo:**

- Manzaba Pacheco Erick Jermayr 

**Correo electronico de contacto:**

- erickmanzaba04@gmail.com

**Link del video de la actividad B1**

- https://youtu.be/NhDQpIE6gAE

***PROGRAMA COMPARA***

En el programa compara podemos realizar una operacion comparativa de dos numeros al azar elegidos por el usuario con el fin de encontrar un numero mayor o igual a otro.

1. Ingresar los numeros a comparar.
2. El programa hará una comparacion entre los numeros.
3. El programa decidirá cual es el mayor o igual.
4. Se mostrara el resultado.

El programa de funcionalidad es: 
```md
float em_a,em_b; 
```
Y el programa de salida es:
```md
if(em_a==em_b) son iguales
if(em_a>em_b) el primero es mayor
```

- **Diagrama de flujo**

[![Manzaba-Erick-Compara.jpg](https://i.postimg.cc/Nfs1hjHR/Manzaba-Erick-Compara.jpg)](https://postimg.cc/K4WKBFQY)







- ***PROGRAMA CUENTA MONEDA***

El programa cuenta moneda se raliza para dar un conteo sobre la cantidad de monedas ingresadas por el usuario (25ctvs y 10ctvs) y ,a su vez, diferenciarlas entre si. 

1. Ingresar la cantidad de monedas.
2. Ingresar el valor de cada moneda.
3. El programa realizará una contabildad en base a las monedas ingresadas.
4. Se mostrará el resultado.

Dando una funcion como esta:
```md
int em_n,em_c=0,em_c1=0,em_c2=0;
float em_x,em_a=0,em_a1=0,em_a2=0,em_m=0.10;
```
Y el programa de salida es:
```md
if(em_x==em_m)
while(em_c>em_m);
```
- **Diagrama de flujo**

[![Manzaba-Erick-Cuenta-Moneda.jpg](https://i.postimg.cc/bJ6qsgmy/Manzaba-Erick-Cuenta-Moneda.jpg)](https://postimg.cc/JDBfFNwv)








***PROGRAMA PUNTO DE VENTA***

Este programa en c++ nos permitirá ingresar el precio y la cantidad de los productos adquiridos, calculando el iva, descuento y el programa va a mostrar el valor final.

1. Ingresar la cantidad de los productos.
2. Ingresar el iva.
3. Ingresar el descuento.
4. Ingresar el valor de cada producto.
5. El programa ejecutara un calculo de los productos agregando el iva y el descuento.
6. Se mostrará el resultado.

La funcionalidad es:
```md
float em_x,em_c=0,em_a=0,em_n,em_iva,em_des,em_vb,em_viva,em_vdes,em_vf;
```
Y la salida es:
```md
cout<<"El valor final a pagar es: ";
cout<<em_vf<<endl;
```
- **Diagrama de flujo**

[![Manzaba-Erick-Punto-Venta.jpg](https://i.postimg.cc/d06YxnP2/Manzaba-Erick-Punto-Venta.jpg)](https://postimg.cc/CZRXZGK5)







***PROGRAMA DE SUMA***

Este programa nos va a permitir realizar una suma rápida de algunos números dandonos un resultado exacto que sera mostrado al usuario.

1. Ingresar los numeros a sumar.
2. El programa hara una suma entre los numeros.
3. Se mostrará el resultado.

La funcionalidad es:
```md
int em_a,em_b,em_c,em_i;
```
Y la salida es:
```md
cout<<"la suma total es: "<<em_c;
cout<<endl;
```
- **Diagrama de flujo**

[![Manzaba-Erick-Suma-N.jpg](https://i.postimg.cc/mr8vwDCV/Manzaba-Erick-Suma-N.jpg)](https://postimg.cc/VS0Zsz7b)





***PROGRAMA DE CALCULO DE LA EDAD***

Con este programa de c++ podremos calcular la edad de una persona, esa edad será expuesta al público, lo cual es funcional para calcular edades de una forma veloz y eficaz.

1. Ingresar los datos que pide el programa.
2. El programa realizará los calculos respectivos para obtener un resultado exacto.
3. Se mostrará el resultado.

La funcionalidad es:
```md
int em_aa,em_ma,em_da,em_an,em_mn,em_dn,em_a,em_m,em_d;
```
La salida es:
```md
cout<<"La persona tiene "<<em_a<<" años "<<em_m<<" meses y "<<em_d<<" dias ";
```
- **Diagrama de flujo**

[![Manzaba-Erick-laedad.jpg](https://i.postimg.cc/rmsvYk9T/Manzaba-Erick-laedad.jpg)](https://postimg.cc/R6rsN28p)






***INSTALACION***

- **Dato curioso**

Para poder ejecutar los programas presentes en este README.md debemos instalar termux del siguiente link: https://termux.uptodown.com/android y una vez instalado termux lo actualizamos con los siguientes comandos:

```md
apt update 
apt upgrade
```
- **Descargar el repositorio**

1. Luego de actualizar a la version más reciente clonamos el directorio, por ejemplo: https://github.com/3RCK/mtp.git 
2. Y finalmente, con el comando "cd" podra acceder a los contenidos de la carpeta.

- **Compilar y ejecutar**
1. Para compilar un programa lo podras hacer con este comando "g++" seguido de "nombre del programa.cpp" luego "-o" y "nuevo nombre del programa".Ejemplo:

g++ ManzabaErick-SumaN.cpp -o ManzabaErick-SumaN

2. Para ejecutar el programa lo podremos hacer con el siguiente comando ./Nombre del programa (Compilado).Ejemplo:

./ManzabaErick-SumaN
