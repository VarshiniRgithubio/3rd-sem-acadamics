
#Assigning names, using the air quality data set
names(airquality)<-c("Day","Month","Ozone","Solar.R","Wind","Temp")
#Change colors of the Histogram
hist(airquality$Ozone,col="black",main="histogram of Ozone levels")
#Remove Axis and Add labels to Histogram
hist(airquality$Ozone,col="yellow",main = "histogram of Ozone levels",xlab = "Ozonelevels",ylab="Frequency",axes=FALSE)
axis(side = 1,at=seq(0,200,by=25),labels = seq(0,200,by=25))
axis(side=2)
box()
#Change Axis limits of a Histogram
hist(airquality$Ozone, col = "green", main = "Histogram of Ozone Levels", xlim = c(0, 150), ylim = c(0, 40), xlab = "Ozone Levels", ylab = "Frequency")
#Add Density curve to the histogram
hist(airquality$Ozone, col = "lightblue", main = "Histogram of Ozone Levels", xlab = "Ozone
Levels", ylab = "Frequency", prob = TRUE)
lines(density(airquality$Ozone), col = "red", lwd = 2)
