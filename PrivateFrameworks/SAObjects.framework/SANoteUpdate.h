/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString;

@interface SANoteUpdate : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;
@property(copy) NSString * contentsToAppend;
@property(copy) NSURL * identifier;

+ (id)update;
+ (id)updateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)contentsToAppend;
- (void)setContentsToAppend:(id)arg1;
- (id)encodedClassName;
- (id)targetAppId;
- (void)setTargetAppId:(id)arg1;
- (BOOL)requiresResponse;

@end
