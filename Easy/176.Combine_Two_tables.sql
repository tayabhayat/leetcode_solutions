/* Write your PL/SQL query statement below */
SELECT p.firstName, p.Lastname, a.city, a.state from person p left join address a on p.personid = a.personid