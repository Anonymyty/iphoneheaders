/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:34:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SLFacebookContactUpaterDelegate, OS_dispatch_queue;
@class NSArray, ACAccount, ACAccountStore, NSObject;

@interface SLFacebookContactUpdater : NSObject {

	void* _addressBook;
	NSArray* _recordsToUpdate;
	long long _updatedRecordCount;
	ACAccount* _account;
	ACAccountStore* _accountStore;
	id<SLFacebookContactUpaterDelegate> _delegate;
	BOOL _isCanceled;
	NSObject*<OS_dispatch_queue> _addressBookQueue;

}

@property (assign,nonatomic,__weak) id<SLFacebookContactUpaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithAccount:(id)arg1 andAccountStore:(id)arg2 ;
-(BOOL)_shouldUpdateProfileImageForPerson:(void*)arg1 ;
-(BOOL)_setProfileImageForPerson:(void*)arg1 fromData:(id)arg2 ;
-(BOOL)_updateSocialProfileForPerson:(void*)arg1 inSource:(void*)arg2 withResult:(id)arg3 ;
-(BOOL)_updateProfileImageForPerson:(void*)arg1 withResult:(id)arg2 ;
-(id)_listOfRecordsToUpdate;
-(void)_processLookupResults:(id)arg1 ;
-(id)_canonicalizaPhoneNumbers:(id)arg1 ;
-(void)setDelegate:(id<SLFacebookContactUpaterDelegate>)arg1 ;
-(void)dealloc;
-(id<SLFacebookContactUpaterDelegate>)delegate;
-(void)stop;
-(void)start;
@end

