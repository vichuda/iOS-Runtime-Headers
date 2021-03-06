/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPopoverBackgroundView : UIView  {
}

@property float arrowOffset;
@property unsigned int arrowDirection;

+ (id)_shadowPathForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 arrowDirection:(unsigned int)arg2;
+ (float)_shadowRadius;
+ (float)_shadowOpacity;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_shadowInsets;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentViewInsets;
+ (float)arrowBase;
+ (float)arrowHeight;
+ (struct CGSize { float x1; float x2; })_shadowOffset;

- (id)_shadowPath;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentViewFrame;
- (int)backgroundStyle;
- (float)arrowOffset;
- (void)setArrowOffset:(float)arg1;
- (void)_updateShadow;
- (void)setArrowDirection:(unsigned int)arg1;
- (unsigned int)arrowDirection;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;

@end
