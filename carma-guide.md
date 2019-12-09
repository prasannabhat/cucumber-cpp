# Introduction
This guide explains how to set up cucumber-cpp for running carma test cases

# Installation
- Clone the cucumber-cpp in carma repo  
git clone https://github.com/cucumber/cucumber-cpp.git

- Install ruby pre-requisites
    - sudo apt install ruby  
    Check the installation with the below command  
    ruby --version  
    (I have ruby 2.5.1p57 (2018-03-29 revision 63029) [x86_64-linux-gnu])
    - sudo apt install ruby-dev (It may work without this!)
    - sudo apt install ruby-bundler
Above steps can be run from any terminal.  

- Install boost pre-requisites
    - sudo apt-get install libboost-all-dev

- Go into the cucumber-cpp repo and run the below commands.  
    - bundle install (sudo access required)

- Build
    - create directory build
    - navigate to build
     cmake -DCUKE_ENABLE_EXAMPLES=on ..
     make
##todo : use local version of gmock    

# Run the examples
    - build/examples/HelloBDD/HelloBDDSteps1 > /dev/null &
    - cucumber examples/HelloBDD
