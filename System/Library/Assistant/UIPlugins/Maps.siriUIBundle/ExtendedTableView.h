/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableView.h>

@interface ExtendedTableView : UITableView {

	long long _countOfActiveUpdateBlocks;

}
-(void)_noteDataSourceChangedIfPossible;
-(void)setDataSource:(id)arg1 ;
-(void)reloadData;
-(void)beginUpdates;
-(void)endUpdates;
-(void)insertSections:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)deleteSections:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)reloadSections:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
@end
