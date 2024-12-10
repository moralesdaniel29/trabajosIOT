# Practicas de clase
Documentación de practicas de IoT vistas en clase

# Proyecto: Serie de LEDs con Arduino

Este proyecto implementa un programa en Arduino que controla una serie de LEDs. Los LEDs se encienden y apagan de forma secuencial con un intervalo de 500 ms, creando un efecto visual dinámico.

## Materiales
- **7 LEDs**: Uno para cada puerto digital asignado en el código.
- **Jumpers**: 8 (7 para los LEDs y 1 para conectar al puerto GND de la placa).
- **7 Resistencias de 220 ohmios**: Una para cada LED.
- **Placa Arduino**: Compatible con el IDE de Arduino.
- **Laptop o computadora**: Para programar y cargar el código en la placa.
- **Cable USB**: Para conectar la placa Arduino a la computadora.
- **IDE de Arduino**: Descargable desde [https://www.arduino.cc/](https://www.arduino.cc/).

## Código
El siguiente código configura 7 LEDs conectados a los pines digitales de la placa Arduino y los controla para encenderlos de forma secuencial con un retardo de 500 ms:

## Diagrama
![image](https://github.com/user-attachments/assets/0abf399e-7662-4c7e-b268-fcfd53a10be4)

**Conexión de los LEDs**:
   - Conecta el cátodo (pata corta) de cada LED al puerto GND de la placa Arduino.
   - Conecta el ánodo (pata larga) al pin digital correspondiente usando resistencias de 220 ohmios.



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

## Diagrama
![image](https://github.com/user-attachments/assets/de9b87e9-7f92-41f2-b172-1c22966d3600)



# Proyecto: Sensor de Luz con LDR y Arduino

Este proyecto utiliza un sensor LDR (Light Dependent Resistor) para medir la intensidad de luz en el ambiente y controlar un LED en función de la cantidad de luz detectada.

## Materiales
- **1 LDR**: Para medir la intensidad lumínica.
- **1 Resistencia de 10k ohmios**: Para crear un divisor de tensión junto con el LDR.
- **1 LED Azul**: Indicador visual que se enciende en condiciones de poca luz.
- **4 Jumpers**: Para realizar las conexiones.
- **Placa Arduino**: Compatible con el IDE de Arduino.
- **Laptop o computadora**: Para escribir y cargar el código en la placa.
- **Cable USB**: Para conectar la placa Arduino.
- **IDE de Arduino**: Descargable desde [https://www.arduino.cc/](https://www.arduino.cc/).

## Código
El siguiente código configura un sensor LDR conectado al pin analógico A5 y un LED conectado al pin digital 2. Si el nivel de luz es inferior al umbral establecido (valor mayor a 300), el LED se enciende:

## Diagrama
![image](https://github.com/user-attachments/assets/957275c2-0f10-419b-b545-3830e76af773)



# Proyecto: Intensidad Lumínica con LCD y LDR

Este proyecto utiliza un sensor LDR para medir la intensidad lumínica del ambiente y mostrar esos valores en una pantalla LCD. Además, un LED azul se enciende o apaga según el valor de luz medido, proporcionando una retroalimentación visual.

## Materiales
- **1 LCD (LiquidCrystal)**: Pantalla para mostrar los datos de intensidad lumínica.
- **1 LDR**: Sensor para medir la intensidad lumínica del ambiente.
- **1 LED Azul**: Indicador visual que se enciende o apaga dependiendo de la cantidad de luz detectada.
- **1 Resistencia de 10k ohmios**: Para crear un divisor de tensión con el LDR.
- **2 Jumpers**: Para las conexiones a GND y 5V.
- **Placa Arduino**: Compatible con el IDE de Arduino.
- **Laptop o computadora**: Para escribir y cargar el código en la placa Arduino.
- **Cable USB**: Para conectar la placa Arduino.
- **IDE de Arduino**: Descargable desde [https://www.arduino.cc/](https://www.arduino.cc/).

## Código
El siguiente código configura un sensor LDR conectado al pin analógico A5 y un LED azul conectado al pin digital 10. La intensidad lumínica se lee y se muestra en la pantalla LCD. Si la luz medida es mayor que el umbral de 700, el LED se enciende; de lo contrario, se apaga.

## Diagrama
![image](https://github.com/user-attachments/assets/7d4f9369-78d5-4ab4-934b-1de58a4d33cb)



# Proyecto: Sensor Ultrasonido y LEDs

Este proyecto utiliza un sensor de ultrasonido para medir la distancia de un objeto y visualizarla mediante la activación de diferentes LEDs en función de la proximidad del objeto al sensor. A medida que la distancia disminuye, los LEDs se encienden uno por uno, proporcionando una retroalimentación visual.

## Materiales
- **1 Sensor Ultrasonido**: Para medir la distancia del objeto en centímetros.
- **5 LEDs** (Rojo, Azul, Verde, Amarillo, Blanco): Indicadores visuales que se encienden según la distancia medida.
- **Resistencias**: Para conectar los LEDs de forma segura.
- **Placa Arduino**: Compatible con el IDE de Arduino.
- **Laptop o computadora**: Para escribir y cargar el código en la placa Arduino.
- **Cable USB**: Para conectar la placa Arduino.
- **IDE de Arduino**: Descargable desde [https://www.arduino.cc/](https://www.arduino.cc/).
## Código
El siguiente código, configura un sensor Ultrasonico, para que encienda led por led cada 5 centimetros que se acerque.
## Diagrama
![image](https://github.com/user-attachments/assets/994d1ad4-6f97-44df-9c85-b2c1ee3b23d9)



# Ultranico+LCD
En este archivo se utilizaron la pantalla LCD y el sensor ultrasónico. Estos componentes sirvieron para mostrar en la pantalla la distancia detectada por el sensor hasta localizar un objeto.
# Ultrasonido + LCD
Este proyecto utiliza un sensor de ultrasonido para medir la distancia a un objeto y visualiza esa distancia en una pantalla LCD. Además, enciende un LED cuando el objeto está a menos de 30 cm de distancia.

## Materiales
- **1 Sensor Ultrasonido** : Para medir la distancia entre el sensor y el objeto en centímetros.
- **1 Pantalla LCD** : Para mostrar la distancia medida.
- **1 LED**: Se enciende cuando la distancia es menor a 30 cm.
- **Resistencias**: Para conectar el LED de forma segura.
- **Placa Arduino**: Compatible con el IDE de Arduino.
- **Cable USB**: Para conectar la placa Arduino.
- **IDE de Arduino**: Descargable desde [https://www.arduino.cc/](https://www.arduino.cc/).

## Diagrama
![image](https://github.com/user-attachments/assets/71dcfb80-bee8-43bf-83b1-8e1468c6cda5)



# RGB LED
En este proyecto, utilizamos un LED RGB, el cual puede generar una amplia gama de colores combinando tres colores básicos: rojo, verde y azul. Cada color se controla mediante un valor de intensidad, que varía entre 0 (apagado) y 255 (máxima intensidad). Este código permite cambiar el color del LED RGB a diferentes tonos según las combinaciones de estos valores.

## Materiales
- **1 LED RGB**: Un LED común que tiene tres pines para controlar los colores rojo, verde y azul.
- **Placa Arduino**: Compatible con el IDE de Arduino.
- **Cable USB**: Para conectar la placa Arduino.
- **Resistencias**: Para limitar la corriente que pasa a través de los pines del LED.
- **IDE de Arduino**: Descargable desde [https://www.arduino.cc/](https://www.arduino.cc/).

## Descripción del Funcionamiento
En este código se configura un LED RGB para proyectar varios colores mediante la combinación de señales en los pines correspondientes al rojo, verde y azul.

- **RGB LED**:
  - El pin **rojo** controla el color rojo.
  - El pin **verde** controla el color verde.
  - El pin **azul** controla el color azul.

## Diagrama
![image](https://github.com/user-attachments/assets/7d3ad24b-7651-4d09-a16a-d39d6c14de7c)



# DHT-11 Sensor de Temperatura y Humedad

En este proyecto se utiliza el sensor **DHT-11** para medir la temperatura y la humedad del ambiente. Los datos obtenidos se visualizan en el monitor serie de Arduino, y un LED se enciende cuando la temperatura alcanza un umbral determinado.

## Materiales

- **Sensor DHT-11**: Sensor de temperatura y humedad digital.
- **LED**: Se usa para indicar que la temperatura ha alcanzado un umbral determinado.
- **Resistor de 10kΩ**: Para conectar el sensor DHT-11.
- **Placa Arduino**: Compatible con el IDE de Arduino.
- **Cable USB**: Para conectar la placa Arduino.
- **IDE de Arduino**: Descargable desde [https://www.arduino.cc/](https://www.arduino.cc/).

## Descripción del Funcionamiento
El código configura el sensor **DHT-11** para leer la temperatura y la humedad del ambiente. La temperatura y la humedad se muestran en el monitor serie. Además, un **LED** se enciende si la temperatura supera los **28°C**. El sensor **DHT-11** se conecta al pin digital **3** del Arduino, mientras que el **LED** se controla desde el pin digital **2**.
- **DHT-11**: Se comunica con el Arduino utilizando la biblioteca **DHT** para obtener las mediciones de temperatura y humedad.
- **LED**: Se enciende cuando la temperatura es igual o mayor a 28°C.

## Diagrama
![image](https://github.com/user-attachments/assets/67bfa5d4-ebc1-4fec-88ae-d7a9ac0d760a)



# Examen: Proyecto LED RGB y Sensor DHT11

El examen consistía en conectar un LED RGB y un sensor DHT11 a la placa Arduino. Si la temperatura detectada era mayor a 28°C, el LED se encendía de color rojo; si era menor a 28°C, se encendía de color azul. 

## Materiales

- **Arduino Uno**: Placa base para controlar el proyecto.
- **LED RGB**: LED de tres colores (rojo, verde y azul) que puede mezclar colores para mostrar diversos estados.
- **Sensor DHT11**: Sensor para medir la temperatura y la humedad del ambiente.
- **Resistor de 220Ω**: Usado para limitar la corriente al LED.
- **Cables de conexión**: Para realizar las conexiones entre los componentes y la placa Arduino.
- **Placa de protoboard**: Para organizar los componentes de forma temporal mientras se realiza el montaje.
- **IDE de Arduino**: Entorno de desarrollo para programar y cargar el código en la placa Arduino.

## Diagrama
![image](https://github.com/user-attachments/assets/2e70b121-0fd7-443b-bbc1-cdefe94df592)


# Display de 7 segmentos equipo de Orlando

La exposición impartida por mis compañeros se centró en la implementación de un Display de 7 segmentos programado para sortear números del 0 al 9. En cualquier momento, el proceso podría detenerse, y el Display de 7 segmentos mostraría el número en el que se detuvo.

## Materiales

- **Arduino Uno**: Placa de microcontrolador para ejecutar el programa.
- **Display de 7 segmentos**: Para mostrar los números generados.
- **Cables de conexión**: Para conectar los componentes con la placa Arduino.
- **Pulsador**: Para alternar entre los estados de funcionamiento y detenerse.
- **Resistencias**: Para limitar la corriente en los pines del display y el pulsador.
- **Protoboard**: Para organizar y montar los componentes de forma temporal.
- **IDE de Arduino**: Entorno de desarrollo para programar y cargar el código en la placa.

## Conexiones

1. **Pulsador**: Conectado al pin digital 2 y GND. Asegúrate de utilizar una resistencia pull-down si es necesario.
2. **Display de 7 segmentos**: Los pines del display deben conectarse a los pines digitales del Arduino del 3 al 10. Configura cada segmento según la matriz `numero` en el código.
3. **Pin A0**: Utilizado para generar la semilla de números aleatorios.

## Código

El siguiente código controla el sistema, generando números aleatorios y mostrándolos en el display de 7 segmentos. 

## Diagrama
![Imagen de WhatsApp 2024-11-28 a las 09 00 39_1f765229](https://github.com/user-attachments/assets/a42c5bd7-a02c-47fa-8274-690d771511c3)



# Joystick del equipo de Emmanuel

La exposición que impartieron mis compañeros trato de implementar un joystick que conforme fuera movido encenderia un led puesto que cada lado en donde apuntara el joystick es como encenderia uno de los leds que estarian colocados en forma de cruz para ver como realmente detectaba el moviento en los leds.

## Materiales

- **Arduino Uno**: Placa de microcontrolador para ejecutar el programa.
- **Joystick**
- **Cables de conexión**: Para conectar los componentes con la placa Arduino.
- **4 LEDs**
- **4 Pulsadores**: Para alternar entre los estados de funcionamiento y detenerse.
- **Resistencias**
- **Protoboard**: Para organizar y montar los componentes de forma temporal.
- **IDE de Arduino**: Entorno de desarrollo para programar y cargar el código en la placa.

## Conexiones

1. **Joystick**: 
   - Eje X conectado al pin analógico `A0`.
   - Eje Y conectado al pin analógico `A1`.
   - Botón (SW) conectado al pin digital `6` con una resistencia pull-up interna.

2. **LEDs**:
   - LED Arriba conectado al pin digital `8`.
   - LED Abajo conectado al pin digital `10`.
   - LED Izquierda conectado al pin digital `11`.
   - LED Derecha conectado al pin digital `9`.
   - LED Pulsación conectado al pin digital `12`.

## Código

El siguiente código controla el sistema, detectando el movimiento del joystick y encendiendo el LED correspondiente según la dirección.

## Diagrama
![Imagen de WhatsApp 2024-11-28 a las 09 49 35_c15482d6](https://github.com/user-attachments/assets/e665b7f8-8a26-42ed-81a9-5d9a4d705d0d)




#  Expocisión de mi equipo usando el Teclado de Membrana Matricial de 4x4.

En la exposición que impartí con mi equipo, propusimos usar el teclado 4x4 para simular un verificador de acceso a un lugar a través de una contraseña. Si ingresamos la contraseña correcta, se encenderá un LED verde, y en caso de que sea incorrecta, se encenderá un LED rojo.

## Materiales

- **Arduino Uno**: Placa de microcontrolador para ejecutar el programa.
- **Cables de conexión**: Para conectar los componentes con la placa Arduino.
- **Teclado 4x4**: Dispositivo de entrada para capturar contraseñas.
- **2 LEDs**: Indicadores visuales para acceso correcto (verde) o incorrecto (rojo).
- **Resistencias**: Para limitar la corriente en los LEDs.
- **Protoboard**: Para organizar y montar los componentes de forma temporal.
- **IDE de Arduino**: Entorno de desarrollo para programar y cargar el código en la placa.
- **Librería Keypad**: Necesaria para gestionar la interacción con el teclado matricial.

## Conexiones

1. **Teclado Matricial 4x4**:
   - Conectar los pines de las filas a los pines digitales `9`, `8`, `7` y `6` del Arduino.
   - Conectar los pines de las columnas a los pines digitales `5`, `4`, `3` y `2` del Arduino.

2. **LEDs**:
   - LED verde conectado al pin digital `11`.
   - LED rojo conectado al pin digital `12`.

## Código
El siguiente código gestiona el ingreso de contraseñas y la verificación de acceso mediante un teclado 4x4.

## Diagrama
![Imagen de WhatsApp 2024-12-09 a las 19 25 55_4cd40720](https://github.com/user-attachments/assets/8c7a7f7d-6b8f-4920-a7d5-7e4695d7653f)





# Expocisión del equipo de Alejandro usaron Botones y Leds.

En esta exposición impartida por mis compañeros, usaron botones, cada uno conectado a un LED para que, cuando sea presionado, este se encienda y apague. En caso de que se presionen los 3 botones simultáneamente, no debe mostrar nada.

## Materiales

- **Arduino Uno**: Placa de microcontrolador para ejecutar el programa.
- **Cables de conexión**: Para conectar los componentes con la placa Arduino.
- **3 Botones**: Dispositivos para controlar los LEDs.
- **3 LEDs**: Indicadores visuales de colores rojo, verde y azul.
- **Resistencias**: Para limitar la corriente en los LEDs.
- **Protoboard**: Para organizar y montar los componentes de forma temporal.
- **IDE de Arduino**: Entorno de desarrollo para programar y cargar el código en la placa.

## Conexiones

1. **Botones**:
   - Botón rojo al pin digital `2`.
   - Botón verde al pin digital `3`.
   - Botón azul al pin digital `4`.

2. **LEDs**:
   - LED rojo al pin digital `9`.
   - LED verde al pin digital `10`.
   - LED azul al pin digital `11`.

## Código

El siguiente código gestiona el encendido de LEDs mediante botones y asegura que, si los tres botones son presionados simultáneamente, no se encienda ningún LED.

## Diagrama
![Imagen de WhatsApp 2024-11-29 a las 08 31 55_b768c48a](https://github.com/user-attachments/assets/5779942a-d43f-42c6-aec4-af10b86225f4)




# Expocisión del equipo de Iris usaron un Servo motor y un Sensor Ultrasonico

En esta exposición impartida por mis compañeros, usaron un servo motor y un sensor ultrasónico para simular la apertura de un bote de basura sin necesidad de usar las manos. Al acercarse al bote, este se abriría por un tiempo de 3 segundos, encendería un LED verde y, después, se cerraría.

## Materiales

- **Arduino Uno**: Placa de microcontrolador para ejecutar el programa.
- **Cables de conexión**: Para conectar los componentes con la placa Arduino.
- **Resistencias**: Para limitar la corriente en los LEDs.
- **Protoboard**: Para organizar y montar los componentes de forma temporal.
- **Servo motor**: Para simular la apertura de la tapa del bote.
- **Sensor ultrasónico HC-SR04**: Para detectar la proximidad del usuario.
- **LEDs**: Indicadores visuales (rojo y verde).
- **Librería Servo.h**: Para controlar el servo motor.
- **IDE de Arduino**: Entorno de desarrollo para programar y cargar el código en la placa.

## Conexiones

1. **Sensor ultrasónico HC-SR04**:
   - Pin `Trig` conectado al pin digital `9`.
   - Pin `Echo` conectado al pin digital `10`.

2. **Servo motor**:
   - Cable de control conectado al pin digital `3`.

3. **LEDs**:
   - LED rojo conectado al pin digital `5`.
   - LED verde conectado al pin digital `6`.

## Código

El siguiente código controla la apertura automática de la tapa del bote de basura y la iluminación de los LEDs según la distancia detectada por el sensor ultrasónico.





# Expocisión del equipo de Fernando usaron un Zumbador

En esta exposición impartida por mis compañeros, usaron un Zumbador para emitir una notas simulando una alarma.

## Materiales





