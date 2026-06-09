#!/bin/bash

# 原始源文件
SOURCE="Q1.cpp"
# 可执行文件临时名称
EXEC="gradient_descent"

# 学习率列表
learning_rates=( 0.009 0.1 0.125 0.15  0.16 0.17 0.18)

CXX="g++"
CXXFLAGS="-std=c++11"

# 检查源文件是否存在
if [ ! -f "$SOURCE" ]; then
    echo "错误：找不到 $SOURCE"
    exit 1
fi

# 对每个学习率进行处理
for lr in "${learning_rates[@]}"; do
    echo "学习率: $lr"
    
    # 生成临时源文件，替换 learning_rate 的值
    TMP_SOURCE="temp_${lr}.cpp"
    sed "s/double learning_rate = [^;]*;/double learning_rate = $lr;/" "$SOURCE" > "$TMP_SOURCE"
    
    # 编译临时源文件
    $CXX $CXXFLAGS -o "$EXEC" "$TMP_SOURCE"
    if [ $? -ne 0 ]; then
        echo "编译失败，跳过学习率 $lr"
        rm -f "$TMP_SOURCE"
        continue
    fi
    
    # 运行可执行文件
    ./"$EXEC"
    
    # 清理临时文件
    rm -f "$TMP_SOURCE" "$EXEC"
    
    echo ""
done

echo "所有学习率测试完成。"
