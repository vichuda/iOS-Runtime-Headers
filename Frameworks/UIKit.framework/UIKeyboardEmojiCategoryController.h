/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary, <UIKeyboardEmojiController>, NSMutableDictionary;

@interface UIKeyboardEmojiCategoryController : NSObject  {
    <UIKeyboardEmojiController> *emojiController;
    NSMutableDictionary *categories;
    NSMutableDictionary *_defaultsData;
}

@property(retain) NSDictionary * defaultsData;


- (void)dealloc;
- (id)categoryForKey:(id)arg1;
- (void)updateRecents;
- (id)defaultsData;
- (void)releaseCategories;
- (void)setDefaultsData:(id)arg1;
- (id)initWithController:(id)arg1;

@end
