from launch import LaunchDescription
from launch.substitutions import PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    #启动 turtlesim，传入包名、可执行文件、节点名
    turtlesim_node = Node(
        package='turtlesim',
        executable='turtlesim_node',
        name='turtlesim',
    )

    #获取.yaml文件的路径
    config_file = PathJoinSubstitution([
        FindPackageShare('ros2_homework_basic_package'), 
        'config', 
        'turtle_figure8.yaml'
    ])

    #启动控制节点，并加载.yaml文件中的参数
    figure8_node = Node(
        package='ros2_homework_basic_package',
        executable='turtle_figure8',
        name='turtle_figure8',
        parameters=[config_file],
    )

    return LaunchDescription([
        turtlesim_node,
        figure8_node,
    ])
