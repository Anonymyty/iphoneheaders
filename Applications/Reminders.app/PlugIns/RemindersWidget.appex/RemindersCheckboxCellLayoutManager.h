/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 11:31:33 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/Reminders.app/PlugIns/RemindersWidget.appex/RemindersWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemindersWidget/RemindersWidget-Structs.h>
#import <UIKit/UITableViewCellLayoutManager.h>

@interface RemindersCheckboxCellLayoutManager : UITableViewCellLayoutManager {

	id _realLayoutManager;

}
+(id)sharedLayoutManager;
-(CGRect)reorderControlEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(CGRect)reorderControlStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(CGRect)editControlEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(BOOL)editControlShouldFadeForCell:(id)arg1 ;
-(BOOL)reorderControlShouldFadeForCell:(id)arg1 ;
-(CGRect)editControlStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
@end

