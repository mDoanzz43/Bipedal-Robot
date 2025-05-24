# Đề Tài: Thiết Kế và Xây Dựng Robot 2 Chân

## 📌 Giới thiệu

Đây là bài tập lớn cuối kỳ của cá nhân bản thân
Mục tiêu của đề tài là thiết kế và chế tạo một robot 2 chân có khả năng đứng thẳng và thực hiện các cử động cơ bản như bước đi, nhún người, cúi chào... qua việc sử dụng các cơ cấu chấp hành và vi điều khiển

## 🧠 Ý tưởng thiết kế

- Robot có **2 chân**, mỗi chân gồm **4 bậc tự do**:
  - Khớp hông ngang (trái/phải)
  - Khớp hông dọc (trước/sau)
  - Khớp gối (gập/duỗi)
  - Khớp cổ chân (nghiêng)

- Dẫn động bằng **động cơ servo SG90**
- Điều khiển và cân bằng bằng **vi điều khiển Arduino UNO** và **cảm biến MPU6050**

## 🛠 Thiết kế cơ khí
- Thiết kế toàn bộ bằng phần mềm **SolidWorks**
![image](https://github.com/user-attachments/assets/f39d9575-336c-4fdc-a822-b74cbc4b529a)

  
- Tối ưu hóa theo hướng: nhỏ gọn, dễ thi công, phù hợp học tập
- Các part được liên kết bằng vít, keo và sử dụng vòng bi để tăng độ cân bằng
- Sản phâm thi công bằng tay 
  ![image](https://github.com/user-attachments/assets/c0e08d10-ddb3-48dd-86c7-6e61a767d7ed)


## ⚙️ Điều khiển

- Mã điều khiển lập trình bằng **Arduino C/C++**
- Kịch bản điều khiển gồm:
  - Thiết lập vị trí ban đầu
  - Di chuyển thẳng
  - Nhún người, cúi chào...
- Dữ liệu từ MPU6050 được đọc để điều chỉnh giữ cân bằng

## ✅ Kết quả

- Robot có thể đứng thẳng và thực hiện các chuyển động cơ bản
- Hệ thống hoạt động ổn định trong vài giờ thử nghiệm
- Mục tiêu tiếp theo: cải tiến thuật toán điều khiển để bước đi linh hoạt hơn
https://github.com/mDoanzz43/Bipedal-Robot/tree/main/Video

## Enjoy & Chill

