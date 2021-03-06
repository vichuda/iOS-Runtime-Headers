/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKPickerTableView, NSTimeZone;

@interface EKEventDateEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate, EKCellShortener, EKTimeZoneViewControllerDelegate> {
    EKPickerTableView *_contentView;
    struct { 
        int year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    } _startGr;
    struct { 
        int year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    } _endGr;
    int _lastSelectedRow;
    BOOL _allDay;
    unsigned int _changingDate : 1;
    unsigned int _switchChanging : 1;
    unsigned int _endTimeWasMessedUp : 1;
    unsigned int _dontAnimateDateChange : 1;
    int _shorteningStatus;
    NSTimeZone *_timeZone;
    BOOL _showsTimeZone;
}

@property(copy) NSTimeZone * timeZone;
@property BOOL showsTimeZone;


- (void)dealloc;
- (void)setEndDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (void)setStartDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (void)setAllDay:(BOOL)arg1;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })endDate;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })startDate;
- (BOOL)isAllDay;
- (BOOL)calendarPreferencesTable:(id)arg1 canSelectRow:(int)arg2 inGroup:(int)arg3;
- (BOOL)_cellShouldUseShortDate:(id)arg1;
- (void)timeZoneViewControllerDidCancel:(id)arg1;
- (void)timeZoneViewController:(id)arg1 didSelectTimeZone:(id)arg2;
- (void)_allDayChanged:(id)arg1;
- (id)_timeZoneDescription;
- (void)_pickNextReasonableTime;
- (id)_dateColor;
- (BOOL)_endDateIsBeforeStartDate;
- (void)_updateDatePicker;
- (void)_updateTimeWidths;
- (void)_updateDateColors;
- (void)_resetStartString:(BOOL)arg1 endString:(BOOL)arg2;
- (BOOL)validateAllowingAlert:(BOOL)arg1;
- (BOOL)fitsPopoverWhenKeyboardActive;
- (void)setShowsTimeZone:(BOOL)arg1;
- (BOOL)showsTimeZone;
- (void)_localeChanged;
- (void)shortenCell:(id)arg1;
- (id)navigationTitle;
- (void)datePickerChanged:(id)arg1;
- (id)timeZone;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidUnload;
- (void)loadView;
- (void)viewDidLoad;
- (BOOL)tableView:(id)arg1 wantsHeaderForSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)setTimeZone:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
