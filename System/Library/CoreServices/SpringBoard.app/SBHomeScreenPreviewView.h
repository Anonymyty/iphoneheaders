/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:23 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBFolderViewDelegate.h>

@class SBIconViewMap, SBFolderView, NSString;

@interface SBHomeScreenPreviewView : UIView <SBFolderViewDelegate> {

	SBIconViewMap* _viewMap;
	SBFolderView* _folderContent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)cleanupPreview;
+(id)preview;
-(id)initWithFrame:(CGRect)arg1 iconController:(id)arg2 ;
-(Class)iconListViewClassForFolderView:(id)arg1 ;
-(void)folderView:(id)arg1 currentPageIndexDidChange:(long long)arg2 ;
-(void)folderViewWillBeginScrolling:(id)arg1 ;
-(void)folderViewDidEndScrolling:(id)arg1 ;
-(void)folderViewShouldClose:(id)arg1 ;
-(void)folderViewShouldBeginEditing:(id)arg1 ;
-(void)dealloc;
@end
