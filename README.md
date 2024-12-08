# trabajosIOT
Documentación de practicas de IoT vistas en clase
# Proyecto: Serie de LEDs con Arduino

Este proyecto consiste en la implementación de un programa en Arduino que controla una serie de LEDs. Los LEDs se encienden de forma secuencial según un intervalo de tiempo configurado, creando un efecto visual dinámico.

## Materiales
- **LEDs**: La cantidad depende de los pines digitales disponibles en la placa Arduino.
- **Jumpers**: Uno más que la cantidad de LEDs para la conexión al puerto GND.
- **Resistencias de 220 ohmios**: Una por cada LED.
- **Placa Arduino**: Compatible con el IDE de Arduino.
- **Laptop o computadora**: Para programar y cargar el código en la placa.
- **Cable USB**: Para conectar la placa Arduino a la computadora.
- **IDE de Arduino**: Disponible en [https://www.arduino.cc/](https://www.arduino.cc/).

## Instrucciones de implementación
### Paso 1: Configuración del circuito
1. Asigna un puerto digital del Arduino para cada LED. Por ejemplo, usa los pines del 0 al 13.
2. Conecta una resistencia de 220 ohmios en serie con cada LED.
3. Conecta el cátodo (pata corta) de cada LED al GND de la placa Arduino.
4. Conecta el ánodo (pata larga) de cada LED al puerto digital correspondiente mediante jumpers.

# Semafóro
En este documento, se puede ver la implementación de un archivo de arduino, donde se realizo un semaforo para carros, que con un tiempo especificado con el que cambiaran de color.
# LDR 
En este documento, se puede ver la implementación de un archivo de arduino, donde se realizo un trabajo usando el componente LDR que nos sirvio para obtener el valor de luz del ambiente.
# LCD+LDR
En este documento se utilizó el componente de la pantalla LCD y el componente fotoresistor (LDR). En esta implementación, se obtenían datos del fotoresistor y se mostraban en la pantalla LCD.
# Ultrasonico+serie
En este archivo se utilizaron los componentes de la pantalla LCD y los LED. Los LED se encendían conforme un objeto se acercaba al sensor. Si la distancia inicial era de 30 cm, se encendía un LED. A medida que el objeto se acercaba en intervalos de 5 cm, se encendía un LED adicional, hasta que los 5 LED estuvieran encendidos, indicando la distancia mínima posible al sensor.
# Ultranico+LCD
En este archivo se utilizaron la pantalla LCD y el sensor ultrasónico. Estos componentes sirvieron para mostrar en la pantalla la distancia detectada por el sensor hasta localizar un objeto.
# RGB 
En este archivo utilizamos el componente RGB, un LED que puede alternar entre diferentes colores sin la necesidad de usar LEDs individuales de un solo color. En clase, lo empleamos para proyectar diversos colores.
# DHT-11
Utilizamos este sensor para medir la temperatura del ambiente.
# Examen
El examen consistía en conectar un LED RGB y un sensor DHT11 a la placa Arduino. Si la temperatura detectada era mayor a 28°C, el LED se encendía de color rojo; si era menor a 28°C, se encendía de color verde. Había otra condición, que no recuerdo, para encender el color azul.
