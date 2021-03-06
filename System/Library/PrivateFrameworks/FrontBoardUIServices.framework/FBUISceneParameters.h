/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardUIServices/FrontBoardUIServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBSDisplay, FBSSceneSettings, FBSSceneClientSettings;

@interface FBUISceneParameters : NSObject <NSCopying> {

	FBSDisplay* _display;
	FBSSceneSettings* _settings;
	FBSSceneClientSettings* _clientSettings;

}

@property (nonatomic,retain) FBSDisplay * display;                               //@synthesize display=_display - In the implementation block
@property (nonatomic,copy) FBSSceneSettings * settings;                          //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy) FBSSceneClientSettings * clientSettings;              //@synthesize clientSettings=_clientSettings - In the implementation block
+(id)parametersForSpecification:(id)arg1 ;
-(void)dealloc;
-(FBSSceneSettings *)settings;
-(FBSDisplay *)display;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSettings:(FBSSceneSettings *)arg1 ;
-(FBSSceneClientSettings *)clientSettings;
-(void)updateClientSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)setClientSettings:(FBSSceneClientSettings *)arg1 ;
-(id)initWithSpecification:(id)arg1 ;
-(void)updateSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)setDisplay:(FBSDisplay *)arg1 ;
@end

