/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSString, NSMutableDictionary;

@interface UIKBTree : NSObject <NSCopying> {
    int type;
    NSString *name;
    NSMutableDictionary *properties;
    NSMutableArray *subtrees;
    NSMutableDictionary *cache;
}

@property(readonly) BOOL modifiesKeyplane;
@property(readonly) BOOL acceptsShiftLock;
@property int type;
@property(retain) NSString * name;
@property(retain) NSMutableDictionary * properties;
@property(retain) NSMutableArray * subtrees;
@property(retain) NSMutableDictionary * cache;

+ (id)treeOfType:(int)arg1;
+ (id)stringForType:(int)arg1;
+ (id)uniqueName;
+ (id)key;
+ (id)keyboard;

- (void)setName:(id)arg1;
- (void)setProperties:(id)arg1;
- (id)initWithType:(int)arg1 withName:(id)arg2 withProperties:(id)arg3 withSubtrees:(id)arg4 withCache:(id)arg5;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)renderAsStringKey;
- (id)cacheDisplayString;
- (BOOL)shouldCacheKey;
- (void)setGhost:(BOOL)arg1;
- (void)setIsClientVariantOverride:(BOOL)arg1;
- (BOOL)isLetters;
- (id)keyAttributes;
- (id)geometries;
- (id)keyForString:(id)arg1;
- (void)cacheKey:(id)arg1;
- (BOOL)subtreesAreOrdered;
- (int)indexOfSubtree:(id)arg1;
- (id)subtreesWithProperty:(id)arg1 value:(id)arg2;
- (id)subtreeWithName:(id)arg1 rows:(id)arg2;
- (id)subtreeWithType:(int)arg1;
- (BOOL)isDuplicateOfTree:(id)arg1;
- (BOOL)isEqualToTree:(id)arg1;
- (BOOL)isHashed;
- (id)nameFromAttributes;
- (BOOL)renderAsStringKeyExcludingPunctuation:(BOOL)arg1;
- (int)_variantType;
- (id)componentName;
- (id)attributeSet:(BOOL)arg1;
- (id)geometrySet:(BOOL)arg1;
- (id)subtreeAtIndexPath:(id)arg1 withPosition:(int)arg2;
- (BOOL)isSameAsTree:(id)arg1;
- (void)setCache:(id)arg1;
- (BOOL)isLeafType;
- (id)properties;
- (BOOL)usesAdaptiveKeys;
- (id)keysOrderedByPosition;
- (BOOL)looksLike:(id)arg1;
- (void)setDisabled:(BOOL)arg1;
- (id)variantDisplayString;
- (void)setSplitMode:(int)arg1;
- (int)splitMode;
- (void)setAttributes:(id)arg1;
- (void)setInteractionType:(int)arg1;
- (BOOL)setObject:(id)arg1 forProperty:(id)arg2;
- (BOOL)modifiesKeyplane;
- (BOOL)acceptsShiftLock;
- (BOOL)behavesAsShiftKey;
- (id)unhashedName;
- (id)alternateKeyplaneName;
- (void)setRendering:(int)arg1;
- (id)keysOrderedByPositionWithoutZip;
- (void)setSubtrees:(id)arg1;
- (void)setVariantPopupBias:(id)arg1;
- (void)setVariantType:(int)arg1;
- (id)clientVariantRepresentedString;
- (id)clientVariantActionName;
- (void)setDisplayType:(int)arg1;
- (id)variantPopupBias;
- (BOOL)boolForProperty:(id)arg1;
- (BOOL)usesKeyCharging;
- (BOOL)supportsType:(int)arg1;
- (void)setShape:(id)arg1;
- (BOOL)isClientVariantOverride;
- (id)cache;
- (BOOL)notUseCandidateSelection;
- (void)removeClientVariantActionInfo;
- (void)setClientVariantRepresentedString:(id)arg1;
- (void)setClientVariantActionName:(id)arg1;
- (void)setOverrideDisplayString:(id)arg1;
- (int)variantType;
- (BOOL)disabled;
- (void)setDisplayRowHint:(int)arg1;
- (id)numberForProperty:(id)arg1;
- (id)keySet;
- (void)zipGeometrySet;
- (id)firstCachedKeyWithName:(id)arg1;
- (id)keysByKeyName:(id)arg1;
- (id)shiftAlternateKeyplaneName;
- (BOOL)isShiftKeyplane;
- (BOOL)looksLikeShiftAlternate;
- (void)setRepresentedString:(id)arg1;
- (void)setDisplayTypeHint:(int)arg1;
- (void)setDisplayString:(id)arg1;
- (id)cachedKeysByKeyName:(id)arg1;
- (id)keys;
- (id)subtrees;
- (id)subtreeWithName:(id)arg1;
- (id)stringForProperty:(id)arg1;
- (id)layoutName;
- (void)setFrameOnly:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)shape;
- (void)setPaddedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setGeometry:(id)arg1;
- (id)geometry;
- (id)displayString;
- (int)displayTypeHint;
- (id)overrideDisplayString;
- (int)intForProperty:(id)arg1;
- (BOOL)ghost;
- (int)interactionType;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })paddedFrame;
- (int)rendering;
- (int)displayRowHint;
- (int)visualStyle;
- (int)displayType;
- (void)setVisualStyle:(int)arg1;
- (id)keyplaneForKey:(id)arg1;
- (BOOL)isShiftKeyPlaneChooser;
- (BOOL)visible;
- (BOOL)shouldSkipCandidateSelection;
- (BOOL)usesAutoShift;
- (void)setShouldSkipCandidateSelection:(BOOL)arg1;
- (id)representedString;
- (int)type;
- (void)setVisible:(BOOL)arg1;
- (int)textAlignment;
- (void)setTextAlignment:(int)arg1;
- (id)recursiveDescription;
- (id)name;
- (id)initWithType:(int)arg1;
- (void)setType:(int)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;

@end
