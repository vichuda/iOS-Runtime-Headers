/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSString, NSMutableArray;

@interface ABVCardParameter : NSObject  {
    NSString *_name;
    NSString *_grouping;
    id _value;
    NSMutableArray *_types;
    BOOL _primary;
}


- (id)description;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (BOOL)isPrimary;
- (void)addType:(id)arg1;
- (id)types;
- (void)setIsPrimary:(BOOL)arg1;
- (void)addTypes:(id)arg1;
- (void)finalize;
- (id)value;
- (void)setValue:(id)arg1;
- (id)name;
- (id)grouping;
- (void)setGrouping:(id)arg1;

@end
