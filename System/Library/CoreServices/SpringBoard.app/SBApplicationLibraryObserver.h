/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:24 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/FBApplicationLibraryObserver.h>

@class FBApplicationLibrary, NSMutableDictionary, NSHashTable, NSArray, NSString;

@interface SBApplicationLibraryObserver : NSObject <FBApplicationLibraryObserver> {

	FBApplicationLibrary* _appLibrary;
	NSMutableDictionary* _placeholdersByBundleID;
	NSHashTable* _applicationObservers;
	NSHashTable* _placeholderObservers;

}

@property (nonatomic,readonly) FBApplicationLibrary * appLibrary;              //@synthesize appLibrary=_appLibrary - In the implementation block
@property (nonatomic,copy,readonly) NSArray * placeholders; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)notePlaceholderCancelled:(id)arg1 ;
-(void)addApplicationLifecycleObserver:(id)arg1 ;
-(FBApplicationLibrary *)appLibrary;
-(void)_addObserver:(id)arg1 table:(id)arg2 ;
-(void)_removeObserver:(id)arg1 table:(id)arg2 ;
-(void)removeApplicationLifecycleObserver:(id)arg1 ;
-(void)addPlaceholderLifecycleObserver:(id)arg1 ;
-(void)removePlaceholderLifecycleObserver:(id)arg1 ;
-(id)init;
-(void)applicationLibrary:(id)arg1 didAddPlaceholders:(id)arg2 ;
-(void)applicationLibrary:(id)arg1 didCancelPlaceholders:(id)arg2 ;
-(void)applicationLibrary:(id)arg1 didAddApplications:(id)arg2 ;
-(void)applicationLibrary:(id)arg1 didReplaceApplications:(id)arg2 withApplications:(id)arg3 ;
-(void)applicationLibrary:(id)arg1 didRemoveApplications:(id)arg2 ;
-(void)applicationLibrary:(id)arg1 didDemoteApplications:(id)arg2 ;
-(void)applicationLibrary:(id)arg1 networkUsageDidChange:(BOOL)arg2 ;
-(NSArray *)placeholders;
@end

