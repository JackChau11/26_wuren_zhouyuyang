#!/bin/bash

cp Test.cpp Test.cpp.bak

# 创建结果文件
echo "C, gamma, accuracy" > results.csv

# 循环参数组合
for C in 0.1 1 10 100; do
  for gamma in 0.1 0.5 1 2; do
    echo "Testing C=$C, gamma=$gamma"

    # 替换占位符
    sed -e "s/C_VALUE/$C/g" -e "s/GAMMA_VALUE/$gamma/g" Test.cpp.bak > Test_temp.cpp

    # 编译
    g++ -o test Test_temp.cpp svm.cpp IrisPrediction.cpp -lm -O2

    # 运行并捕获输出
    ./test > output.txt

    # 从输出中提取准确率（假设输出格式如 "Accuracy: 96.6667%"）
    acc=$(grep "Accuracy:" output.txt | awk '{print $NF}' | sed 's/%//')

    # 保存到 CSV
    echo "$C, $gamma, $acc" >> results.csv

    # 显示结果
    cat output.txt
    echo "-----------------------------------"
  done
done

# 清理临时文件
rm Test_temp.cpp test output.txt

echo "实验完成！结果保存在 results.csv"