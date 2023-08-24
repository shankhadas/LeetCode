# Database Design
# One-To-Many:
1. What is one-to-many relationship?
2. Write a sentence.
![Alt text](/images/onetomany1.png?raw=true "Optional Title")
3. Write down the **Objects** from this sentence.
![Alt text](/images/onetomany2.png?raw=true "Optional Title")
4. Determine One-To-Many relationship.
![Alt text](/images/onetomany3.png?raw=true "Optional Title")
![Alt text](/images/onetomany4.png?raw=true "Optional Title")
5. Create a diagram.
6. Draw a line between the two tables.
7. Add to diagram to describe One-To-Many relationship.
# Many-To-Many:
![Alt text](/images/manytomany1.png?raw=true "Optional Title")
![Alt text](/images/manytomany2.png?raw=true "Optional Title")
![Alt text](/images/manytomany3.png?raw=true "Optional Title")
![Alt text](/images/manytomany4.png?raw=true "Optional Title")
- It's upto the implementation whether you want to add a explicit primary column to the _student_class_ table like ID (_auto_increment_) or not also adding a date column like Enrol Date might be helpful to add a timestamp of the inserted column.
![Alt text](/images/manytomany5.png?raw=true "Optional Title")
# SQL Joins:
- **Inner Join / Join:** It relates records between two tables and return records if there's a match between two table. It ignores the non-match record.
![Alt text](/images/innerjoin.png?raw=true "Optional Title")
![Alt text](/images/innerjoin1.png?raw=true "Optional Title")
![Alt text](/images/innerjoin2.png?raw=true "Optional Title")
![Alt text](/images/innerjoin3.png?raw=true "Optional Title")
![Alt text](/images/innerjoin4.png?raw=true "Optional Title")
- **Left Outer Join / Left Join:** shows all records on the left of the JOIN keyword which is the table specified first.
![Alt text](/images/leftouterjoin.png?raw=true "Optional Title")
![Alt text](/images/leftouterjoin1.png?raw=true "Optional Title")
- **Right Outer Join / Right Join:** shows all records on the right of the JOIN keyword which is the table specified second.
![Alt text](/images/rightouterjoin.png?raw=true "Optional Title")
![Alt text](/images/rightouterjoin1.png?raw=true "Optional Title")
- **Left Outer Join / Left Join Or Right Outer Join / Right Join** can provide the same result based on the query. The below query will give the same result.
![Alt text](/images/leftrightjoin.png?raw=true "Optional Title")
- **Full Outer Join / Full Join:** combination of both left and right join.
![Alt text](/images/fullouterjoin.png?raw=true "Optional Title")
![Alt text](/images/fullouterjoin1.png?raw=true "Optional Title")
# SQL Joins 3 Tables:
![Alt text](/images/join3.gif?raw=true "Optional Title")
# Self Join:
- Join a table to itself.
![Alt text](/images/selfjoin.png?raw=true "Optional Title")
![Alt text](/images/selfjoin1.png?raw=true "Optional Title")
![Alt text](/images/selfjoin2.png?raw=true "Optional Title")
![Alt text](/images/selfjoin3.png?raw=true "Optional Title")
![Alt text](/images/selfjoin4.png?raw=true "Optional Title")
![Alt text](/images/selfjoin5.png?raw=true "Optional Title")
![Alt text](/images/selfjoin6.png?raw=true "Optional Title")
![Alt text](/images/selfjoin7.png?raw=true "Optional Title")
![Alt text](/images/selfjoin8.png?raw=true "Optional Title")
![Alt text](/images/selfjoin9.png?raw=true "Optional Title")
![Alt text](/images/selfjoin10.png?raw=true "Optional Title")
![Alt text](/images/selfjoin11.png?raw=true "Optional Title")
![Alt text](/images/selfjoin12.png?raw=true "Optional Title")
![Alt text](/images/selfjoin13.png?raw=true "Optional Title")
![Alt text](/images/selfjoin14.png?raw=true "Optional Title")
![Alt text](/images/selfjoin15.png?raw=true "Optional Title")

**PS:** The **Interpreter (Behavioral)** is probably the least used and most complicated of all the GoF patterns.