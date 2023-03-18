# init setup
1. ```pip install esptool```
note : with some Python installations that command may not work and you’ll receive an error. If that’s the case, try to install esptool.py with:
    ```pip3 install esptool```
    ```python -m pip install esptool```
    ```pip2 install esptool```

2. ```pip install setuptools```
3. After installing, you will have esptool.py installed into the default Python executables directory and you should be able to run it with the command esptool. In your Terminal window, run the following command:
```python -m esptool```

# Erasing the ESP32 Flash

1) Connect the ESP32 to your computer;

2) Open a Terminal window on your computer;

3) Hold the ESP32 BOOT button;

ESP32 BOOT button
4) Copy the following command to your terminal window and press Enter (continue holding the BOOT button).

``` python -m esptool --chip esp32 erase_flash ```
5) When the “Erasing” process begins, you can release the “BOOT/FLASH” button. After a few seconds, the ESP32 flash memory will be erased.

