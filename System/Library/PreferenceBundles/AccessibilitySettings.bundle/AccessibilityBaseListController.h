/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray;

@interface AccessibilityBaseListController : PSListController {

	BOOL _detailItemsHidden;
	NSArray* _detailItems;

}

@property (nonatomic,retain) NSArray * detailItems;               //@synthesize detailItems=_detailItems - In the implementation block
@property (assign,nonatomic) BOOL detailItemsHidden;              //@synthesize detailItemsHidden=_detailItemsHidden - In the implementation block
-(BOOL)detailItemsHidden;
-(id)cellForSpecifierID:(id)arg1 ;
-(void)showController:(id)arg1 withSpecifier:(id)arg2 ;
-(id)cellForSpecifier:(id)arg1 ;
-(void)updateTableCheckedSelection:(id)arg1 ;
-(id)specifierForIndexPath:(id)arg1 ;
-(NSArray *)detailItems;
-(void)setDetailItemsHidden:(BOOL)arg1 ;
-(id)specifiersByRemovingDetailItemsFromOriginalSpecifiers:(id)arg1 ifHidden:(BOOL)arg2 ;
-(void)updateVisibleCellsWithCheckedSelection:(id)arg1 ;
-(void)setDetailItems:(NSArray *)arg1 ;
-(void)dealloc;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)specifierForKey:(id)arg1 ;
@end

