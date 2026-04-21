#include <iostream>

int main(){

    //This is a comment I don't really care about. 
    
    std::cout << "#include says that iostream file is already present. From that, important parts should be 'readied' for use." << std::endl;
    std::cout << "<iostream> is a header file. io= input/output. Not JUST input/output, for now, it helps with stream of inputs/outputs." << std::endl;
    std::cout << "'enters' given between #include line and int main line is called the preprocessor. It is a program that runs before the actual code is compiled. It processes the code and makes it ready for compilation." << std::endl;
    std::cout << "The preprocessor handles directives like #include, which tells it to include the contents of the specified header file (in this case, iostream) into the program before compilation." << std::endl;
    std::cout << "main() is entry to the command. main()'s brackets can include many to-be-called functions. A chain of functions can be called from main()." << std::endl;
    std::cout << "int just means that I want the function to return with an integer" << std::endl;
    std::cout << "main() is a function. A function is a block of code that performs a specific task. It can take inputs (parameters) and return an output (return value)." << std::endl;
    std::cout << "curly braces {} are used to define the body of a function. They enclose the code that will be executed when the function is called." << std::endl;
    std::cout << "int just says that after compiling, the function will return in integer." << std::endl;
    std::cout << "std::cout is used to output data to the console. std is the namespace that contains the cout object, which is used for output." << std::endl;
    std::cout << "std::endl is used to insert a newline character and flush the output buffer. It ensures that the output is displayed on a new line." << std::endl;
    std::cout << "you CAN write code after ; but it is not recommended. It can make the code harder to read and understand." << std::endl;
    std::cout << "main() can include parameters, but for now, we will keep it simple and not include any parameters." << std::endl;
    std::cout << "instructions can be many in main(), but for now, we will keep it simple and only include a few instructions." << std::endl;
    std::cout << "std before cout and endl is necessary because they are part of the std namespace. If we didn't include std::, we would have to use using namespace std; at the beginning of our code to avoid having to write std:: before every standard library object." << std::endl;
    std::cout << " double quotes indicate that the text inside is a string literal. A string literal is a sequence of characters enclosed in double quotes that represents a string value." << std::endl;
    std::cout << "std::cout is used to output data to the console. It is part of the iostream library and is used to display information to the user." << std::endl;
    std::cout << "std::cout just says that the output is being sent to the console. It is a stream object that allows us to output data to the console." << std::endl;
    std::cout << "console in c++ means the command line interface where the program is executed. It is a text-based interface that allows users to interact with the program by entering commands and receiving output." << std::endl;
    std::cout << "cout in specific means 'character output'. It is used to output data to the console. It is part of the iostream library and is used to display information to the user." << std::endl;
    std::cout << "<< just means that we are sending the output to the console. It is an operator that is used to insert data into the output stream." << std::endl;
    return 0;
}
