create database students_4;
use students_4;
create table city(
	cid int primary key,
    cityName varchar (100)
    );
create table student(
	s_id int primary key,
    s_name varchar (100) not null,
    age int not null,
    cid int,
    foreign key (cid) references city(cid)
    );
insert into city
values
	(1, "Kathmandu"),
	(2, "Biratnagar"),
	(3, "Pokhara"),
	(4, "Chitwan"),
	(5, "Darjeeling");
insert into student
values
	(1, "Ram Nepal", 19 , 1),
	(2, "Sita Adhikari", 18, 2),
	(3, "Gita Shrestha", 19, 1),
	(4, "Rita Chhetri", 21, 3),
	(5, "Shyam Pradhan", 22, null);
    
select * from student;
select * from city;

select s.s_id, c.cid, c.cityName
from student s
inner join city c
on s.cid=c.cid;

select s.s_name,c.cid,c.cityName
from student s
left join city c
on s.cid= c.cid ;

select s.s_name, c.cityName 
from student s 
right join city c 
on s.cid=c.cid;


select s1.s_name As Student1, 
	s2.s_name AS student2
from  student s1
join student s2
on s1.cid=s2.cid
AND s1.s_id < s2.s_id;


