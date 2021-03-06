/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUIMultiResultTableViewCell.h>
#import <libobjc.A.dylib/CNContactGridViewControllerDelegate.h>

@class CNContactGridViewController, NSArray, NSString;

@interface SearchUIContactsTableViewCell : SearchUIMultiResultTableViewCell <CNContactGridViewControllerDelegate> {

	CNContactGridViewController* _contactsViewController;
	NSArray* _contactIdentifiers;

}

@property (retain) CNContactGridViewController * contactsViewController;              //@synthesize contactsViewController=_contactsViewController - In the implementation block
@property (nonatomic,retain) NSArray * contactIdentifiers;                            //@synthesize contactIdentifiers=_contactIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)reset;
-(void)willMoveToWindow:(id)arg1 ;
-(NSArray *)contactIdentifiers;
-(void)gridViewController:(id)arg1 didPerformAction:(id)arg2 forContactAtIndex:(long long)arg3 withContactProperty:(id)arg4 ;
-(id)makeCollectionView;
-(id)collectionViewWrapper;
-(id)collectionViewDataSource;
-(BOOL)includeTopPaddingInSingleRowHeight;
-(void)updateNumberOfColumns:(long long)arg1 ;
-(void)setContactsViewController:(CNContactGridViewController *)arg1 ;
-(void)setContactIdentifiers:(NSArray *)arg1 ;
-(CNContactGridViewController *)contactsViewController;
-(double)topInset;
-(double)bottomInset;
-(void)updateWithResults:(id)arg1 ;
@end

