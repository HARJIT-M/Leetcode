class Solution(object):
    def findDelayedArrivalTime(self, arrivalTime, delayedTime):
        time=arrivalTime+delayedTime
        if(time>=24):
            return time%24
        else:
            return time
        