/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <MobileCal/ListViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Private.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchBarDelegate.h>

@class NSTimer, UISearchBar, NSString;

@interface SearchResultsViewController : ListViewController <UIScrollViewDelegate, UIViewControllerPreviewingDelegate_Private, UISearchResultsUpdating, UISearchBarDelegate> {

	NSTimer* _timer;
	BOOL _showFilteredData;
	BOOL _pendingUpdate;
	UISearchBar* _searchBar;

}

@property (assign,nonatomic,__weak) UISearchBar * searchBar;              //@synthesize searchBar=_searchBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)noContentStringForListTableView:(id)arg1 ;
-(BOOL)showFilteredData;
-(id)backButtonTitleForEventDetails;
-(void)scrollToDate:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)shouldUpdateModelSelectedDate;
-(void)setShowFilteredData:(BOOL)arg1 ;
-(void)_searchResultsUpdated:(id)arg1 ;
-(void)_updateFilterState;
-(void)_updateTableAlpha;
-(void)_setContentInsets;
-(void)_refreshView;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(long long)positionForBar:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UISearchBar *)searchBar;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(CGRect)_searchBar:(id)arg1 proposedSearchFieldFrame:(CGRect)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)beginSearch:(id)arg1 ;
-(void)cancelTimer;
-(void)_eventStoreChanged:(id)arg1 ;
-(BOOL)eventViewDelegateShouldHandlePresentationOfEditViewController:(id)arg1 ;
-(void)eventViewController:(id)arg1 requestsDisplayOfEditViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)eventViewController:(id)arg1 requestsDismissalOfEditViewController:(id)arg2 ;
-(BOOL)eventViewControllerShouldHideInlineEditButton;
-(void)_setSearchString:(id)arg1 ;
@end

