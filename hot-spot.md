[wi-fi](https://help-wifi.com/nastrojka-virtualnoj-wi-fi-seti/ne-rabotaet-mobilnyj-xot-spot-v-windows-10-ne-poluchaetsya-razdat-wi-fi/)

C:\Windows\system32>netsh wlan  set hostednetwork mode=allow ssid=budo key=123456789  
C:\Windows\system32>netsh wlan start hostednetwork  
C:\Windows\system32>netsh wlan stop hostednetwork  

Вы можете использовать компьютер с Windows 10 в качестве мобильной точки доступа, чтобы раздавать интернет другим устройствам по Wi-Fi. Для этого вам нужно:
Проверить, поддерживает ли ваш Wi-Fi адаптер режим размещенной сети (Ad-Hoc). Это можно сделать с помощью команды netsh wlan show drivers в командной строке. 
Включить функцию мобильный хот-спот в настройках Windows 10. Это можно сделать в Параметры > Сеть и Интернет > Мобильный хот-спот. Вам нужно выбрать подключение к интернету и Wi-Fi, задать имя и пароль для сети и включить переключатель «Разрешить использование моего интернет-соединения на других устройствах». 
Подключить другие устройства к вашему мобильному хот-споту по имени и паролю, которые вы задали. Вы можете подключить до восьми устройств одновременно. 

