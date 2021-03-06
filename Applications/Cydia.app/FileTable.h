/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:01:19 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Cydia/Cydia-Structs.h>
#import <Cydia/CyteViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class Database;

@interface FileTable : CyteViewController <UITableViewDataSource, UITableViewDelegate> {

	Database* database_;
	MenesObjectHandle<Package, 0> package_;
	MenesObjectHandle<NSString, 0> name_;
	MenesObjectHandle<NSMutableArray, 0> files_;
	MenesObjectHandle<UITableView, 2> list_;

}
-(void)releaseSubviews;
-(id)navigationURL;
-(void)setPackage:(id)arg1 ;
-(void)reloadData;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewDidLoad;
-(id)initWithDatabase:(id)arg1 ;
@end

