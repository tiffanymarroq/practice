/*
Enter your query here.
*/

select name from students
where marks > 75 ORDER BY MID(NAME, LENGTH(NAME)-2, 3), ID;
