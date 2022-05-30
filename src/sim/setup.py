import os
from glob import glob
from setuptools import setup

package_name = 'sim'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='YonY',
    maintainer_email='jonathan.barmagen@iit.it',
    description='SIM package for the APRIL project. It includes a Dummy object to simulate signals.',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'dummy_grasp = april_ros2.dummy_grasp:main',
            'dummy_fa = april_ros2.dummy_fa:main',
            'dummy_hb = april_ros2.dummy_hb:main',
            'dummy_nc = april_ros2.dummy_nc:main',
            'dummy_nv = april_ros2.dummy_nv:main',


            'sim = sim.sim:main',
        ],
    },
)
