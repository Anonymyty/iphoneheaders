/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UISearchController;

@interface UISearchContainerViewController : UIViewController {

	UISearchController* _searchController;

}

@property (nonatomic,retain) UISearchController * searchController;              //@synthesize searchController=_searchController - In the implementation block
-(void)didMoveToParentViewController:(id)arg1 ;
-(BOOL)_transitionsChildViewControllers;
-(void)_prepareForContainerTransition:(id)arg1 ;
-(UISearchController *)searchController;
-(void)_presentSearchControllerIfNecessary;
-(id)initWithSearchController:(id)arg1 ;
-(void)setSearchController:(UISearchController *)arg1 ;
@end

