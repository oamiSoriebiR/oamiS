def time_diff(time1:tuple, time2:tuple) ->tuple:
    time1min=time1[0]*60+time1[1]
    time2min=time2[0]*60+time2[1]
    if time1min<time2min:
        endtime=time2min-time1min
    else: endtime=time1min-time2min

    hours=endtime//60
    minutes=endtime%60

    return (hours, minutes)
    