/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class GQDTTableModel, GQDSStyle;

@interface GQDTTable : GQDGraphic <GQDNameMappable> {
    GQDTTableModel *mModel;
    GQDSStyle *mStyle;
    BOOL mIsStreamed;
}

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (void)dealloc;
- (void)setModel:(id)arg1;
- (id)model;
- (void)setTableStyle:(id)arg1;
- (id)tableStyle;
- (id)defaultVectorStyleForVectorType:(int)arg1;
- (BOOL)isStreamed;
- (int)walkTableWithGenerator:(Class)arg1 state:(id)arg2;

@end
