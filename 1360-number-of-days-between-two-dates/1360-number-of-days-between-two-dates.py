class Solution(object):
    def daysBetweenDates(self, date1, date2):
        d1 = datetime.datetime.strptime(date1, "%Y-%m-%d")
        d2 = datetime.datetime.strptime(date2, "%Y-%m-%d")
        return abs((d2 - d1).days)