# Max Subarray Algorithm (Thuật toán Tìm Tổng Lớn Nhất Của Phân Đoạn Con)

Thuật toán này được sử dụng để tìm tổng lớn nhất của một phân đoạn con trong một mảng số nguyên.

## Cấu trúc thư mục

```angular2html
Kadanes_algorithm/
├── main.cpp: File chính chứa mã nguồn của thuật toán Kadane
└── README.md: Tài liệu hướng dẫn này
```


## Hướng dẫn cài đặt và sử dụng

### 1. Cài đặt môi trường phát triển C++:

- Bạn cần một trình biên dịch C++ như GCC (trên Linux/Mac) hoặc MinGW (trên Windows).
- Nếu bạn sử dụng hệ điều hành Windows, hãy cài đặt MinGW và thêm đường dẫn của nó vào biến môi trường PATH.

### 2. Viết và lưu mã nguồn:

- Sao chép mã nguồn ở trên vào một tệp mới có tên main.cpp.

### 3. Biên dịch mã nguồn:

- Mở terminal hoặc command prompt.
- Di chuyển đến thư mục chứa tệp main.cpp.
- Chạy lệnh sau để biên dịch mã nguồn:
```
g++ main.cpp -o max_subarray
```
- Lệnh này sẽ biên dịch mã nguồn và tạo ra một tệp thực thi có tên max_subarray.

### 4. Chạy chương trình:

- Sau khi biên dịch thành công, chạy chương trình bằng lệnh sau:
```
./max_subarray   # Trên Linux/Mac
max_subarray.exe # Trên Windows
```
- Chương trình sẽ in ra kết quả là tổng lớn nhất của phân đoạn con trong mảng đã cho.

## Giải thuật

- Thuật toán này được gọi là Thuật toán Kadane. Nó là một giải pháp hiệu quả để tìm tổng lớn nhất của một phân đoạn con trong mảng, với độ phức tạp thời gian là O(n).

- Cách hoạt động:

  - Biến max_current: đại diện cho tổng lớn nhất của phân đoạn con kết thúc tại vị trí hiện tại.

  - Biến max_global: đại diện cho tổng lớn nhất tìm được cho đến thời điểm hiện tại trong toàn bộ mảng.

  - Khi duyệt qua mảng, tại mỗi phần tử, chúng ta quyết định xem nên bắt đầu một phân đoạn con mới từ phần tử hiện tại, hay tiếp tục phân đoạn con hiện tại bằng cách cộng phần tử đó vào.

   - Nếu max_current lớn hơn max_global, thì cập nhật max_global. Cuối cùng, giá trị của max_global là tổng lớn nhất của một phân đoạn con trong mảng.


