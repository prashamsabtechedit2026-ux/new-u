create database employee_2025;

use employee_2025;

create table employee(
	e_id int primary key,
	e_first_name varchar (100),
	e_middle_name varchar (100),
	e_last_name varchar (100),
	e_department varchar (100),
	e_salary int (40)
);

insert into employee 
values 
	(1, "Gita", "Khatri", "Chhetri", "HR", 45000),
	(2, "Puja", "Kumari", "Sharma", "IT", 50000),
	(3, "Roshni", "Shingh", "Pal", "Manager", 35000),
	(4, "Sweta", "Kumari", "Pal", "IT", 45000),
	(5, "Rohan", "Shingh", "Raut", "Manager", 37000),
	(6, "Sujal", "Kumar", "Patel", "IT Assistant", 25000),
	(7, "Sumit", "Raj", "Mishra", "Manager", 55000);

select e_id, concat (e_first_name," ",e_middle_name," ",e_last_name) as fullName
from employee;

select max(e_salary) as maximumSalary
from employee;
