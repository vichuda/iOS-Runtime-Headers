/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray;

@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView  {
    NSMutableArray *m_menuOptions;
    struct CGSize { 
        float width; 
        float height; 
    } m_preferredSize;
}

+ (id)activeInstance;
+ (id)sharedInstance;

- (void)dealloc;
- (id)titleForItemAtIndex:(int)arg1;
- (void)didSelectItemAtIndex:(int)arg1;
- (int)defaultSelectedIndex;
- (struct CGSize { float x1; float x2; })preferredSize;
- (int)numberOfItems;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
