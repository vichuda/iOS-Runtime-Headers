/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSMutableArray;

@interface IUCellConfigurationCache : NSObject  {
    NSMutableArray *_configurations;
    id _globalContext;
}

@property(retain) id globalContext;


- (void)dealloc;
- (void)reset;
- (id)initWithClass:(Class)arg1 tableHeight:(float)arg2;
- (id)configurationForRow:(unsigned int)arg1;
- (id)globalContext;
- (void)setGlobalContext:(id)arg1;
- (void)invalidateDynamicTrackCaches;

@end
