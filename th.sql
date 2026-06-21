create table department(
    dep_no number(38) primary key not null,
    dep_name varchar2(15),
    loc varchar2(15)
);

 create table employee(empno number(38),name varchar2(30),sex varchar2(15),dep_no number(38) references department(dep_no));

create table dependent(name varchar2(30) not null, place varchar2(10), empno number(38));


-- Department Table
INSERT INTO department (dep_no, dep_name, loc)
VALUES (101, 'HR', 'Kottayam');

INSERT INTO department (dep_no, dep_name, loc)
VALUES (102, 'Sales', 'Kochi');

INSERT INTO department (dep_no, dep_name, loc)
VALUES (103, 'IT', 'Trivandrum');


-- Employee Table
INSERT INTO employee (empno, name, sex, dep_no)
VALUES (1001, 'Anil', 'Male', 101);

INSERT INTO employee (empno, name, sex, dep_no)
VALUES (1002, 'Meera', 'Female', 102);

INSERT INTO employee (empno, name, sex, dep_no)
VALUES (1003, 'Rahul', 'Male', 103);


-- Dependent Table
INSERT INTO dependent (name, place, empno)
VALUES ('Asha', 'Kottayam', 1001);

INSERT INTO dependent (name, place, empno)
VALUES ('Riya', 'Kochi', 1002);

INSERT INTO dependent (name, place, empno)
VALUES ('Arun', 'Trivandrum', 1003);

COMMIT;

 select e.name,dep.name 
 from employee e      
 join dependent dep on e.empno=dep.empno
 join department d on e.dep_no=d.dep_no
 where d.loc=dep.place;







