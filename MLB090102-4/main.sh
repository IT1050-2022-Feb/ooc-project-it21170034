
#echo Which program do you want to run?
#echo
#echo 1 - FAQ.cpp
#echo 2 - Feedback.cpp
#echo 3 - SavedJobs.cpp
#echo 4 - User.cpp
#echo 5 - to enter your filename

#echo
#read -p 'Enter your Choice (1-4) : ' no

#case $no in 1*)
#     filename="FAQ.cpp"
#;;
#  2*)
#     filename="Feedback.cpp"
#;;
#  3*)
#     filename="SavedJobs.cpp"
#;;
#  4*)
#     filename="User.cpp"
#;;
#  5*)
#     read filename
#;;
#esac


clang++-7 -pthread -std=c++17 -o main main.cpp
./main

