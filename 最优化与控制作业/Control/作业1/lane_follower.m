%% 第二问：轨迹跟踪
clear; clc; close all

% 车辆参数
lfr = 2.168 + 1.907; % 轴距 L
dt = 0.01;
v = 15; 
sim_steps = 2000;

% 参考轨迹 (正弦曲线)
X_ref = 0:0.1:200; 
Y_ref = 10 * sin(X_ref / 15); 

% 初始车辆状态 
X = X_ref(1); Y = Y_ref(1) + 3; phi = 0; 
X_vec = zeros(1, sim_steps); Y_vec = zeros(1, sim_steps);


for ii = 1:sim_steps
    X_vec(ii) = X; Y_vec(ii) = Y;
    
    
    % ===============================================================
    
    % ================= TODO 2.1: 实现某种跟踪算法 =================
    
    %设置前视距离Ld
    Ld = 1;

    %在参考轨迹上找距离当前质心最接近前视距离ld的点
    %先计算距离
    distance = sqrt((X_ref-X).^2+(Y_ref-Y).^2);
    [~,target_idx] = min(abs(distance-Ld));

    %获取坐标
    X_target = X_ref(target_idx);
    Y_target = Y_ref(target_idx);

    %根据公式计算要转向的角度
    %
    abs_delta = atan2(Y_target-Y,X_target-X);
    delta = abs_delta - phi;
    sigma = atan2(2*lfr*sin(delta),Ld);
    % ===============================================================

    % ================= TODO 2.2: 车辆状态更新 =================
    % 提示: 将刚才求得的转向角 sigma 代入运动学模型（复用第一问代码），更新 X, Y, phi。
    
    phi_dot = v*tan(sigma)/lfr;
    phi = phi+phi_dot*dt;
    X = v*dt*cos(phi)+X;
    Y = v*dt*sin(phi)+Y;
    
    % ===============================================================
    
    % 到达终点提前结束
    if X >= X_ref(end), break; end
end

% 绘图对比
figure; hold on; grid on;
plot(X_ref, Y_ref, 'k--', 'LineWidth', 2);
plot(X_vec(1:ii), Y_vec(1:ii), 'r-', 'LineWidth', 2);
legend('参考规划轨迹', '实际行驶轨迹');
title(['Pure Pursuit 跟踪 (Ld = ', num2str(Ld), 'm)']);
xlabel('X [m]'); ylabel('Y [m]'); axis equal;