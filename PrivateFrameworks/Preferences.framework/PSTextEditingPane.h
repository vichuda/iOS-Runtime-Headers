/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PreferencesTextTableCell, UITextField, UITableView;

@interface PSTextEditingPane : PSEditingPane <UITableViewDelegate, UITableViewDataSource> {
    UITableView *_table;
    PreferencesTextTableCell *_cell;
    UITextField *_textField;
}


- (void)dealloc;
- (BOOL)becomeFirstResponder;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPreferenceSpecifier:(id)arg1;
- (void)setPreferenceValue:(id)arg1;
- (id)preferenceValue;

@end
