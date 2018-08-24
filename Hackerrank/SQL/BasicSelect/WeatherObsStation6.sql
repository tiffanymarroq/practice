/*
Enter your query here.
*/
select distinct city from station
where city LIKE 'A%' or
      city LIKE 'E%' or
      city Like 'I%' or
      city like 'O%' or
      city like 'U%'
