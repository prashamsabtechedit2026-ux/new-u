create database company_26;

use company_26;

create table employees(
	employee_id int primary key,
    first_name varchar (100) not null,
    last_name varchar(100) not null,
    department varchar(50) not null,
    salary bigint not null
    );
    
insert into employees
values
	(1, "Gita", "Chhetri", "HR", 45000),
	(2, "Puja", "Sharma", "IT", 50000),
	(3, "Roshni", "Pal", "Manager", 35000),
	(4, "Sweta", "Pal", "IT", 45000),
	(5, "Rohan", "Raut", "Manager", 37000);
    
create view employee_details AS
select employee_id, first_name, department
from employees;