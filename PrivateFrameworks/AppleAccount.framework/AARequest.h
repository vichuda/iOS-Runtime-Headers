/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSURLRequest, NSString;

@interface AARequest : NSObject  {
    NSString *_urlString;
    BOOL _flushCache;
}

@property(readonly) NSURLRequest * urlRequest;
@property BOOL flushCache;

+ (id)protocolVersion;
+ (Class)responseClass;

- (void)dealloc;
- (BOOL)flushCache;
- (id)urlCredential;
- (id)initWithURLString:(id)arg1;
- (id)bodyDictionary;
- (id)urlRequest;
- (void)performRequestWithHandler:(id)arg1;
- (void)setFlushCache:(BOOL)arg1;
- (id)urlString;

@end
