#include <iostream>
#include <vector>
#include <algorithm>

// Hàm maxSubArray tìm tổng lớn nhất của một phân đoạn con trong mảng.
int maxSubArray(const std::vector<int> &nums)
{
    // Khởi tạo biến max_current để lưu tổng lớn nhất tạm thời của phân đoạn con hiện tại
    int max_current = nums[0];

    // Khởi tạo biến max_global để lưu tổng lớn nhất toàn cục tìm được đến thời điểm hiện tại
    int max_global = nums[0];

    // Duyệt qua các phần tử trong mảng từ phần tử thứ hai (vì đã khởi tạo với phần tử đầu tiên)
    for (int i = 1; i < nums.size(); i++)
    {
        // Cập nhật max_current: chọn giữa việc bắt đầu một phân đoạn con mới tại nums[i]
        // hoặc tiếp tục phân đoạn con hiện tại
        max_current = std::max(nums[i], max_current + nums[i]);

        // Nếu max_current lớn hơn max_global, cập nhật max_global
        if (max_current > max_global)
        {
            max_global = max_current;
        }
    }

    // Trả về tổng lớn nhất của phân đoạn con
    return max_global;
}

int main()
{
    // Tạo một vector chứa các phần tử của mảng đầu vào
    std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    // Gọi hàm maxSubArray và in ra kết quả
    std::cout << "Tổng lớn nhất của phân đoạn con là: " << maxSubArray(nums) << std::endl;

    std::cin.get();

    return 0;
}
