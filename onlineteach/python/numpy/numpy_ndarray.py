# 載入 numpy 套件

from typing import no_type_check
import numpy as np

# 建立一維陣列

data=np.array([3, 2, 6, 4])
print(data)
data=np.empty(4)  # 創造一個有四個資料的一維陣列，資料未指定
print(data)
data=np.zeros(3)
print(data)
data=np.ones(3)
print(data)
data=np.arange(5)
print(data)

# 建立二維陣列

data=np.array([  # 3x3的二維陣列
    [2,3,2],
    [1,5,2],
    [4,2,1]
])
print(data)
data=np.empty([3,3])  #  3x3二維陣列，資料未指定
print(data)
data=np.ones([2,3])  # 2x3 二維陣列資料都是1 
print(data)

# 建立三維陣列

data=np.array([     # 2x2x2 三維振烈
    [
        [3,1],[1,2]
    ],
    [
        [2,5],[10,2]
    ]
])
print(data)
data=np.zeros([3,1,3])      # 3x1x3 資料都是0
print(data)

# 建立四維陣列

data=np.array([     #  1x1x2x3  四維陣列
    [
        [
            [3,2,1],
            [5,5,10]
        ]
    ]
])
print(data)
data=np.ones([2,1,1,2])
print(data)