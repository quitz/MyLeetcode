class Logger {
public:
    /** Initialize your data structure here. */
    map<string,int> mp;
    Logger() {
    }
    
    /** Returns true if the message should be printed in the given timestamp, otherwise returns false.
        If this method returns false, the message will not be printed.
        The timestamp is in seconds granularity. */
    bool shouldPrintMessage(int timestamp, string message) {
        auto it = mp.find(message);
        if(it == mp.end()){
            mp[message] = timestamp;
            return true;
        }
        else{
            if(timestamp - mp[message] <= 9)
                return false;
            else{
                mp[message] = timestamp;
                return true;
            }
        }
    }
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger obj = new Logger();
 * bool param_1 = obj.shouldPrintMessage(timestamp,message);
 */