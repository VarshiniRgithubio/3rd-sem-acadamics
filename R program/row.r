#create a data frame with employee details
employee_df<-data.frame(
  id=c(1:20),
  name=c("jhon","emma","michael","sophia","william","olivia","james","amelia","benjamin","isabella",
         "daniel","mia","matthew","charlotte","david","emily","joseph","madison","alexander","ava"),
  salary=c(25000,28000,30000,22000,26000,24000,27000,29000,31000,23000,
           26000,24000,28000,30000,22000,25000,27000,29000,31000,23000),
  start_date=as.Date(c("2022-01-01","2020-03-15","2023-02-10","2021-09-05",
                       "2020-05-12","2018-11-30","2023-04-18","2020-10-22","2019-05-15",
                       "2018-08-10","2018-04-20","2020-11-08","2017-06-14","2019-09-30",
                       "2022-06-05","2018-04-20","2017-08-15",'2019-01-10',"2020-02-28")),
  dept=c("IT","HR","Finance","IT","Marketing","IT","Finance","HR","IT","Marketing",
         "Finance","IT","HR","Marketing","IT","Finance","HR","Marketing","IT","Finance")
)

#write the data frame to csv file
write.csv(employee_df,"input.csv",row.names=FALSE)

#import the csv file into R
employee_data<-read.csv("input.csv")

#find the total number of rows& columns
num_rows<-nrow(employee_data)
num_cols<-ncol(employee_data)
cat("total number of rows:",num_rows,"\n")
cat("total number of columns:",num_cols,"n\n")

#find the maximum salary
max_salary<-max(employee_data$salary)
cat("maximun salary:",max_salary,"n\n")

#retrieve the details of the employee with maximum salary
employee_max_salary<-employee_data[employee_data$salary==max_salary,]
cat("details of the employee with maximum salary:\n")
    print(employee_max_salary)
    cat("\n")
    
    #retrieve all employees working in the it department
    it_department<-employee_data[employee_data$dept=="It",]
    cat("employees working in the IT department:\n")
    print(it_department)
    cat("\n")
  
#retrieve the employees in the IT department whose salary is greater than 20000
    it_high_salary<-it_department[it_department$salary>20000,]
    cat("employees in the IT department with salary greater than 20000:\n")
    print(it_high_salary)
    
#write these details into another file "output.csv"
    write.csv(it_high_salary,"://output.csv",row.names=FALSE)