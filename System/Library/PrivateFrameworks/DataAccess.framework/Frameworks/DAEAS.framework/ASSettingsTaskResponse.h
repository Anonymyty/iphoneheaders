/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSNumber, ASSettingsTaskUserInformationResponse, ASSettingsTaskOofResponse;

@interface ASSettingsTaskResponse : ASItem {

	NSNumber* _status;
	ASSettingsTaskUserInformationResponse* _userInformation;
	ASSettingsTaskOofResponse* _oof;

}

@property (nonatomic,retain) NSNumber * status;                                                    //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) ASSettingsTaskUserInformationResponse * userInformation;              //@synthesize userInformation=_userInformation - In the implementation block
@property (nonatomic,retain) ASSettingsTaskOofResponse * oof;                                      //@synthesize oof=_oof - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)setUserInformation:(ASSettingsTaskUserInformationResponse *)arg1 ;
-(void)setOof:(ASSettingsTaskOofResponse *)arg1 ;
-(ASSettingsTaskUserInformationResponse *)userInformation;
-(ASSettingsTaskOofResponse *)oof;
@end

