#include <array>
#include <string>
#include <vector>
#include <iostream>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> student_scores_rounds;
    for (int i = 0; i < student_scores.size(); i++) {
        student_scores_rounds.push_back(static_cast<double> (student_scores[i]));
    }
    return student_scores_rounds;
}


// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int failed_student_count = 0;
    for (int i = 0; i < student_scores.size(); i++) {
        if (student_scores[i] <= 40)
            failed_student_count++;
    }

    return failed_student_count;
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {
    std::vector<int> student_above_threshold; 
    for (int i = 0; i < student_scores.size(); i++) {
        if (student_scores[i] >= threshold)
            student_above_threshold.push_back(student_scores[i]);
    }
    return student_above_threshold;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    int difference_between_high_and_low = highest_score - 40;
    int split_equally = difference_between_high_and_low / 4;

    /*highest_score = highest_score - 40;
    int split_equally = highest_score / 4 - 1; */
    //std::array<int, 4> letter_grade;
 /*   letter_grade[3] = highest_score - split_equally;
    letter_grade[2] = (letter_grade[3] - 1) - split_equally;
    letter_grade[1] = (letter_grade[2] - 1) - split_equally;
    letter_grade[0] = (letter_grade[1] - 1) - split_equally;*/

   
    return std::array<int, 4> {41, 41 + split_equally, 41 + (split_equally * 2), 41 + (split_equally * 3)};
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
   std::vector<std::string> rankings;
    for (int i = 0; i < student_scores.size(); i++) {
        rankings.push_back(std::to_string(i + 1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]));
    }
    return rankings;
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    /*std::string perfect_score;*/
    for (int i = 0; i < student_scores.size(); i++) {
        if (student_scores[i] == 100)
            return student_names[i];
    }
    
    return "";
}


int main() {
    std::vector<double> student_scores{ 90.33, 40.5, 55.44, 70.05, 30.55, 25.45, 80.45, 95.3, 38.7, 40.3 };
    std::cout << "Rounded scores:\n";
    for (int score : round_down_scores(student_scores)) {
        std::cout << score << " ";
    }
    std::cout << std::endl;

    std::cout << "number of failed students" << std::endl;
    std::cout << count_failed_students({ 90,40,55,70,30,25,80,95,38,40 }) << std::endl;
    std::cout << std::endl;

    std::cout << "students above threshold: " << std::endl;
    for (int score : above_threshold({ 90,40,55,70,30,68,70,75,83,96 }, 75)) {
        std::cout << score << " ";
    }

    std::cout << std::endl;
    std::cout << "Letter grades: " << std::endl;
    for (int score : letter_grades(88)) {
        std::cout << score << " ";
    }

    std::cout << std::endl;

  

    std::cout << "Rankings:" << std::endl;
    for (std::string result : student_ranking({ 100, 99, 90, 84, 66, 53, 47 }, { "Joci", "Sara","Kora","Jan","Indra","Bern", "Fred" })) {
        std::cout << result << std::endl;
    }

    std::cout << std::endl;

    std::cout << "perfect score: " << std::endl;
    std::cout << perfect_score({ 90, 80, 100 }, { "Nur", "Tony", "Fatima" }) << std::endl;


    return 0;
}