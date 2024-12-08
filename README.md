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

# Proyecto: Semáforo con Arduino

Este proyecto consiste en la implementación de un semáforo usando una placa Arduino y LEDs. Los colores cambian de forma secuencial, simulando el funcionamiento de un semáforo real, con tiempos específicos configurados para cada luz.

## Materiales
- **3 LEDs** (rojo, amarillo y verde): Representan las luces del semáforo.
- **4 Jumpers**: Uno más que la cantidad de LEDs para la conexión al puerto GND.
- **3 Resistencias de 220 ohmios**: Una para cada LED.
- **Placa Arduino**: Cualquier modelo compatible con el IDE de Arduino.
- **Laptop**: Para escribir y cargar el código.
- **Cable USB**: Para conectar la placa Arduino.
- **IDE de Arduino**: Descargable desde [https://www.arduino.cc/](https://www.arduino.cc/).

## Configuración del Circuito
**Conexión de los LEDs**:
   - Conecta el cátodo (pata corta) de cada LED al puerto GND de la placa Arduino.
   - Conecta el ánodo (pata larga) al pin digital correspondiente (ejemplo: pin 13 para rojo, 12 para amarillo, 11 para verde) usando resistencias de 220 ohmios.


# Proyecto: Sensor de Luz con LDR y Arduino

Este proyecto implementa un programa en Arduino utilizando un sensor LDR (Light Dependent Resistor) para medir la intensidad de luz en el ambiente.

## Materiales
- **1 LDR**: Para medir la intensidad lumínica.
- **2 Jumpers**: Uno para conectar al puerto GND y otro al puerto 5V de la placa.
- **1 Resistencia de 10k ohmios**: Para crear un divisor de tensión junto con el LDR.
- **Placa Arduino**: Compatible con el IDE de Arduino.
- **Laptop o computadora**: Para escribir y cargar el código.
- **Cable USB**: Para conectar la placa Arduino.
- **IDE de Arduino**: Descargable desde [https://www.arduino.cc/](https://www.arduino.cc/).

## Configuración del Circuito
1. **Conexión del LDR**:
   - Conecta un extremo del LDR al pin analógico A0 de la placa Arduino.
   - Conecta el otro extremo del LDR al puerto de 5V.
   
2. **Conexión de la Resistencia de 10k ohmios**:
   - Conecta un extremo de la resistencia al pin A0 (junto con el LDR).
   - Conecta el otro extremo al puerto GND.


# Proyecto: Visualización de Intensidad Lumínica con LCD y LDR

Este proyecto combina una pantalla LCD y un sensor LDR para medir y mostrar la intensidad lumínica en tiempo real. Los datos obtenidos del fotoresistor se presentan en la pantalla LCD conectada a una placa Arduino.

## Materiales
- **1 LCD**: Pantalla para mostrar los datos de intensidad lumínica.
- **1 LDR**: Sensor para medir la intensidad lumínica del ambiente.
- **2 Jumpers**: Para las conexiones a GND y 5V.
- **1 Resistencia de 10k ohmios**: Para crear un divisor de tensión con el LDR.
- **Placa Arduino**: Compatible con el IDE de Arduino.
- **Laptop o computadora**: Para escribir y cargar el código.
- **Cable USB**: Para conectar la placa Arduino.
- **IDE de Arduino**: Descargable desde [https://www.arduino.cc/](https://www.arduino.cc/).

## Configuración del Circuito
### Diagrama del circuito
![Circuito con LCD y LDR](CircuitDiagram_LCD_LDR.png)  
*(Incluye el diagrama de conexión para la pantalla LCD, el LDR y la resistencia)*




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
