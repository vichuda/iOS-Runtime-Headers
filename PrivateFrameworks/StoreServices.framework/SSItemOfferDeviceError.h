/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSURL, NSString;

@interface SSItemOfferDeviceError : NSObject  {
    NSString *_localizedMessage;
    NSString *_localizedTitle;
    NSString *_localizedURLTitle;
    NSURL *_url;
}

@property(readonly) NSString * localizedMessage;
@property(readonly) NSString * localizedTitle;
@property(readonly) NSString * localizedURLTitle;
@property(readonly) NSURL * URL;


- (void)dealloc;
- (id)localizedTitle;
- (id)URL;
- (id)localizedURLTitle;
- (id)localizedMessage;
- (id)_initWithMessage:(id)arg1 title:(id)arg2 URLTitle:(id)arg3 URL:(id)arg4;

@end
