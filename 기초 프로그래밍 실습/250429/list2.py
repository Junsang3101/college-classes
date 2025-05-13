nums1 = []
nums2 = []
value = 0

def swap(n1, n2):
    tmp = n1
    n1 = n2
    n2 = tmp

for i in range(100):
    nums1.append(value)
    nums2.append(0)
    value += 2

for i in range(100):
    nums2[i] = nums1[99-i]
    print(f"{nums1[i]} {nums2[i]}");
