/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Accounts/DataclassOwners/News.bundle/News
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bookmarks/ACDDataclassOwnerProtocol.h>

@class FRFileCoordinatedAccountActionQueue, NSString;

@interface FRDataclassOwner : NSObject <ACDDataclassOwnerProtocol> {

	FRFileCoordinatedAccountActionQueue* _fileCoordinatedAccountActionQueue;

}

@property (nonatomic,retain) FRFileCoordinatedAccountActionQueue * fileCoordinatedAccountActionQueue;              //@synthesize fileCoordinatedAccountActionQueue=_fileCoordinatedAccountActionQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dataclasses;
-(id)actionsForEnablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2 ;
-(id)actionsForDisablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2 ;
-(id)actionsForAddingAccount:(id)arg1 forDataclass:(id)arg2 ;
-(id)actionsForDeletingAccount:(id)arg1 forDataclass:(id)arg2 ;
-(BOOL)performAction:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 forDataclass:(id)arg4 ;
-(FRFileCoordinatedAccountActionQueue *)fileCoordinatedAccountActionQueue;
-(BOOL)_hasLocalData;
-(void)setFileCoordinatedAccountActionQueue:(FRFileCoordinatedAccountActionQueue *)arg1 ;
-(id)init;
@end

