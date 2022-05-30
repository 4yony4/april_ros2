from setuptools import find_packages
from setuptools import setup

setup(
    name='sim_sem_interfaces',
    version='0.0.1',
    packages=find_packages(
        include=('sim_sem_interfaces', 'sim_sem_interfaces.*')),
)
