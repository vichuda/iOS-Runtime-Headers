/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSMutableArray;

@interface ADResourceDownloader : NSObject  {
    unsigned int _maxConcurrency;
    NSMutableArray *_downloadQueue;
    NSMutableArray *_activeJobs;
}

@property unsigned int maxConcurrency;
@property(retain) NSMutableArray * activeJobs;
@property(retain) NSMutableArray * downloadQueue;


- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)setActiveJobs:(id)arg1;
- (id)activeJobs;
- (void)setDownloadQueue:(id)arg1;
- (id)downloadQueue;
- (unsigned int)maxConcurrency;
- (void)cancelRequest:(id)arg1;
- (void)cancelRequestForURL:(id)arg1;
- (void)downloadRequestJob:(id)arg1;
- (void)setMaxConcurrency:(unsigned int)arg1;
- (id)jobForConnection:(id)arg1;
- (void)_processNextJob;
- (void)cancelAllRequests;

@end
