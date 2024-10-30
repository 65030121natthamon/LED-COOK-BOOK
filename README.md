## แนวทางการทำงาน LED-COOK-BOOK
### ESP32 Glow Trio 
#### ระบุตัวอย่างที่ใช้ 
- นำตัวอย่าง Blink Example ปรับแก้โค้ดเพื่อควบคุม LED สามดวงให้กระพริบสลับกันบนขา GPIO
![image](https://github.com/user-attachments/assets/02d8de89-4167-46e9-95ba-318efb54ad71)

#### ระบุว่า จะแก้ไขตรงไหนบ้าง เพื่ออะไร
แก้ไขการทำงาน
- LED GPIO 5, 17, และ 18 ใช้ led1, led2, และ led3
- ปรับโค้ดให้ LED สามดวงกระพริบสลับกันแต่ละดวงจะติด (ON) และดับ (OFF) ตามลำดับ
- printf() เพื่อแสดงสถานะว่า LED ดวงไหนกำลังเปิดอยู่บน Serial Monitor
  ![image](https://github.com/user-attachments/assets/7fb12d86-a0c6-48b9-83c5-52f967981110)

#### แสดงขั้นตอนการทำ project
- เขียนโค้ดในไฟล์ main.c
- กำหนดค่า GPIO และโหมด LED
- กำหนดค่า GPIO ที่จะใช้ในการควบคุม LED 
- เลือก build เพื่อทำการตรวจสอบโค้ด
- เลือก flash เพื่ออัพโหลดโปรแกรมไปยังบอร์ด ESP32
- เลือก monitor เพื่อเปิด Serial Monitor 
#### แสดงผลการทำ project
- โปรแกรมแสดงผล ไฟLEDกระพริบ LED1,2,3 ตามลำดับ
![image](https://github.com/user-attachments/assets/c7b6ef34-8541-45f8-87bc-d922b4390e20)

#### สรุปผลการทำ project 
- โปรเจคนี้ควบคุมลำดับการกระพริบของ LED บน ESP32 ทำให้ LED สามดวงกระพริบสลับกันอย่างต่อเนื่อง
- สามารถนำไปประยุกต์ใช้ในการควบคุมLEDให้เป็นไปตามลำดับที่ต้องการ
