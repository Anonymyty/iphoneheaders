/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMLockFile : NSObject {

	NSString* _path;
	int _fd;
	BOOL _locked;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL locked;                  //@synthesize locked=_locked - In the implementation block
-(BOOL)tryLock:(BOOL)arg1 ;
-(BOOL)lock:(BOOL)arg1 ;
-(BOOL)_lock:(BOOL)arg1 blocking:(BOOL)arg2 ;
-(void)dealloc;
-(NSString *)path;
-(void)unlock;
-(id)initWithPath:(id)arg1 ;
-(BOOL)locked;
@end

