#include <iostream>

short int Python = 0; // Score for Python
short int CPlusPlus = 0; // Score for C++
short int C = 0; // Score for C
short int Java = 0; // Score for Java
short int JavaScript = 0; // Score for JavaScript
short int PHP = 0; // Score for PHP
short int Go = 0; // Score for Go
short int Rust = 0; // Score for Rust
short int Kotlin = 0; // Score for Kotlin

char Vote; // Stores user's vote-selection

void Logic(){
    // Display languages with score >= 4
    if(Python >= 4)
        std::cout << "Python" << std::endl;

    if(CPlusPlus >= 4)
        std::cout << "C++" << std::endl;

    if(C >= 4)
        std::cout << "C" << std::endl;

    if(Java >= 4)
        std::cout << "Java" << std::endl;

    if(JavaScript >= 4)
        std::cout << "JavaScript" << std::endl;

    if(PHP >= 4)
        std::cout << "PHP" << std::endl;

    if(Go >= 4)
        std::cout << "Go" << std::endl;

    if(Rust >= 4)
        std::cout << "Rust" << std::endl;

    if(Kotlin >= 4)
        std::cout << "Kotlin" << std::endl;
}

void VoteFunction(){
    std::cout << "Vote:"; // Prompt user to vote
    std::cin >> Vote; // Read user input
}

void ElseFunction(){
    std::cout << "Invalid selection or question skipped." << std::endl; // Handle invalid input
}

int main(){
    // QUESTION 1
    std::cout << "Which area do you feel closest to?" << std::endl;
    std::cout << "[A] - Application and game development" << std::endl;
    std::cout << "[B] - Mobile application development" << std::endl;
    std::cout << "[C] - Website development" << std::endl;
    std::cout << "[D] - Security software development" << std::endl;
    VoteFunction();

    if(Vote == 'A' || Vote == 'a'){
        CPlusPlus++;
        Java++;
    }
    else if(Vote == 'B' || Vote == 'b'){
        Java++;
        Kotlin++;
    }
    else if(Vote == 'C' || Vote == 'c'){
        Python++;
        JavaScript++;
        PHP++;
    }
    else if(Vote == 'D' || Vote == 'd'){
        CPlusPlus++;
        C++;
        Rust++;
        Python++;
    }
    else
        ElseFunction();

    // QUESTION 2
    std::cout << "What difficulty level language do you want to learn?" << std::endl;
    std::cout << "[A] - I love very hard" << std::endl;
    std::cout << "[B] - Let it be a little difficult" << std::endl;
    std::cout << "[C] - Medium difficulty" << std::endl;
    std::cout << "[D] - Easy" << std::endl;
    VoteFunction();

    if(Vote == 'A' || Vote == 'a'){
        CPlusPlus++;
        C++;
        Rust++;
    }
    else if(Vote == 'B' || Vote == 'b'){
        Java++;
        Go++;
    }
    else if(Vote == 'C' || Vote == 'c'){
        PHP++;
        JavaScript++;
    }
    else if(Vote == 'D' || Vote == 'd'){
        Kotlin++;
        Python++;
    }
    else
        ElseFunction();

    // QUESTION 3
    std::cout << "How are you good at math?" << std::endl;
    std::cout << "[A] - That's great, I enjoy solving math problems." << std::endl;
    std::cout << "[B] - Good, I don't have problems with basic things." << std::endl;
    std::cout << "[C] - Intermediate level, some topics are difficult." << std::endl;
    std::cout << "[D] - I'm not very good at math." << std::endl;
    VoteFunction();

    if(Vote == 'A' || Vote == 'a'){
        Python++;
        CPlusPlus++;
        Rust++;
        C++;
    }
    else if(Vote == 'B' || Vote == 'b'){
        Java++;
        Go++;
        Kotlin++;
    }
    else if(Vote == 'C' || Vote == 'c'){
        JavaScript++;
    }
    else if(Vote == 'D' || Vote == 'd'){
        PHP++;
    }
    else
        ElseFunction();

    // QUESTION 4
    std::cout << "What motivates you most when writing code?" << std::endl;
    std::cout << "[A] - Get fast result" << std::endl;
    std::cout << "[B] - Detailed control and performance" << std::endl;
    std::cout << "[C] - Creativity and design" << std::endl;
    std::cout << "[D] - Logic and problem solving" << std::endl;
    VoteFunction();

    if(Vote == 'A' || Vote == 'a'){
        Python++;
        JavaScript++;
        PHP++;
    }
    else if(Vote == 'B' || Vote == 'b'){
        C++;
        CPlusPlus++;
        Rust++;
        Go++;
    }
    else if(Vote == 'C' || Vote == 'c'){
        JavaScript++;
        PHP++;
        Kotlin++;
        Python++;
    }
    else if(Vote == 'D' || Vote == 'd'){
        Java++;
        Kotlin++;
        Go++;
        Rust++;
        CPlusPlus++;
    }
    else
        ElseFunction();

    // QUESTION 5
    std::cout << "Which work environment do you prefer?" << std::endl;
    std::cout << "[A] - Quick and easy" << std::endl;
    std::cout << "[B] - Team and big projects" << std::endl;
    std::cout << "[C] - Impressive and detailed" << std::endl;
    std::cout << "[D] - Mobile and cross-platform" << std::endl;
    VoteFunction();

    if(Vote == 'A' || Vote == 'a'){
        Python++;
        JavaScript++;
        PHP++;
    }
    else if(Vote == 'B' || Vote == 'b'){
        Java++;
        Kotlin++;
        Go++;
    }
    else if(Vote == 'C' || Vote == 'c'){
        CPlusPlus++;
        C++;
        Rust++;
    }
    else if(Vote == 'D' || Vote == 'd'){
        Kotlin++;
        Java++;
        Python++;
    }
    else
        ElseFunction();

    // QUESTION 6
    std::cout << "When coding, do you learn more from making mistakes or from experimenting?" << std::endl;
    std::cout << "[A] - I don't like making mistakes; I prefer to see the correct result quickly." << std::endl;
    std::cout << "[B] - Mistakes are part of learning; I enjoy solving them." << std::endl;
    std::cout << "[C] - I make mistakes, but keeping the code organized is important to me." << std::endl;
    std::cout << "[D] - I like to learn by doing and through trial and error." << std::endl;
    VoteFunction();

    if(Vote == 'A' || Vote == 'a'){
        Python++;
        PHP++;
        JavaScript++;
    }
    else if(Vote == 'B' || Vote == 'b'){
        C++;
        CPlusPlus++;
        Rust++;
    }
    else if(Vote == 'C' || Vote == 'c'){
        Java++;
        Kotlin++;
        Go++;
    }
    else if(Vote == 'D' || Vote == 'd'){
        Python++;
        Kotlin++;
        JavaScript++;
    }
    else
        ElseFunction();

    // QUESTION 7
    std::cout << "How patient are you when learning a new language?" << std::endl;
    std::cout << "[A] - I am patient and enjoy learning about details and long-term projects." << std::endl;
    std::cout << "[B] - I have a moderate level of patience and like to learn the basics quickly." << std::endl;
    std::cout << "[C] - I'm impatient, I want to see results immediately." << std::endl;
    std::cout << "[D] - It depends on the situation, sometimes I'm patient." << std::endl;
    VoteFunction();

    if(Vote == 'A' || Vote == 'a'){
        C++;
        CPlusPlus++;
        Rust++;
        Go++;
    }
    else if(Vote == 'B' || Vote == 'b'){
        Java++;
        Kotlin++;
        Python++;
    }
    else if(Vote == 'C' || Vote == 'c'){
        JavaScript++;
        PHP++;
        Python++;
    }
    else if(Vote == 'D' || Vote == 'd'){
        Python++;
        Java++;
        Kotlin++;
    }
    else
        ElseFunction();

    // QUESTION 8
    std::cout << "Which personality traits come to the forefront when coding?" << std::endl;
    std::cout << "[A] - Curious and loves to explore." << std::endl;
    std::cout << "[B] - Disciplined and orderly." << std::endl;
    std::cout << "[C] - Patient and detail-oriented." << std::endl;
    std::cout << "[D] - Creative and experimental." << std::endl;
    VoteFunction();

    if(Vote == 'A' || Vote == 'a'){
        Python++;
        Rust++;
        JavaScript++;
    }
    else if(Vote == 'B' || Vote == 'b'){
        Java++;
        Kotlin++;
        Go++;
    }
    else if(Vote == 'C' || Vote == 'c'){
        C++;
        CPlusPlus++;
        Rust++;
    }
    else if(Vote == 'D' || Vote == 'd'){
        Python++;
        Kotlin++;
        JavaScript++;
        PHP++;
    }
    else
        ElseFunction();

    // QUESTION 9
    std::cout << "What do you do if a piece of code bores you?" << std::endl;
    std::cout << "[A] - I'll try another method right away." << std::endl;
    std::cout << "[B] - I will investigate the problem thoroughly and try to solve it." << std::endl;
    std::cout << "[C] - I plan and rewrite the entire code from scratch." << std::endl;
    std::cout << "[D] - I'll take a short break and then come back." << std::endl;
    VoteFunction();

    if(Vote == 'A' || Vote == 'a'){
        Python++;
        JavaScript++;
        PHP++;
    }
    else if(Vote == 'B' || Vote == 'b'){
        C++;
        CPlusPlus++;
        Rust++;
        Go++;
    }
    else if(Vote == 'C' || Vote == 'c'){
        Java++;
        Kotlin++;
        Go++;
    }
    else if(Vote == 'D' || Vote == 'd'){
        Python++;
        Kotlin++;
        JavaScript++;
    }
    else
        ElseFunction();

    std::cout << "The test is over. Here are the languages I recommended to you:" << std::endl;
    Logic();

    return 0;
}
