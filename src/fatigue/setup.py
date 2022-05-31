from setuptools import setup

package_name = 'fatigue'

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
    maintainer='YonY',
    maintainer_email='jonathan.barmagen@iit.it',
    description='Package containning the Nodes responsable for the gathering and processing of fatigue information',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'dummy_fa = fatigue.dummy_fa:main',
        ],
    },
)
