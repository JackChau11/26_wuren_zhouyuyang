#作业完成思路
  有了给定的代码模板，用C++完成这个作业时就很方便了。然而，在设置定时发布器时还是遇到了一些困难，于是干脆注释掉，好像对可视化结果也没有影响？不知道是不是只要后面的生命周期设成0,锥桶就能一直显示，所以没有定时发布器也没有问题？在原有的代码模板上也有一些修改，加入了一个addConesToMarkerArray()辅助函数，把所有锥桶直接放在一个vector里，方便管理。  
  最主要的问题还是在坐标上。Bag中的锥桶数据坐标是world,但是在Rviz2中把坐标改为world还是不能显示，最后只能再开一个专门控制坐标变换的终端，让它发布一个静态坐标变换把world和map绑定起来，才能正常显示。不知道教学视频中直接在Rviz2中把map切换成world就能改变坐标是如何实现的？专门设置一个坐标系？本人对这方面了解比较少，只会用发布静态转换的笨办法。
  
#作业完成感受：
  最大的感受就是C++在学的时候和真正用的时候有很大的不同。学C++的时候都只是做一些学生管理系统之类的练习，但是实际运用中，尤其是像用在ROS2这种偏向控制的应用场景下，代码就很不一样了。看来还是要在实践运用中提高C++编程能力，只是应试还是不行的。  
  
#启动命令：
  1，2终端先source setup/install.bash
  终端1:ros2 run cone_visualizer cone_visualizer_node
  终端2：ros2 bag play map_to_visualize
  终端3：rviz2
  终端4:source /opt/ros/humble/setup.bash
       ros2 run tf2_ros static_transform_publisher 0 0 0 0 0 0 map world
  
	
