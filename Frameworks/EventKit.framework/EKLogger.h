/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, NSString, NSFileHandle;

@interface EKLogger : NSObject  {
    NSString *_logPath;
    NSString *_logName;
    NSString *_logDefaultName;
    NSString *_outputDefaultName;
    int _logLevel;
    int _outputLevel;
    BOOL _haveCheckedLogLevel;
    BOOL _haveCheckedOutputLevel;
    int _maxLogFiles;
    struct dispatch_queue_s { } *_logQueue;
    struct dispatch_source_s { } *_fdWatcher;
    NSFileHandle *_logFH;
    NSDate *_lastStatDate;
}

@property int logLevel;
@property int outputLevel;
@property int maxLogFiles;
@property(retain) NSFileHandle * fh;
@property(retain) NSDate * lastStatDate;


- (void)dealloc;
- (id)lastStatDate;
- (int)maxLogFiles;
- (void)setOutputLevel:(int)arg1;
- (void)setLogLevel:(int)arg1;
- (void)_statFileIfNecessaryForRollingCheck;
- (void)_rollLogs;
- (void)setLastStatDate:(id)arg1;
- (void)_openLogFile;
- (id)fh;
- (void)setFh:(id)arg1;
- (id)_logFilePathWithNumber:(int)arg1;
- (void)_closeLogFile;
- (void)logWithFileName:(const char *)arg1 functionName:(const char *)arg2 lineNumber:(int)arg3 level:(int)arg4 format:(id)arg5 arguments:(void*)arg6;
- (void)setMaxLogFiles:(int)arg1;
- (id)initWithPrefix:(id)arg1 logPath:(id)arg2 logName:(id)arg3;
- (int)logLevel;
- (int)outputLevel;

@end
