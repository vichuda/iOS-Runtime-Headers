/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OAuth.framework/OAuth
 */

@class NSString;

@interface OACredential : NSObject  {
    NSString *_consumerKey;
    NSString *_consumerSecret;
    NSString *_oauthToken;
    NSString *_oauthTokenSecret;
}

@property(copy) NSString * consumerKey;
@property(copy) NSString * consumerSecret;
@property(copy) NSString * oauthToken;
@property(copy) NSString * oauthTokenSecret;


- (void)dealloc;
- (void)setOauthTokenSecret:(id)arg1;
- (void)setOauthToken:(id)arg1;
- (void)setConsumerKey:(id)arg1;
- (void)setConsumerSecret:(id)arg1;
- (id)signingKey;
- (id)oauthTokenSecret;
- (id)oauthToken;
- (id)consumerSecret;
- (id)consumerKey;

@end
