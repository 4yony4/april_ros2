from setuptools import setup

package_name = 'april_ros2'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='yony',
    maintainer_email='jonathan.barmagen@iit.it',
    description='SIM and SEM packages for the APRIL project. It includes a Dummy object to simulate signals.',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'dummy = april_ros2.dummy:main',
            'sim = april_ros2.sim:main',
            'sem = april_ros2.sem:main',
        ],
    },
)
