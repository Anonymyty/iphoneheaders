/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/ServerDocuments.app/Frameworks/ServerDocsClient.framework/ServerDocsClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewController.h>

@interface SVServersViewController : UICollectionViewController {

	Class _filesContainerViewControllerClass;

}

@property (nonatomic,retain) Class filesContainerViewControllerClass;              //@synthesize filesContainerViewControllerClass=_filesContainerViewControllerClass - In the implementation block
-(void)setFilesContainerViewControllerClass:(Class)arg1 ;
-(id)initWithFilesContainerViewControllerClass:(Class)arg1 ;
-(void)didUpdateAccounts;
-(void)updateTraitCollection;
-(id)showFilesViewControllerForAccount:(id)arg1 animated:(BOOL)arg2 ;
-(Class)filesContainerViewControllerClass;
-(id)initWithCoder:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)updateFonts;
@end

