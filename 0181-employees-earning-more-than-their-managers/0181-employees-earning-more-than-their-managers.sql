# Write your MySQL query statement 
select name as employee from employee e  where salary >(
    select salary from employee where id = e.managerid
)