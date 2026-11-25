CREATE DATABASE office_6;
USE office_6;

CREATE TABLE employee (
    person_name VARCHAR(100) PRIMARY KEY,
    street VARCHAR(100) NOT NULL,
    city VARCHAR(100) NOT NULL
);

CREATE TABLE company (
    company_name VARCHAR(100) PRIMARY KEY,
    city VARCHAR(100) NOT NULL
);

CREATE TABLE works (
    person_name VARCHAR(100) NOT NULL,
    company_name VARCHAR(100) NOT NULL,
    salary INT NOT NULL,
    FOREIGN KEY (person_name) REFERENCES employee(person_name),
    FOREIGN KEY (company_name) REFERENCES company(company_name)
);

CREATE TABLE manages (
    person_name VARCHAR(100) NOT NULL,
    manager_name VARCHAR(100) NOT NULL,
    FOREIGN KEY (person_name) REFERENCES employee(person_name)
);

INSERT INTO employee
VALUES
("Gita Shrestha", "4th street", "Kathmandu"),
("Ram Nepal", "3rd lane", "Bhaktapur"),
("Hari Pandey", "4th lane", "Lalitpur"),
("Sita Khatri", "5th street", "Tokha"),
("Shyam Poudel", "2nd road", "Godawari");

INSERT INTO company
VALUES
("CG groups", "Kathmandu"),
("Cement Production", "Biratnagar"),
("Food Production", "Pokhara"),
("Clothing brand", "Chitwan"),
("Makeup Products", "Kathmandu");

INSERT INTO works
VALUES
("Gita Shrestha", "CG groups", 40000),
("Ram Nepal", "Cement Production", 35000),
("Hari Pandey", "Food Production", 50000),
("Sita Khatri", "Clothing brand", 55000),
("Shyam Poudel", "Makeup Products", 60000);

INSERT INTO manages
VALUES
("Gita Shrestha", "Ram Neupane"),
("Ram Nepal", "Sita Adhikari"),
("Hari Pandey", "Gita KC"),
("Sita Khatri", "Rita Chhetri"),
("Shyam Poudel", "Shyam Pradhan");


SELECT person_name, city
FROM employee
WHERE person_name LIKE '%Ram%';

SELECT e.person_name, e.city
FROM employee e
JOIN works w
ON e.person_name = w.person_name
WHERE w.company_name = 'Janta Bank Corporation'
ORDER BY e.city;


SELECT 
    e.person_name, e.street, e.city
FROM
    employee e
        JOIN
    works w ON e.person_name = w.person_name
WHERE
    w.company_name = 'NMB Bank'
        AND w.salary > 10000;

SELECT e.person_name
FROM employee e
JOIN works w
ON e.person_name = w.person_name
JOIN manages m
ON e.person_name = m.person_name
WHERE w.salary > 25000
AND m.manager_name = 'Mr Bill';


SELECT company_name
FROM works
GROUP BY company_name
HAVING AVG(salary) < 5000;


SELECT e.person_name
FROM employee e
JOIN works w
ON e.person_name = w.person_name
JOIN company c
ON w.company_name = c.company_name
WHERE c.city = 'Kathmandu'
AND e.person_name NOT LIKE '%b%'
AND e.person_name NOT LIKE '%B%';
