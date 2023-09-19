# School Students


# Requirements/Features

1. The school stores information about students: their name(first, middle, last), gender, dob and when they enrolled at the school
![Alt text](/images/school.png?raw=true "Optional Title")

2. We want to store information about parents, grandparents and other carers of students. A student can have many of these. Each of them has a a name and contact information, such as email and phone
![Alt text](/images/school1.png?raw=true "Optional Title")

3. Schools operate based on school years. A year has start date and end date and can be in a single calendar year or miltiple calendar years
![Alt text](/images/school2.png?raw=true "Optional Title")

4. A year has multiple terms, which have start and end dates. There is no specific number of terms that are required for a year
![Alt text](/images/school3.png?raw=true "Optional Title")

5. Students are enrolled in one year level at a time and can move up to the next year level in the future. A year level could be kinder, grade 1,2,3 and so on
![Alt text](/images/school4.png?raw=true "Optional Title")

6. Students are part of classes and can be in more than one class at a time
![Alt text](/images/school5.png?raw=true "Optional Title")

7. A class has a subject such as Sport or Physics. A class subject may be a more general name for the junior years
![Alt text](/images/school6.png?raw=true "Optional Title")

8. Subjects belong to departments. For example Physics and Chemistry belong to the Science department
![Alt text](/images/school7.png?raw=true "Optional Title")

9. A class is taught by a teacher
![Alt text](/images/school8.png?raw=true "Optional Title")

10. Teachers are stored in our system and have names, genders and contact information
![Alt text](/images/school9.png?raw=true "Optional Title")

11. A class exists for a term. There can be multiple classess in a year and multiple classes within the same term(e.g. if there is a large number of English students and they need to split the class into two). A class can have a name to help describe it
![Alt text](/images/school10.png?raw=true "Optional Title")

12. Classess are held in a classroom. A classroom can be a certain type of room, such as a gymnasium or computer room or regular classroom. A classroom has a name that could include the location and the capacity or number of students it can hold 
![Alt text](/images/school11.png?raw=true "Optional Title")

13. The time that a class occurs is called a period. There are a certain number of periods per day and the periods are set for the entire school each year 
![Alt text](/images/school12.png?raw=true "Optional Title")

14. A class can occur over multiple periods which could be two periods or up to the entire day 
![Alt text](/images/school13.png?raw=true "Optional Title")

15. Students are graded based on their work in each class and given a score between 0 and 100. This score is stored for each class and a calculation is done to determine their overall score for the year
![Alt text](/images/school14.png?raw=true "Optional Title")

16. The score can be matched to a letter grade. For example a score of 0-50 means a "F", from 51-60 means a "D" and so on, up to 100
![Alt text](/images/school15.png?raw=true "Optional Title")

- Final
![Alt text](/images/erd_so_db.png?raw=true "Optional Title")

- **Future Scope:**
    - Teachers for departments
    - Teachers who are also guardians
    - Testa and assignments for each class
    - Record attendance
    - Multiple phone numbers