/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface RTOneHomeWorkExpertResult : NSObject {

	NSUUID* _homeUUID;
	NSUUID* _workUUID;

}

@property (nonatomic,retain) NSUUID * homeUUID;              //@synthesize homeUUID=_homeUUID - In the implementation block
@property (nonatomic,retain) NSUUID * workUUID;              //@synthesize workUUID=_workUUID - In the implementation block
-(id)init;
-(NSUUID *)homeUUID;
-(void)setHomeUUID:(NSUUID *)arg1 ;
-(NSUUID *)workUUID;
-(void)setWorkUUID:(NSUUID *)arg1 ;
@end

