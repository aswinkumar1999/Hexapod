# Hexapod

## Hardware 

Required 

* [Hexapod Chassis](https://www.aliexpress.com/item/32853213894.html?spm=a2g0s.9042311.0.0.27424c4dPjmhZh) - 22$
* [Servo Motors - 20](https://www.aliexpress.com/item/32845794687.html?spm=a2g0s.9042311.0.0.27424c4dPjmhZh) - 15$
* [SMPS 5V 4A](https://www.aliexpress.com/item/32879492108.html?spm=a2g0s.9042311.0.0.27424c4dValBa9) - 4$
* 2 x [16-Channel Servo Motor Driver](https://www.amazon.in/gp/product/B072TCX3QP/ref=ppx_yo_dt_b_asin_title_o06_s00?ie=UTF8&psc=1) - 11$
* [Hex Spacer Nylon](https://www.amazon.in/gp/product/B07DSWDCND/ref=ppx_yo_dt_b_asin_title_o07_s00?ie=UTF8&psc=1) - 3$
* [NodeMcu ESP8266](https://www.amazon.in/gp/product/B07DSWDCND/ref=ppx_yo_dt_b_asin_title_o07_s00?ie=UTF8&psc=1) - ~5$
* [IMU (Optional ) - MPU-6050](https://www.amazon.in/dp/B008BOPN40/ref=dp_cerb_1) - ~4$ 
* Wires and Other Tools

Approx Total  : ~70$

![My Final build](/images/1.png?raw=true "Result")


## Electronics 

I planned on using a NodeMcu as to enable communication with WiFi with the Bot post building it.

I am using the I2C bus to Communicate with both of PCA9685 and IMU ( MPU-6050 ) , Here I use a Pull-up resistor (220 Ohms 1% Tolerance )  for the I2C bus. 

I built a Board with the PCB with Male and Female headers to attach and remove the modules.

![Board](/images/3.png?raw=true "Board")

All the Modules would be attached to this and we have the Female header for Two main purposes 

* Power all the Modules using the SMPS
* In case of Debugging, Would be easier to find out the problem.

![Circuit](/images/2.png?raw=true "Result") 

** Fritzing Circuit Yet to be uplaoded ** 

## Software 

There haven't been a lot of progress in the Software as the Electronics and Hardware part consumed lot of Time until Now.

#### Approach for Standing up : 

I have tried making it standing up , but it slips a good number of times before attaing it's stability.One possible explanation is the COM of the Pod is Towards one side of it rather than being in the center.

