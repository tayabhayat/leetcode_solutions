/* Write your PL/SQL query statement below */
SELECT e.name as "Employee" from employee e join employee m on m.id = e.managerid where e.salary > m.salary