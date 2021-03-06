/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVItemWithNoChildren, CoreDAVHrefItem;

@interface CoreDAVCurrentUserPrincipalItem : CoreDAVItem  {
    CoreDAVHrefItem *_href;
    CoreDAVItemWithNoChildren *_unauthenticated;
}

@property(retain) CoreDAVHrefItem * href;
@property(retain) CoreDAVItemWithNoChildren * unauthenticated;


- (id)description;
- (id)init;
- (void)dealloc;
- (void)setUnauthenticated:(id)arg1;
- (id)copyParseRules;
- (id)unauthenticated;
- (void)setHref:(id)arg1;
- (id)href;

@end
